/* 回傳x的自然對數，即是ln x

  用法 double log(double x) 

  x -- 是浮點數值。 */

//範例
#include <stdio.h>
#include <math.h>

int main () {
   double x, ret;

   x = 2.7; //預計計算的真數
   ret = log(x*val);
   printf("log( %lf ) = %lf", x, ret);
   
   return(0);
}

//結果
//log( 2.700000 ) = 0.993252
