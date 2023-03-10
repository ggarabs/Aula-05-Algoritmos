#include <stdio.h>
#define TAM 5

void inverte_vetor(int lista[], int n){
    for(int i = 0; i < n/2; i++){
        int temp = lista[i];
        lista[i] = lista[n-1-i];
        lista[n-1-i] = temp;
    }
}

int main(){
    int num_list[TAM];

    for(int i = 0; i < TAM; i++){
        printf("Digite o %dº número da lista: ", i+1);
        scanf("%d", &num_list[i]);
    }

    inverte_vetor(num_list, TAM);

    printf("O vetor invertido é igual a [");

    for(int i = 0; i < TAM; i++){
        printf("%d", num_list[i]);
        if(i != TAM - 1) printf(", ");
    }

    printf("]\n");

    return 0;
}