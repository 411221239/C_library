/* 回傳x的餘弦值 

  用法 double cos(double x) 

  x -- 這是表示以弧度表示的角度的浮點數值。 */

//範例
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, ret, val;

   x = 60.0; //預計計算的角度
   val = PI / 180; //轉成弧度的常數
   ret = cos(x*val);
   printf("%lf 度的餘弦為 %lf", x, ret);
   
   return(0);
}

//結果
//60.000000 度的餘弦為 0.500000
