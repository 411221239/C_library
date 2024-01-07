/*
  C庫函數int abs(int x)返回int x的絕對值。

  用法：int abs(int x);

  x − 這是整數值。

  返回值：該函數返回x的絕對值。
*/

// 範例
#include <stdio.h>
#include <stdlib.h>

int main() {
   int a, b;

   a = abs(5);
   printf("a的值 = %d\n", a);

   b = abs(-10);
   printf("b的值 = %d\n", b);

   return 0;
}
// 結果
/*
a的值 = 5
b的值 = 10
*/
