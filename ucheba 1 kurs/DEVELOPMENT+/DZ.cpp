#include <iostream>
#include <cmath>

using namespace std;

namespace dz
{

  void series11 ()
  {
    
    int arr[] = {5, 8, 4, 3, 2};
        int a;
        cout << "Введите значение элемента ";
        cin >> a;
        for(int i = 0; i<5; i++) {
             if(arr[i] == a) {
                std::cout << "Элемент найден. Индекс равен " << i << std::endl;
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
            cout << " Наибольший элемент массива равен " << max << endl;
        }
      }
    
   
  }
  
  void series123 ()
  {
    int arr[] = {5, 8, 4, 3, 2};
     int min = arr[0];
     for(int i = 0; i < 5; i++) {
         if(arr[i] < min) {
            min = arr[i];
            cout << " Наименьший элемент массива равен " << min << endl;
        }
      }
  }
  void series124 ()  // srednee arif
  {
      int arr[] = {5, 8, 4, 3, 2};
      double average = 0;
     for(int i = 0; i < 5; i++) {
         average += arr[i];
      }
      cout << average / 5 << endl;
  }
  void series1 ()
  {
       int arr[] = {5, 8, 4, 3, 2};
       int sum = 0;
     for(int i = 0; i < 5; i++) {
         sum += arr[i];
      }
      cout << sum << endl;
  }
   void series2 ()
  {
       int arr[] = {5, 8, 4, 3, 2};
       int compos = 1;
     for(int i = 0; i < 5; i++) {
         compos *= arr[i];
      }
      cout << compos << endl;
  }
   void series3 ()  // srednee arif 10 chisel
  {
      int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 24, 34};
      double average = 0;
     for(int i = 0; i < 10; i++) {
         average += arr[i];
      }
      cout << average / 10 << endl;
  }
   void series8 ()  
  {
      int K = 0;
      int N;
      cin >> N;
      int arr[N] = {5, 8, 4, 3, 2, 7, 9, 11, 24, 34};
     for(int i = 0; i < N; i++) {
         if(arr[i] % 2 == 0) {
            K = K + 1;
            cout << arr[i] << " " << endl;
         }
      } 
      cout << K << " " << endl;
  }
   void series9 ()  
  {
      int K = 0;
      int N;
      cin >> N;
      int arr[N] = {5, 8, 4, 0, 2, 7, 9, 11, 24, 34};
     for(int i = 0; i < N; i++) {
         if(arr[i] % 2 != 0) {
            K = K + 1;
            cout << arr[i] << " " << endl;
         }
      } 
      cout << K << " " << endl;
  }
   void individ2 ()  
  {
      int a = 0;
      int b = 0;
      int temp = 0;                                                                      
      int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 24, 34};
     for(int i = 0; i < 10; i++) {
         a = arr[9];
         arr[9] = arr[0];
         b = arr[8];
         arr[8] = arr[1];
         cout << arr[i];
     }
        
  }
   void individ8 ()
  {
     int arr[] = {5, 8, 4, 3, 2, 7, 9, 11, 24, 34};
     int max = arr[0];
     int min = arr[0];
     for(int i = 0; i < 10; i++) {
        if(arr[i] > max){                                           
            max = arr[i];
            arr[i] = 0;
         }
     }
      for(int i = 0; i < 10; i++) {
        if(arr[i] < min) {
            min = arr[i];
            arr[i] = 0;
         } cout << arr[i] << endl;
      } 
   
  }
  
}
int main ()
{
  dz::individ8 ();
  return 0;
}
