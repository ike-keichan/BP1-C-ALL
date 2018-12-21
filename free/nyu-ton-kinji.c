#include<stdio.h>

int main(){

    int x;

    printf("数字を入力：");
    scanf("%d", &x);
    printf("答え：%d\n", x-(x*x*x-6)/(3*x*x));

    return 0;
}
