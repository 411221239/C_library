/* 用於從記憶體區域src複製n個字符到記憶體區域dest的函數。

  用法: void *memcpy(void *dest, const void *src, size_t n);

  dest − 這是要複製內容的目標數組的指針，類型轉換為void*類型的指針。

  src − 這是數據源的指針，類型轉換為void*類型的指針。

  n − 要複製的字節數。

  返回值: 返回dest的指針，即str1。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "https://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest, "Heloooo!!");
   printf("在memcpy之前 dest = %s\n", dest);
   memcpy(dest, src, strlen(src) + 1);
   printf("在memcpy之後 dest = %s\n", dest);
   
   return(0);
}

//結果
/* 
在memcpy之前 dest = Heloooo!!
在memcpy之後 dest = https://www.tutorialspoint.com */
