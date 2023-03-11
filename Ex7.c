#include <stdio.h>
#include <stdbool.h>
#define TAM 5

int busca(int vetor[], int x){
    for(int i = 0; i < TAM; i++){
        if(vetor[i] == x){
            return i+1;
            break;
        }
    }
    return -1;
}

int main(){
    int vetor[TAM], searched_value;

    for(int i = 0; i < TAM; i++){
        printf("Digite o %dº valor do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor do número a ser buscado: ");
    scanf("%d", &searched_value);

    int pos = busca(vetor, searched_value);
    
    if(pos != -1){
        printf("O elemento se encontra na %dª posição do vetor.\n", pos);
    }else{
        printf("O elemento não se encontra no vetor.\n");
    }

    return 0;
}