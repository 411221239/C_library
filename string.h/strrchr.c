/* 用於在參數str指向的字符串中查找字符c（一個無符號字符）的最後一次出現的函數。

  用法: char *strrchr(const char *str, int c);

  str − 這是C字符串。

  c − 這是要定位的字符。它作為它的int提升傳遞，但在內部轉換回char。

  返回值: 這個函數返回指向字符串str中字符的最後一次出現的指針。如果找不到該值，則該函數返回一個空指針。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   int len;
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strrchr(str, ch);

   printf("在 |%c| 之後的字符串是 - |%s|\n", ch, ret);
   
   return(0);
}

/* 結果
在 |.| 之後的字符串是 - |.com| */
