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
  
  void series124 ()
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
}
int main ()
{
  dz::series124 ();
  return 0;
}
