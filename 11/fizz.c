/*****
      fizz.c
      確認課題No.1 2017.6.21
      2017.6.07 g1744069 Keisuke Ikeda
*****/
 #include <stdio.h>

int main() {

    int num;
    int Num;

    printf ("数字を入力:");
    scanf ("%d", &num);

    for (Num = 1; Num <= num; Num++) {
        if (Num % 3 == 1 || Num % 3 == 2){
            printf ("%d\n", Num);
            continue;
        }
        printf ("fizz\n");
    }

    return 0;
}
        
