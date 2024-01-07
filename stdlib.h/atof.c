/* 
  用於將字符串參數str轉換為浮點數（double類型）。

  用法：double atof(const char *str);

  str − 這是具有浮點數表示的字符串。

  返回值：該函數將轉換後的浮點數作為double值返回。如果無法執行有效轉換，則返回零（0.0）。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atof(str);
   printf("字符串值 = %s, 浮點數值 = %f\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atof(str);
   printf("字符串值 = %s, 浮點數值 = %f\n", str, val);

   return(0);
}
// 結果
/*
字符串值 = 98993489, 浮點數值 = 98993488.000000
字符串值 = tutorialspoint.com, 浮點數值 = 0.000000
*/
