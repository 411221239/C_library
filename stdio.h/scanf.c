/*
  C 函式庫中的 int scanf(const char *format, ...) 函式從 stdin 讀取格式化的輸入。

  用法：int scanf(const char *format, ...);

  format − 這是包含以下一項或多項的 C 字串 −

  空白字元，非空白字元和格式規範符號。格式規範符號將是 [=%[*][width][modifiers]type=]，如下所述 −

  Sr.No.	參數和描述
  1	    *          這是一個可選的起始星號，表示數據將從流中讀取但被忽略，即不存儲在相應的參數中。
  2	    width      這指定了當前讀取操作中要讀取的最大字符數。
  3	    modifiers  指定與 int（在 d、i 和 n 的情況下）、unsigned int（在 o、u 和 x 的情況下）或 float（在 e、f 和 g 的情況下）不同的大小，用於由相應的附加參數指針指向的數據：h：short int（對於 d、i 和 n），或 unsigned short int（對於 o、u 和 x）l：long int（對於 d、i 和 n），或 unsigned long int（對於 o、u 和 x），或 double（對於 e、f 和 g）L：long double（對於 e、f 和 g）
  4	    type       一個字符，指定要讀取的數據類型以及預期如何讀取。參見下一個表。

  fscanf 類型規定符
  type	Qualifying Input	Type of argument
  c    Single character: Reads the next character. If a width different from 1 is specified, the function reads width characters and stores them in the successive locations of the array passed as argument. No null character is appended at the end.	char *
  d    Decimal integer: Number optionally preceded with a + or - sign	int *
  e, E, f, g, G    Floating point: Decimal number containing a decimal point, optionally preceded by a + or - sign and optionally followed by the e or E character and a decimal number. Two examples of valid entries are -732.103 and 7.12e4	float *
  o    Octal Integer:	int *
  s    String of characters. This will read subsequent characters until a whitespace is found (whitespace characters are considered to be blank, newline and tab).	char *
  u    Unsigned decimal integer.	unsigned int *
  x, X    Hexadecimal Integer	int *
  附加參數 − 根據格式字符串，函數可能期望一系列附加參數，每個參數都包含一個值，以替換格式參數（如果有的話）。這些參數的數量應該與格式參數中希望有一個值的 %-tag 數量相同。

  返回值：成功時，函數返回成功讀取的參數列表項目數量。如果發生讀取錯誤或在讀取時達到文件結尾，則設置適當的指示器（feof 或 ferror），如果在成功讀取任何數據之前發生其中之一，則返回 EOF。

*/

// 範例
#include <stdio.h>

int main () {
   char str1[20], str2[30];

   printf("輸入名字：");
   scanf("%19s", str1);

   printf("輸入您的網站名稱：");
   scanf("%29s", str2);

   printf("輸入的名字：%s\n", str1);
   printf("輸入的網站：%s", str2);
   
   return(0);
}
// 在交互模式下，編譯並運行上述程序將產生以下結果：
/*
輸入名字：admin
輸入您的網站名稱：www.tutorialspoint.com

輸入的名字：admin
輸入的網站：www.tutorialspoint.com
*/
