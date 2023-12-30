/* 回傳x的正切值 

  用法 double tan(double x) 

  x -- 這是表示以弧度表示的角度的浮點數值。 */

//範例
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
   double x, ret, val;

   x = 30.0; //預計計算的角度
   val = PI / 180; //轉成弧度的常數
   ret = tan(x*val);
   printf("%lf 度的正切為 %lf", x, ret);
   
   return(0);
}

//結果
//30.000000 度的正切為 0.577350
