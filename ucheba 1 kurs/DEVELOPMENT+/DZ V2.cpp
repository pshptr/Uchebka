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
  void individ1 ()
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
   void individ8 ()
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
  void individ91 ()
  {
      int b,n;
      int temp = 0;
      int arr[] = {2, 3, -4, -12, 9, -3, 0};
      for(int i = 0; i < 7; i++) {
        if(arr[i] < 0) {
            int arr[] = {};
            for(int a = 0; a < 4; a++) {
                arr[a] = arr[i];
                cout << arr[a] << endl;
                break;
            }
        }
      } 
      
  }
  void individ9 ()
  {
      int arr[] = {2, 3, -4, -12, 9, -3, 0};
      for(int i = 0; i < 7; i++) {
          
      }
      
  }
  void individ13 ()
  {
       int K = 0;
       int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 23, 44};
       double average = 0;
      for(int i = 0; i < 10; i++) {
          if(arr[i] < 0) {
              cout << arr[i] << endl;
          }
      }
  }
    void individ3 ()
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
}
int main ()
{
  dz::individ3 ();
  return 0;
}

