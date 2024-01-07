/*
  C 函式庫中的 int remove(const char *filename) 函式刪除指定的檔案，使其無法再被存取。

  声明：int remove(const char *filename);

  filename − 這是包含要刪除的檔案名稱的 C 字串。

  返回值：成功時返回零。發生錯誤時返回 -1，並設定 errno。
*/

// 範例
#include <stdio.h>
#include <string.h>

int main () {
   int ret;
   FILE *fp;
   char filename[] = "file.txt";

   fp = fopen(filename, "w");

   fprintf(fp, "%s", "This is tutorialspoint.com");
   fclose(fp);
   
   ret = remove(filename);

   if(ret == 0) {
      printf("檔案刪除成功");
   } else {
      printf("錯誤：無法刪除檔案");
   }
   
   return(0);
}
// 結果
/*
檔案刪除成功
*/
