/*
  C庫函數void abort(void)中止程序執行並直接退出呼叫的地方。

  用法：void abort(void);

  返回值：該函數不返回任何值。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main () {
   FILE *fp;
   
   printf("嘗試打開 nofile.txt\n");
   fp = fopen( "nofile.txt","r" );
   if(fp == NULL) {
      printf("即將中止程序\n");
      abort();
   }
   printf("即將關閉 nofile.txt\n");
   fclose(fp);
   
   return(0);
} 

// 結果
/*
嘗試打開 nofile.txt                                                    
即將中止程序                                                  
Aborted (core dumped)
*/
