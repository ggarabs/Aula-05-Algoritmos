#include <stdio.h>
#include <stdbool.h>
#define TAM 10

int preenche(int vetor[]){
    int cont = 0;
    for(int i = 0; i < TAM; i++){
        printf("Digite o %dº valor do vetor: ", i+1);
        scanf("%d", &vetor[i]);

        bool esta = false;
        for(int j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                esta = true;
                break;
            }
        }
        if(!esta) cont++;
    }
    return cont;
}

int main(){
    int vetor[TAM];

    printf("O vetor tem %d elementos diferentes.\n", preenche(vetor));

    return 0;
}