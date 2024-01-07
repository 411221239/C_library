/*
  C庫函數int fgetc(FILE *stream)從指定的流(stream)中獲取下一個字符（一個無符號字符），並推進該流的位置指示器。

  用法：int fgetc(FILE *stream);

  stream − 這是指向FILE對象的指針，該對象標識要執行操作的流。

  返回值：該函數返回讀取的字符，作為一個無符號字符轉換為int，或在文件結尾或錯誤時返回EOF。
*/

// 範例
#include <stdio.h>

int main () {
   FILE *fp;
   int c;
   int n = 0;
  
   fp = fopen("file.txt", "r");
   if(fp == NULL) {
      perror("打開文件時發生錯誤");
      return(-1);
   } 
   
   do {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
   } while(1);

   fclose(fp);
   return(0);
}


//  假設我們有一個名為file.txt的文本文件，其內容如下。此文件將被用作我們示例程序的輸入 − We are in 2012

//結果
/*
  We are in 2012
*/
