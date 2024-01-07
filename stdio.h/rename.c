/*
  C 函式庫中的 int rename(const char *old_filename, const char *new_filename) 函式將 old_filename 所指定的檔案名稱更改為 new_filename。

  声明：int rename(const char *old_filename, const char *new_filename);

  old_filename − 這是包含要重新命名和/或移動的檔案名稱的 C 字串。

  new_filename − 這是包含檔案的新名稱的 C 字串。

  返回值：成功時返回零。發生錯誤時返回 -1，並設定 errno。
*/

// 範例
#include <stdio.h>

int main () {
   int ret;
   char oldname[] = "file.txt";
   char newname[] = "newfile.txt";
   
   ret = rename(oldname, newname);
	
   if(ret == 0) {
      printf("檔案重新命名成功");
   } else {
      printf("錯誤：無法重新命名檔案");
   }
   
   return(0);
}
// 結果
/*
檔案重新命名成功
*/
