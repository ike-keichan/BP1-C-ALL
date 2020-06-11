/*****
      reverse.c
      練習No.1 2017.6.28
      2017.6.14 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main () {

    int number[5];

    
    printf ("数字0:");
    scanf ("%d", &number[0]);
    printf ("数字1:");
    scanf ("%d", &number[1]);
    printf ("数字2:");
    scanf ("%d", &number[2]);
    printf ("数字3:");
    scanf ("%d", &number[3]);
    printf ("数字4:");
    scanf ("%d", &number[4]);

    printf ("No.4 = %d\n", number[4]);
    printf ("No.3 = %d\n", number[3]);
    printf ("No.2 = %d\n", number[2]);
    printf ("No.1 = %d\n", number[1]);
    printf ("No.0 = %d\n", number[0]);

    return 0;
}
