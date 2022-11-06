#include <stdio.h>

int main(){
    //initialise variables N and i

    int N;
    int i=1;
    //requests user input
    printf("\nWhat is N: \n");
    scanf("%d", &N);
    while(i<=N){
        printf("%d ", i);
        i++;
    }
}