/*****
      treasure.c
      2017.5.31 宝箱を開けてみる
    　2017.5.31 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){

    int box  ;  //選んだ宝箱の番号

    do { printf("宝箱が3つある!どれを開けますか?(1か2か3):");
        scanf("%d", &box);
        if (box == 1) printf("宝箱は罠だった\n");
        if (box == 2) printf("あなたは宝を手に入れた\n");
        if (box == 3) printf("宝箱は空っぽだった\n");
    }while (box <= 0 || box > 3);
    
    return 0;
}
