#include <stdio.h>

int main(void){
    int i,j;
    char list [8]="00000000";
    scanf("%d",&i);
    int k = i; 
    for(int counter = 7; k > 0 ;counter--){
        if(k % 2 == 0){
            list[counter] = '0';
        }
        else if(k % 2 == 1){
            list[counter] = '1';       
        }
        k = k / 2;
        
    }
    printf("%s",list);
    }