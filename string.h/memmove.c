/* 用於從str2複製n個字符到str1的函數，但對於重疊的內存區塊，memmove()是比memcpy()更安全的方法。

  用法: void *memmove(void *str1, const void *str2, size_t n);

  str1 − 這是要複製內容的目標數組的指針，類型轉換為void*類型的指針。

  str2 − 這是數據源的指針，類型轉換為void*類型的指針。

  n − 要複製的字節數。

  返回值: 返回dest的指針，即str1。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("在memmove之前 dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("在memmove之後 dest = %s, src = %s\n", dest, src);

   return(0);
}

//結果
/* 
在memmove之前 dest = oldstring, src = newstring
在memmove之後 dest = newstring, src = newstring */
