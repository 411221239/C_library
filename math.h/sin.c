/* 用法 double sin(double x) 

  x -- 這是表示以弧度表示的角度的浮點數值。 */

//範例
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, ret, val;

   x = 45.0; //預計計算的角度
   val = PI / 180; //轉成弧度的常數
   ret = sin(x*val);
   printf("%lf 度的正弦為 %lf", x, ret);
   
   return(0);
}

//結果
//45.000000 度的正弦為 0.707107
