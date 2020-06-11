/*****
      fizzbuzz.c
      確認課題No.7 2017.6.21
      2017.6.07 g1744069 Keisuke Ikeda
*****/
 #include <stdio.h>

int main() {

    int num;
    int Num;

    printf ("数字を入力:");
    scanf ("%d", &num);

    for (Num = 1; Num <= num; Num++) {
       
        if (Num % 3 == 0 && !(Num % 5 == 0) ){
            printf ("fizz!\n");
        }

        if (Num % 5 == 0 && !(Num % 3 == 0) ) {
            printf ("buzz!\n");
        }

        if (Num % 5 == 0 && Num % 3 == 0 ) {
            printf ("fizzbuzz!\n");
        }

        if (!(Num % 5 == 0) && !(Num % 3 == 0) ) {
            printf ("%d\n", Num);
        }
    }

    return 0;
}
        
