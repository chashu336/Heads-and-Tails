#include <stdio.h>
#include <stdlib.h>


int main(){
    int i,j=0,k=0,f;
    char name[50];

    printf("Who are you?\n>");
    scanf("%s",name);
    printf("Hello, %s!",name);


    printf("Tossing a coin...\n");
    for(i=0;i<5;i++){
        f = rand()%6+1;
        if(f<4){
            printf("Round %d: Heads\n",i);
            j++;
        }else{
            printf("Round %d: Tails\n",i);
            k++;
        }
    }

    printf("Heads: %d,Tails: %d\n",j,k);
    return 0;
}