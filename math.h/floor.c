/* 回傳小於或等於x的最大整數值
  
  用法 double floor(double x) 

  x -- 是浮點數值。 */

//範例
#include <stdio.h>
#include <math.h>

int main () {
   float val1, val2, val3, val4;

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;

   printf("值1 = %.1lf\n", floor(val1));
   printf("值2 = %.1lf\n", floor(val2));
   printf("值3 = %.1lf\n", floor(val3));
   printf("值4 = %.1lf\n", floor(val4));
   
   return(0);
}

//結果
/* 
  值1 = 1.0
  值2 = 1.0
  值3 = 2.0
  值4 = 2.0 */
