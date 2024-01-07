/* 用於在記憶體區域中搜索字符的函數。

  用法: void *memchr(const void *str, int c, size_t n);
  
  str − 要搜索的記憶體區塊的指針。
  
  c − 要搜索的值，作為int傳遞，但該函數使用該值的unsigned char轉換進行逐字範圍搜索。
  
  n − 要分析的字節數。
  
  返回值: 如果字符未出現在給定的記憶體區域中，則該函數返回匹配字節的指針，否則返回NULL。 */

//範例
#include <stdio.h>
#include <string.h>

int main () {
  const char str[] = "https://www.tutorialspoint.com";
  const char ch = '.';
  char *ret;

  ret = memchr(str, ch, strlen(str));
  
  printf("在%c後的字串 - |%s|\n", ch, ret);
  
  return(0);
}

//結果
/*
在.後的字串 - |.tutorialspoint.com| */
