/* 用於將由src指向的字符串附加到由dest指向的字符串的末尾，最多附加n個字符的函數。

  用法: char *strncat(char *dest, const char *src, size_t n);

  dest − 這是指向目標數組的指針，它應包含一個C字符串，並且應足夠大，以包含連接結果字符串，包括附加的空字符。

  src − 這是要附加的字符串。

  n − 這是要附加的最大字符數。

  返回值: 這個函數返回指向結果字符串dest的指針。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src, "This is source");
   strcpy(dest, "This is destination");

   strncat(dest, src, 15);

   printf("最終目標字符串: |%s|", dest);
   
   return(0);
}

//結果
/* 
最終目標字符串: |This is destinationThis is source| */
