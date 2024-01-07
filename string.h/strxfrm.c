/* 用於將字符串src的前n個字符轉換為當前語言環境並將它們放入字符串dest。

  用法: size_t strxfrm(char *dest, const char *src, size_t n);

  dest − 這是指向目標數組的指針，其中將複製內容。如果n的參數為零，它可以是空指針。

  src − 這是要轉換為當前語言環境的C字符串。

  n − 要複製到str1的最大字符數。

  返回值: 此函數返回轉換後字符串的長度，不包括結尾的空字符。 */

// 範例
#include <stdio.h>
#include <string.h>

int main () {
   char dest[20];
   char src[20];
   int len;

   strcpy(src, "Tutorials Point");
   len = strxfrm(dest, src, 20);

   printf("Length of string |%s| is: |%d|", dest, len);
   
   return(0);
}

/* 結果
Length of string |Tutorials Point| is: |15| */
