/*****
      board3.c
      提出課題No.2 2017.6.28
    　2017.6.21 g1744069 Keisuke Ikeda
*****/

#include <stdio.h>

int main(){
    
    int cell[9][9];
    int i, j;
    
    for( i=0; i<9; i++){
        for( j=0; j<9; j++){
            if(i == j){
                cell[i][j]=1;
            }else if(i+j == 8){
                cell[i][j]=1;
            }else if((i+j)%2 == 0){
                cell[i][j]=2;
            }else{
                cell[i][j]=0;
            }
            printf("%d", cell[i][j]);
        }
        printf("\n");
    }   
    return 0;
}
