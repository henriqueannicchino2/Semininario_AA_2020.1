#include<stdio.h>
#include<stdlib.h>

void FazAlgo(int n){
    int i, j, k;
    for(i=1; i<n;  i++){
        for(j=i+1; j <= n; j++){
            for(k=1; k<=j; k++){
                printf("faz algo\n");
            }
        }
    }
}

int main(){
    FazAlgo(3);

    return 0;
}
