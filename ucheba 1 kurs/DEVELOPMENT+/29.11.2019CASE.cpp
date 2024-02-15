#include <iostream>
#include <cmath>

using namespace std;
 namespace part_1 {
     void begin1 () {
     /*ƒан номер мес€цаЧ целое число в диапазоне1Ц12 
     (1 Ч €нварь, 2 Ч  февраль и т. д.). 
     ќпределить количество дней в этом мес€це дл€ невисо-косного года.*/
     int days;
     cout<<"¬ведите количество дней в году: ";
     cin >> days;
     
     bool isLeapYear;
     if (days == 366) {
            isLeapYear = true;
     } else {
         isLeapYear = false;
     }
     
     cout<<"¬ведите номер мес€ца: ";
     int a;
     cin>>a;
     
     
     
     switch(a) {
         case 1: cout<<"€нварь - 31 день "<<endl;
         break;
          case 2: {
              if (isLeapYear) {
                cout<<"февраль - 29 дней "<<endl; 
              } else {
                   cout<<"февраль - 28 дней "<<endl; 
              }
          }
         break;
          case 3: cout<<"март - 31 день "<<endl;
         break;
          case 4: cout<<"апрель - 30 дней "<<endl;
         break;
          case 5: cout<<"май - 31 день "<<endl;
         break;
          case 6: cout<<"июнь - 30 дней "<<endl;
         break;
          case 7: cout<<"июль - 31 день "<<endl;
         break;
          case 8: cout<<"август - 31 день "<<endl;
         break;
          case 9: cout<<"сент€брь - 30 дней "<<endl;
         break;
          case 10: cout<<"окт€брь - 31 день "<<endl;
         break;
          case 11: cout<<"но€брь - 30 дней "<<endl;
         break;
          case 12: cout<<"декабрь - 31 день "<<endl;
         break;
         
         default: {cout<<"error "<<endl;}
         
       }
   }
    
    void begin2 () {
         int a;
         double A,B;
         int N;
         cout<<"¬ведите значени€ ј и ¬ "<<endl;
         cin>>A>>B;
         cout<<"¬ведите номер действи€ "<<endl;
         cin>>a;
         switch(a) {
             case 1: A+B; //сложение - 1
             cout<<A+B<<endl;
             break;
             
              case 2: A-B; //вычитание - 2
             cout<< A-B<<endl;
             break;
             
              case 3: A*B; //умножение - 3
             cout<<A*B<<endl;
             break;
             
              case 4: A/B; //деление - 4
             cout<<A/B<<endl;
             break;
             
             default: {cout<<"error"<<endl;}
        }
         
    }
    void begin3 () {
        /*ƒано  целое  число  в  диапазоне100Ц999. 
        ¬ывести  строку-описание данного числа, например: 
        256 Ч Ђдвести п€тьдес€т шестьї, 814 Ч Ђвосемьсот четырнадцатьї.*/
        int a;
        cin>>a;
        switch(a) {
            
        }
    }
 }
 
int main()
 {   
    part_1::begin2();
    return 0;
}

 #include <iostream>
#include <cmath>

using namespace std;
 namespace part_1 {
     void begin1 () {
     /*ƒан номер мес€цаЧ целое число в диапазоне1Ц12 
     (1 Ч €нварь, 2 Ч  февраль и т. д.). 
     ќпределить количество дней в этом мес€це дл€ невисо-косного года.*/
     int days;
     cout<<"¬ведите количество дней в году: ";
     cin >> days;
     
     bool isLeapYear;
     if (days == 366) {
            isLeapYear = true;
     } else {
         isLeapYear = false;
     }
     
     cout<<"¬ведите номер мес€ца: ";
     int a;
     cin>>a;
     
     
     
     switch(a) {
         case 1: cout<<"€нварь - 31 день "<<endl;
         break;
          case 2: {
              if (isLeapYear) {
                cout<<"февраль - 29 дней "<<endl; 
              } else {
                   cout<<"февраль - 28 дней "<<endl; 
              }
          }
         break;
          case 3: cout<<"март - 31 день "<<endl;
         break;
          case 4: cout<<"апрель - 30 дней "<<endl;
         break;
          case 5: cout<<"май - 31 день "<<endl;
         break;
          case 6: cout<<"июнь - 30 дней "<<endl;
         break;
          case 7: cout<<"июль - 31 день "<<endl;
         break;
          case 8: cout<<"август - 31 день "<<endl;
         break;
          case 9: cout<<"сент€брь - 30 дней "<<endl;
         break;
          case 10: cout<<"окт€брь - 31 день "<<endl;
         break;
          case 11: cout<<"но€брь - 30 дней "<<endl;
         break;
          case 12: cout<<"декабрь - 31 день "<<endl;
         break;
         
         default: {cout<<"error "<<endl;}
         
       }
   }
    
    void begin2 () {
         int a;
         double A,B;
         int N;
         cout<<"¬ведите значени€ ј и ¬ "<<endl;
         cin>>A>>B;
         cout<<"¬ведите номер действи€ "<<endl;
         cin>>a;
         switch(a) {
             case 1: A+B; //сложение - 1
             cout<<A+B<<endl;
             break;
             
              case 2: A-B; //вычитание - 2
             cout<< A-B<<endl;
             break;
             
              case 3: A*B; //умножение - 3
             cout<<A*B<<endl;
             break;
             
              case 4: A/B; //деление - 4
             cout<<A/B<<endl;
             break;
             
             default: {cout<<"error"<<endl;}
        }
         
    }
    void begin3 () {
        /*ƒано  целое  число  в  диапазоне100Ц999. 
        ¬ывести  строку-описание данного числа, например: 
        256 Ч Ђдвести п€тьдес€т шестьї, 814 Ч Ђвосемьсот четырнадцатьї.*/
        int a;
        cin>>a;
        switch(a) {
            
        }
    }
 }
 
int main()
 {   
    part_1::begin2();
    return 0;
}

 