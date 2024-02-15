
#include <iostream>
#include <cmath>
using namespace std;
namespace part_1 {
    void begin1() {
        int a, b;
        cout << "¬ведите числа: ";
        cin >> a >> b;
        
        if(a > b) {
            cout << a << endl;
            cout << b << endl;
        } else {
            cout << b << endl;
            cout << a << endl;
        }
    }
    
    void begin2() {
        /*ƒаны две переменные вещественного типа: A, B.
        ѕерераспределить значени€ данных переменных так,
        чтобы в A оказалось меньшее из значений,
        а в BЧ большее. ¬ывести новые значени€ переменных A и B*/
    
        double a ,b;
        cout<<"¬ведите числа:"<<endl;
        cin >> a >> b;
        double temp= a;
        if (a > b) {
            a = b;
            b = temp;
        }
        // if(b > a) {
        //     temp = a;
        //     a = b;
        //     b = temp;
            
        // }
        cout << a << endl;
        cout << b << endl;
    }
    
    void begin3(){
       /* ƒаны две переменные целого типа: A и B.
        ≈сли их значени€ не равны, то
        присвоить каждой переменной сумму этих значений,
        а если равны, то присвоить переменным нулевые значени€.*/
    
        double a, b, sum;
        cout << "¬ведите числа:" << endl;
        cin >> a >> b;

        if (a != b) {
            double sum = a + b;
            a = sum;
            b = sum;
        } else if (a == b) {
            a = 0;
            b = 0;
        }  
         
        cout << a << endl;
        cout << b << endl;
    }
    
    void begin4(){
        /*ƒаны две переменные целого типа: A и B.
        ≈сли их значени€ не равны, то присвоить
        каждой переменной большее из этих значений
        , а если равны, то присвоить переменным нулевые значени€.*/
         double a, b, sum;
        cout << "¬ведите числа:" << endl;
        cin >> a >> b;
        if(a > b) {
            b=a;
        } else if(b > a) {
            a=b;
        } else if(a == b) {
            a=0;
            b=0;
        }
        cout << a << endl;
        cout << b << endl;
    }

 }
int main()
 {   
    part_1::begin4();
    return 0;
}
