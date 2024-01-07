/*
  C庫函數FILE *freopen(const char *filename, const char *mode, FILE *stream)將給定的打開流與新的文件名關聯，同時關閉流中的舊文件。

  用法：FILE *freopen(const char *filename, const char *mode, FILE *stream);

  filename − 這是包含要打開的文件的文件名的C字符串。

  mode − 這是包含文件訪問模式的C字符串。它包括 −

  Sr.No.	Mode & Description
  1	
  "r"

  打開文件進行讀取。文件必須存在。

  2	
  "w"

  為寫入而創建一個空文件。如果具有相同名稱的文件已經存在，則其內容將被刪除，文件將被視為新的空文件。

  3	
  "a"

  附加到文件。寫操作將數據附加到文件的末尾。如果文件不存在，則將創建文件。

  4	
  "r+"

  打開一個文件以進行讀取和寫入。文件必須存在。

  5	
  "w+"

  為讀取和寫入而創建一個空文件。

  6	
  "a+"

  打開文件進行讀取和附加。

  stream − 這是指向標識要重新打開的流的FILE對象的指針。

  返回值：如果文件重新打開成功，則該函數返回一個指向標識流的對象的指針，否則返回空指針。
*/

// 範例
#include <stdio.h>

int main () {
   FILE *fp;

   printf("This text is redirected to stdout\n");

   fp = freopen("file.txt", "w+", stdout);

   printf("This text is redirected to file.txt\n");

   fclose(fp);
   
   return(0);
}
// 結果
/*
This text is redirected to stdout
*/
