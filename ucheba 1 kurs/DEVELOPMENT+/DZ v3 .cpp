#include <iostream>
#include <cmath>

using namespace std;

namespace dz
{

  void series11 ()
  {
    
    int arr[] = {5, 8, 4, 3, 2};
        int a;
        cout << "Aaaaeoa cia?aiea yeaiaioa ";
        cin >> a;
        for(int i = 0; i < 5; i++) {
             if(arr[i] == a) {
                std::cout << "Yeaiaio iaeaai. Eiaaen ?aaai " << i << std::endl;
            }
        }
  }

  void series122 ()
  {
     int arr[] = {5, 8, 4, 3, 2};
     int max = arr[0];
     for(int i = 0; i < 5; i++) {
         if(arr[i] > max) {
            max = arr[i];
            cout << " Iaeaieuoee yeaiaio ianneaa ?aaai " << max << endl;
        }
      }
    
   
  }
  
  void series124 ()
  {
    int arr[] = {5, 8, 4, 3, 2};
     int min = arr[0];
     for(int i = 0; i < 5; i++) {
         if(arr[i] < min) {
            min = arr[i];
            cout << " Iaeiaiuoee yeaiaio ianneaa ?aaai " << min << endl;
        }
      }
  }
  void series1 ()
  {
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
       int sum = 0;
      for(int i = 0; i < 10; i++) {
            sum += arr[i];
            cout << sum << endl;
      }
  }
  void series2 ()
  {
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
       int compos = 1;
      for(int i = 0; i < 10; i++) {
            compos *= arr[i];
            cout << compos << endl;
      }
  }
  void series3 ()
  {
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
       double average = 0;
      for(int i = 0; i < 10; i++) {
            average += arr[i];
      }
      cout << average / 10 << endl;
  }
  void series8 ()
  {
       int N;
       cin >> N;
       int K = 0;
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
      for(int i = 0; i < N; i++) {
            if(arr[i] % 2 == 0) {
                K = K + 1;
                cout << arr[i] << endl;
            }
      }
      cout << K << endl;
  }
  void series9 ()
  {
       int N;
       cin >> N;
       int K = 0;
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
      for(int i = 0; i < N; i++) {
            if(arr[i] % 2 != 0) {
                K = K + 1;
                cout << arr[i] << endl;
            }
      }
      cout << K << endl;
  }
  void series12 () 
  {
       int arr[] = {5, 8, 4, 3, 0, 2, 1};
       for(int i = 0; i < 7; i++) {
           if(arr[i] == 0) {
               break;
           }
           cout << arr[i] << " ";
       }
    
  }
}
  
  namespace dzv2 
  {
  
  void individ_1 ()
  {
       int b;
       int arr[] = {2, 1, 3, 0, 5, 8};
       int size = size;
       b = size - 1; 
       for(int i; i < size / 2; i++, b--) {
           int temp = arr[i];
           arr[i] = arr[b];
           arr[b] = sizeof(arr) / sizeof(arr[0]);
           cout << arr[i] << endl;
       } 
  }
   void individ_8 ()
  {
       int arr[] = {2, 1, 3, 4, 5, 8};
       int max = arr[0];
       int min = arr[0];
       int imax,imin;
       for (int i = 0; i < 6; i++) {
           if(arr[i] > max) {
               max = arr[i];
               imax = i;
           }
            if(arr[i] < min) {
               min = arr[i];
               imin = i;
           }
       } 
       arr[imax] = 0;
       arr[imin] = 0;
       for(int i = 0; i < 6; i++) {
           if(arr[i] != 0) {
             cout << arr[i] << endl;
           }
       }
  }
 
 
  void individ_13 ()
  {
       int K = 0;
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
       double average = 0;
      for(int i = 0; i < 10; i++) {
          average += arr[i];
      }
      cout << average / 10 << endl;
      for(int i = 0; i < 10; i++) {
          if(arr[i] > average / 10) {
              K = K + 1;
          }
      }
      cout << K << endl;
  }
    
    void individ_3 ()
  {
       int arr[] = {2, 1, 3, 4, 5, 8};
       int temp = 0;
       int b = 0;
       int max = arr[0];
       int min = arr[0];
       int imax,imin;
       for (int i = 0; i < 6; i++) {
           if(arr[i] > max) {
               max = arr[i];
               imax = i;
           }
            if(arr[i] < min) {
               min = arr[i];
               imin = i;
           }
       } 
       temp = arr[imax]; // temp = 8
       b = arr[imin]; // b = 1
       arr[imin] = temp; // min = 8
       arr[imax] = b; // max = 1
      for(int i = 0; i < 6; i++) {
          cout << arr[i] << endl;
      }
  }
  
   void individ_14 ()
  {
       
       int aver = 0; 
       int K = 0;
       int arr[] = {5, 8, 4, 65, 3, 12, 2, 7, 9, 11};
       int size = sizeof(arr) / sizeof(arr[0]);
       double average = 0;
      for(int i = 0; i < size; i++) {
          average += arr[i];
      }
      aver = average / 10;
      cout << aver << endl;
      for(int i = 0; i < size; i++) {
          if(arr[i] > aver) {
             arr[i] = 0;
          }
      }
      
      for(int i = 0; i < size; i++) {
          if(arr[i] != 0) {
              cout << arr[i] << endl;
          }
      }
  }
  
   void individ_11 ()
  {
       int aver = 0;
       int averA = 0;
       int averB = 0;
       int averC = 0;
       int averD = 0;
       int averX = 0;
       int averY = 0;
       int averz = 0;
       int avery = 0;
       int K = 0;
       int arr[] = {5, 8, 4, 65, 3, 12, 2, 7, 9, 10,};
       double average = 0;
      for(int i = 0; i < 10; i++) {
          average += arr[i];
      }
      
      aver = average / 10;
      cout << aver << endl;
      
      averA = aver + 3;
       averB = aver - 3;
       averC = aver + 2;
        averD = aver - 2;
         averX = aver + 1;
          averY = aver - 1;
     
     for(int i = 0; i < 10; i++) {
          if(arr[i] == averA || arr[i] == averB || arr[i] == averC 
          || arr[i] == averD || arr[i] == averX || arr[i] == averY) {
              K = K + 1;
          }
      } cout << K << endl;
     
      /* for(int i = 0; i < 10; i++) {
          if(arr[i] < averz) {
           K = K + 1;
          }
      } cout << K << endl;
      
      for(int i = 0; i < 10; i++) {
          if(arr[i] > avery) {
              K = K + 1;
          }
      }
      cout << K << endl; */
  }
  
  // 2  4   5   6   7    9     10    12     15
  
  void individ_5 ()
  {
      int arr[] = {2, 14, 3, 2, 6, 15, 6}; // 7 strochek
      
      for
  }
  

}
int main ()
{
  dzv2::individ_14 ();
  return 0;
}


