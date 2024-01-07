/* 用於比較字符串str1和str2的函數。結果取決於位置的LC_COLLATE設置。

  用法: int strcoll(const char *str1, const char *str2);

  str1 − 這是要比較的第一個字符串。

  str2 − 這是要比較的第二個字符串。

  返回值: 這個函數的返回值如下 -

  如果返回值 < 0，則表示str1小於str2。

  如果返回值 > 0，則表示str2小於str1。

  如果返回值 = 0，則表示str1等於str2。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abc");
   strcpy(str2, "ABC");

   ret = strcoll(str1, str2);

   if(ret > 0) {
      printf("str1小於str2");
   } else if(ret < 0) {
      printf("str2小於str1");
   } else {
      printf("str1等於str2");
   }
   
   return(0);
}

/* 結果
str1小於str2 */
