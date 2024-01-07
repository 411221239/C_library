/*
  C庫函數int fputc(int char, FILE *stream)將由char參數指定的字符（一個無符號字符）寫入指定的流(stream)中，並推進該流的位置指示器。

  用法：int fputc(int char, FILE *stream);

  char − 這是要寫入的字符。這是作為其int提升傳遞的。

  stream − 這是指向FILE對象的指針，該對象標識要將字符寫入的流。

  返回值：如果沒有錯誤，則返回已寫入的相同字符。如果發生錯誤，則返回EOF並設置錯誤指示器。

  
*/

// 範例
#include <stdio.h>

int main () {
   FILE *fp;
   int ch;

   fp = fopen("file.txt", "w+");
   for( ch = 33 ; ch <= 100; ch++ ) {
      fputc(ch, fp);
   }
   fclose(fp);

   return(0);
}

// 編譯並運行上面的程序，它將在當前目錄中創建一個file.txt文件，該文件將具有以下內容 − !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcd

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

//結果
/* 
  !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcd
*/
