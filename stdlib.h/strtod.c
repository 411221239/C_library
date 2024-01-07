/* 
  用於將參數str指向的字符串轉換為浮點數（double類型）。如果endptr不為NULL，則將指向轉換中使用的最後一個字符之後的字符的指針存儲在endptr引用的位置。

  用法：double strtod(const char *str, char **endptr);

  str − 這是要轉換為字符串的值。

  endptr − 這是char*類型的引用，其值由該函數設置為數值後str中的下一個字符的位置。

  返回值：該函數將轉換後的浮點數作為double值返回，否則返回零值（0.0）。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main () { 
   char str[30] = "20.30300 This is test";
   char *ptr;
   double ret;

   ret = strtod(str, &ptr);
   printf("數字（double）為 %lf\n", ret);
   printf("字符串部分為 |%s|", ptr);

   return(0);
}
// 結果
/*
數字（double）為 20.303000
字符串部分為 | This is test|
*/
