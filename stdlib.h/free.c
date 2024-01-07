/*
  C庫函數void free(void *ptr)用於釋放先前由calloc、malloc或realloc分配的內存。

  用法：void free(void *ptr);

  ptr − 這是先前由malloc、calloc或realloc分配的內存塊的指針，要進行釋放。如果傳遞空指針作為參數，則不執行任何操作。

  返回值：此函數不返回任何值。
*/

//範例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;

   /* 初始內存分配 */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("字串 = %s,  位址 = %p\n", str, (void *)str);

   /* 重新分配內存 */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("字串 = %s,  位址 = %p\n", str, (void *)str);

   /* 釋放已分配的內存 */
   free(str);
   
   return(0);
}

// 結果
/*
字串 = tutorialspoint,  位址 = 0x7fa708403a10
字串 = tutorialspoint.com,  位址 = 0x7fa708403a10
*/
