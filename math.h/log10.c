/* 用法 double log10(double x) 

  x -- 是浮點數值。 */

//範例
#include <stdio.h>
#include <math.h>

int main () {
   double x, ret;

   x = 10000; //預計計算的真數
   ret = log10(x);
   printf("log10( %lf ) = %lf", x, ret);
   
   return(0);
}

//結果
//log10( 10000.000000 ) = 4.000000
