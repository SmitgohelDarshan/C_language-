#include <stdio.h>
void main(){
    int i=1,j=1;
    for(;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}