/*****
      doubleLoop.c
      2017.6.21
      2017.6.07 g1744069 Keisuke Ikeda
*****/
 #include <stdio.h>

int main() {

    int inner, outer; // カウンタ変数

    for (outer = 0; outer <3; outer++) {
        printf ("before inner loop\n");
        for (inner = 0; inner < 3; inner++){
            printf ("outer = %d, inner = %d\n", outer, inner);
        }
        printf ("after inner loop\n");
    }

    return 0;
}
        
