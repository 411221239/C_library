/*
  C庫函數int system(const char *command)將由command指定的命令名或程序名傳遞給主機環境，由命令處理器執行並在命令完成後返回。

  用法：int system(const char *command);

  command − 包含所請求變量名的C字符串。

  返回值：錯誤時返回-1，否則返回命令的返回狀態。
*/

// 範例
#include <stdio.h>
#include <string.h>

int main () {
   char command[50];

   strcpy( command, "dir" );
   system(command);

   return(0);
}
// 結果
/*
a.txt
amit.doc
sachin
saurav
file.c
*/
