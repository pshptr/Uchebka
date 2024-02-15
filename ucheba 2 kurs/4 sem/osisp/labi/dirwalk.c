#define _DEFAULT_SOURCE

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <getopt.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

void bypass_dir(DIR* directory, char* name, int* flags);
void check_flags_and_output(char* name, int* flags);

int main(int argc, char *argv[]) {
    if (argc == 0) {                                    //check arguments in command line
        printf("Bad argumets in command line\n");
        exit(EXIT_FAILURE);                                 //exit if bad arguments
    }
    int* flags = (int*)calloc(3, sizeof(int));          //array of command line options

    int buffer = 0;                                     //buffer for reading option
    while ((buffer=getopt(argc, argv, "-fdl"))!=-1){    //reading options
        switch (buffer){                                    //some option come
        case 'f':flags[0] = 1; break;                       //regular file
        case 'l':flags[1] = 1; break;                       //link
        case 'd':flags[2] = 1; break;                       //directory
        }
    }
    if (!flags[0] && !flags[1] && !flags[2]){           //if no options in command line
        flags[0] = 1;                                   //set all options
        flags[1] = 1; 
        flags[2] = 1;
    }

    int is_current_dir = 1;                               //output current directory
    char name[250];                                     //directory name
    for (int i = 1; i < argc; i++) {                    //search directory name
       if (argv[i][0] == '/' || argv[i][0] == '.') {        //find directory name
           strcpy(name, argv[i]);                           
           bypass_dir(opendir(argv[i]), argv[i], flags);         //bypass this directory
           is_current_dir = 0;                                    //it is not current directory
           break;
       } 
    }
    if (is_current_dir == 1) {                            //pass current directory
        strcpy(name, "." );
		bypass_dir(opendir(name), name, flags);
    }
	
    return EXIT_SUCCESS;                                //end of program
}

//function for output files in derectory
void bypass_dir(DIR* directory,char* name, int* flags){
    if (!directory)return;                               //if some problems with directory's opening                             
    struct dirent* element;                              //element of directory
	char* here_name;
    while((element = readdir(directory))!= NULL){  
        if (strcmp(element->d_name, ".") && strcmp(element->d_name, ".."))   //output elements from directory
        {
			here_name = (char*)malloc(strlen(name) + 1);
			strcpy(here_name, name);
			here_name = (char*)realloc(here_name, strlen(here_name) + 2);
            strcat(here_name, "/");
			here_name = (char*)realloc(here_name, strlen(here_name) + strlen(element->d_name) + 1);
            strcat(here_name, element->d_name);
            check_flags_and_output( here_name, flags);//output element
			free(here_name);
        }
    }
    closedir(directory);
}

//output directory element in dependence of command line options
void check_flags_and_output(char* name, int* flags){
    struct stat buff;
    lstat(name, &buff);
    if(S_ISREG(buff.st_mode) && flags[0] == 1){
	 printf("f - %s\n", name); 
    } else if(S_ISDIR(buff.st_mode) && flags[2] == 1){
    	printf("d - %s\n", name);                                   //output like directory
        bypass_dir(opendir(name),name,flags);   
    } else if(S_ISLNK(buff.st_mode) && flags[1] == 1){
    	printf("l - %s\n", name);   
    }
}

