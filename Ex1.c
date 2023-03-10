#include <stdio.h>
#include <stdbool.h>

bool cresc(int vetor[], int n){
    for(int i = 1; i < n; i++){
        if(vetor[i] <= vetor[i-1]) return false;
    }
    return true;
}

int main(){
    int tam;
    printf("Digite o número de elementos da lista: ");
    scanf("%d", &tam);

    int num_list[tam];
    for(int i = 0; i < tam; i++){
        printf("Digite o %dº número da lista: ", i+1);
        scanf("%d", &num_list[i]);
    }

    if(cresc(num_list, tam)){
        printf("A lista está em ordem crescente!\n");
    }else{
        printf("A lista não está em ordem crescente!\n");
    }

    return 0;
}