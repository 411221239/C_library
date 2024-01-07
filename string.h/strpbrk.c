/* 用於查找與str2中指定的任何字符匹配的字符串str1中的第一個字符的函數。這不包括終止的空字符。

  用法: char *strpbrk(const char *str1, const char *str2);

  str1 − 這是要掃描的C字符串。

  str2 − 這是包含要匹配的字符的C字符串。

  返回值: 這個函數返回指向str1中與str2中的字符之一匹配的字符的指針，如果找不到這樣的字符，則返回NULL。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "34";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) {
      printf("第一個匹配的字符: %c\n", *ret);
   } else {
      printf("未找到字符");
   }
   
   return(0);
}

/* 結果
第一個匹配的字符: 3 */
