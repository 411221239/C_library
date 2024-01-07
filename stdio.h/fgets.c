/*
  C庫函數char *fgets(char *str, int n, FILE *stream)從指定的流(stream)中讀取一行並將其存儲到由str指向的字符串中。當讀取了(n-1)個字符、讀取了換行字符或達到文件結尾時，它將停止，以先達到的條件為準。

  用法：char *fgets(char *str, int n, FILE *stream);

  str − 這是指向存儲讀取字符串的字符數組的指針。

  n − 這是要讀取的最大字符數（包括最終的空字符）。通常使用str作為傳遞的數組的長度。

  stream − 這是指向FILE對象的指針，該對象標識要從中讀取字符的流。

  返回值：成功時，該函數返回相同的str參數。如果遇到文件結尾且沒有讀取任何字符，則str的內容保持不變，並返回空指針。

  如果發生錯誤，則返回空指針。
*/

// 範例
#include <stdio.h>

int main () {
   FILE *fp;
   char str[60];

   /* 打開文件進行讀取 */
   fp = fopen("file.txt" , "r");
   if(fp == NULL) {
      perror("打開文件時發生錯誤");
      return(-1);
   }
   if( fgets (str, 60, fp)!=NULL ) {
      /* 將內容寫入標準輸出 */
      puts(str);
   }
   fclose(fp);
   
   return(0);
}

/* 
  假設我們有一個名為file.txt的文本文件，其內容如下。此文件將被用作我們示例程序的輸入 −

  結果
  We are in 2012
*/
