#include<stdio.h>
#include<string.h>
int main(){  
    char sentence[80];
    //initialise sentence length
    int leng, g;  
    printf("Type in your sentence: ");  
    scanf("%[^\n]", sentence); 
    leng = strlen(sentence);     
    // uses the index to display the sentence in a reversed manner
    for(g = leng -1; g >= 0; g--){ 
        printf("%c", sentence[g]); 
        }     
        return 0;
}