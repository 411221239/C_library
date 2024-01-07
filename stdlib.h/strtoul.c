/* 
  用於根據給定的進制，將字符串str中的初始部分轉換為unsigned long int值。進制必須在2和36之間（包括2和36），或者是特殊值0。

  用法：unsigned long int strtoul(const char *str, char **endptr, int base);

  str − 這是包含無符號整數表示的字符串。

  endptr − 這是char*類型的引用，其值由該函數設置為數值後str中的下一個字符的位置。

  base − 這是進制，必須在2和36之間（包括2和36），或者是特殊值0。

  返回值：該函數將轉換後的整數作為unsigned long int值返回。如果無法執行有效轉換，則返回零值。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main () {
   char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtoul(str, &ptr, 10);
   printf("數字（unsigned long integer）為 %lu\n", ret);
   printf("字符串部分為 |%s|", ptr);

   return(0);
}
// 結果
/*
數字（unsigned long integer）為 2030300
字符串部分為 | This is test|
*/
