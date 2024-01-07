/* 用於將由src指向的字符串附加到由dest指向的字符串的末尾的函數。

  用法: char *strcat(char *dest, const char *src);

  dest − 這是指向目標數組的指針，它應包含一個C字符串，並且應足夠大，以包含連接結果字符串。

  src − 這是要附加的字符串。這不應與目標重疊。

  返回值: 這個函數返回指向結果字符串dest的指針。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   strcpy(src, "This is source");
   strcpy(dest, "This is destination");

   strcat(dest, src);

   printf("最終目標字符串: |%s|", dest);
   
   return(0);
}

//結果
/* 
最終目標字符串: |This is destinationThis is source| */
