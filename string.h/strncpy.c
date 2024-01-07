/* 用於將由src指向的字符串的最多n個字符複製到dest的函數。在src的長度小於n的情況下，dest的剩餘部分將用空字節填充。

  用法: char *strncpy(char *dest, const char *src, size_t n);

  dest − 這是要複製內容的目標數組的指針。

  src − 這是要複製的字符串。

  n − 從源中要複製的字符數。

  返回值: 返回指向複製字符串的指針。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 10);

   printf("最終複製的字符串 : %s\n", dest);
   
   return(0);
}

//結果
/* 
最終複製的字符串 : This is tu */
