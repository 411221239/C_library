/* 用於比較兩個記憶體區域的前n個字節的函數。

  用法: int memcmp(const void *str1, const void *str2, size_t n);

  str1 − 這是指向記憶體區塊的指針。

  str2 − 這是指向記憶體區塊的指針。

  n − 要比較的字節數。

  返回值: 如果返回值 < 0，則表示str1小於str2。

  如果返回值 > 0，則表示str2小於str1。

  如果返回值 = 0，則表示str1等於str2。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2小於str1");
   } else if(ret < 0) {
      printf("str1小於str2");
   } else {
      printf("str1等於str2");
   }
   
   return(0);
}
