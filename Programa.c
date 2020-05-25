#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int a = 12;
   int b = 3;

   int suma(int a, int b){
      return a+b;
   }
   int resta(int a, int b){
      return a-b;
   }
   int multi(int a, int b){
      return a*b;
   }

   int op1 = suma(a,b);
   printf("%i",op1);
   int op2 = resta(a,b);
   printf("%i",op2);
   int op3 = multi(a,b);
   printf("%i",op3);

return 0;
}
