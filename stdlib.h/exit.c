/*
  C庫函數void exit(int status)立即終止調用進程。屬於進程的任何打開的文件描述符都將被關閉，進程的任何子進程都將被進程1、init繼承，並且進程的父進程將收到一個SIGCHLD信號。

  用法：void exit(int status);

  status − 這是返回給父進程的狀態值。

  返回值：該函數不返回任何值。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main () {
   printf("程序開始....\n");
   
   printf("退出程序....\n");
   exit(0);

   printf("程序結束....\n");

   return(0);
}
// 結果
/*
程序開始....
退出程序....
*/
