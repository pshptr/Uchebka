#include <iostream>
#include <cmath>

using namespace std;
   int main()
   {   
      int a=3;
      int b=4,c;
      c=a+b;
      
      if (a!=b) { b=c; a=b;
      } else
      if (a==b) { a=0; b=0;
      }
     cout<<a<<endl;
     cout<<b<<endl;
      
      return 0;
  }