/* 用於計算字符串str的長度，但不包括終止的空字符。

  用法: size_t strlen(const char *str);

  str − 這是要查找長度的字符串。

  返回值: 這個函數返回字符串的長度。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com");

   len = strlen(str);
   printf("|%s| 的長度是 |%d|\n", str, len);
   
   return(0);
}

/* 結果
|This is tutorialspoint.com| 的長度是 |26| */
