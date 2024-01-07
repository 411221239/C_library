/* 用於搜索內部數組以查找錯誤號errnum並返回指向錯誤消息字符串的指針的函數。strerror生成的錯誤字符串取決於開發平台和編譯器。

  用法: char *strerror(int errnum);

  errnum − 這是錯誤號，通常是errno。

  返回值: 這個函數返回一個指向描述錯誤errnum的錯誤字符串的指針。 */

//範例
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt","r");
   if( fp == NULL ) {
      printf("錯誤: %s\n", strerror(errno));
   }
   
   return(0);
}

//結果
/* 
錯誤: No such file or directory */
