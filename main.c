#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int qtd, i;
    scanf("%d",&qtd);

    getchar();
    
    if(qtd == 0){
        printf("[vazio]");
        return 0;
    }

    int *vetor = (int*)malloc(qtd * sizeof(int));

    for (i = 0; i < qtd; i++)
    {
        scanf("%d",&vetor[i]);
    }

    printf("[");

    for (i = 0; i < qtd; i++)
    {
        if(i == qtd-1){
            printf("%d",vetor[i]);
        }else{
            printf("%d, ",vetor[i]);
        }
    }

    printf("]");
    free(vetor);
    return 0;
}