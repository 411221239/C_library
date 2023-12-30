/* 用於檢查某個條件是否為真。如果條件為假，則 assert() 將產生一個錯誤消息並終止程式執行。

  用法 void assert(int expression);

  expression是布林表達式，如果為非零值(即真)，則assert不執行任何操作，若為零值(即假)，則assert將列印出一條錯誤訊息，並調用abort來中止程式執行。 */

//範例
#include <assert.h>
#include <stdio.h>

// 測試 divide 函數
int divide(int a, int b) {
    assert(b != 0 && "不允許除以零");
    return a / b;
}

int main() {
    int result;
    
    result = divide(10, 2); // 正常情況
    printf("運算結果: %d\n", result);
    
    result = divide(10, 0); // 這將觸發 assert，因為分母為零
    printf("運算結果: %d\n", result); // 不會執行到這裡

    return 0;
}

//結果
/* 
運算結果: 5
Assertion failed: b != 0 && "不允許除以零", file example.c, line 7, function: divide
Aborted */
