/* 用於將由src指向的字符串複製到dest的函數。

  用法: char *strcpy(char *dest, const char *src);

  dest − 這是要複製內容的目標數組的指針。

  src − 這是要複製的字符串。

  返回值: 返回指向目標字符串dest的指針。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char src[40];
   char dest[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strcpy(dest, src);

   printf("最終複製的字符串 : %s\n", dest);
   
   return(0);
}

/* 結果
最終複製的字符串 : This is tutorialspoint.com */
