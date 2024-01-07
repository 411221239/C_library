/* 用於在由參數str指向的字符串中搜索字符c（一個unsigned char）的第一次出現的函數。

  用法: char *strchr(const char *str, int c);

  str − 這是要掃描的C字符串。

  c − 這是要在str中搜索的字符。

  返回值: 這將返回指向字符串str中字符c的第一次出現的指針，如果未找到字符則返回NULL。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("在%c後的字串 - |%s|\n", ch, ret);
   
   return(0);
}

/* 結果
在.後的字串 - |.tutorialspoint.com| */
