/*
  C 函式庫中的 int printf(const char *format, ...) 函式將格式化的輸出傳送到 stdout。

  声明：int printf(const char *format, ...);

  format − 這是包含要寫入到 stdout 的文本的字串。它可以包含嵌入的格式標籤，這些標籤將由後續的附加參數指定的值替換並按照要求進行格式化。格式標籤的原型是 %[flags][width][.precision][length]specifier，如下所述 −

  返回值：成功時返回寫入的總字符數。失敗時返回一個負數。
*/

// 範例
#include <stdio.h>

int main () {
   int ch;

   for( ch = 75 ; ch <= 100; ch++ ) {
      printf("ASCII 值 = %d, 字符 = %c\n", ch , ch );
   }

   return(0);
}
// 結果
/*
ASCII 值 = 75, 字符 = K
ASCII 值 = 76, 字符 = L
ASCII 值 = 77, 字符 = M
ASCII 值 = 78, 字符 = N
ASCII 值 = 79, 字符 = O
ASCII 值 = 80, 字符 = P
ASCII 值 = 81, 字符 = Q
ASCII 值 = 82, 字符 = R
ASCII 值 = 83, 字符 = S
ASCII 值 = 84, 字符 = T
ASCII 值 = 85, 字符 = U
ASCII 值 = 86, 字符 = V
ASCII 值 = 87, 字符 = W
ASCII 值 = 88, 字符 = X
ASCII 值 = 89, 字符 = Y
ASCII 值 = 90, 字符 = Z
ASCII 值 = 91, 字符 = [
ASCII 值 = 92, 字符 = \
ASCII 值 = 93, 字符 = ]
ASCII 值 = 94, 字符 = ^
ASCII 值 = 95, 字符 = _
ASCII 值 = 96, 字符 = `
ASCII 值 = 97, 字符 = a
ASCII 值 = 98, 字符 = b
ASCII 值 = 99, 字符 = c
ASCII 值 = 100, 字符 = d
*/
