/*
  C庫函數int fputs(const char *str, FILE *stream)將字符串寫入指定的流(stream)，直到空字符但不包括空字符。

  用法：int fputs(const char *str, FILE *stream);

  str − 這是一個包含要寫入的以null結尾的字符序列的數組。

  stream − 這是指向FILE對象的指針，該對象標識要將字符串寫入的流。

  返回值：此函數返回非負值，否則在錯誤時返回EOF。

  
*/

// 範例
#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("file.txt", "w+");

   fputs("This is c programming.", fp);
   fputs("This is a system programming language.", fp);

   fclose(fp);
   
   return(0);
}

// 編譯並運行上面的程序，這將創建一個名為file.txt的文件，其中包含以下內容 − This is c programming.This is a system programming language.
// 查看上面文件的內容，使用以下程序 −

#include <stdio.h>

int main () {
   FILE *fp;
   int c;

   fp = fopen("file.txt","r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
   return(0);
}
// 結果
/* 
  This is c programming.This is a system programming language.
*/
