# HFC_CH1
深入淺出練習 第一章

1.假如要檢查程式的退出狀態(exit status)
    windows: echo %ErrorLevel%
    Linux: echo $?

2.可以使用下列技巧在大多數機器編譯及執行程式碼
    && 表示[並且假如成功的話，就執行]
    gcc zork.c -o zork && ./zork

3.在Unix like 形式的作業系統，執行程式必須指明它們的所在目錄，
  或者該目錄已經被列在環境變數裡。