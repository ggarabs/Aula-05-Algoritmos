
#include <stdio.h>
#include <stdbool.h>

int diference(int vetor1[], int vetor2[], int tam1, int tam2){
    int index = 0;
    int tam = tam1 > tam2 ? tam1 : tam2;
    int vetor_resp[tam];    
    
    for(int i = 0; i < tam1; i++){
        bool esta = false;
        for(int j = 0; j < tam2; j++){
            if(vetor1[i]==vetor2[j]){
                esta = true;
            }
        }
        if(!esta){
            vetor_resp[index] = vetor1[i];
            index++;
        }
    }

    printf("A diferenca dos conjuntos A e B é dada por: {");
    for(int i = 0; i < index; i++){
        printf("%d", vetor_resp[i]);
        if(i != index-1) printf(",");
    }
    printf("}\n");

}

int main(){
    int a_size, b_size;

    printf("Digite o número de elementos da lista A: ");
    scanf("%d", &a_size);

    int a_list[a_size];

    for(int i = 0; i < a_size; i++){
        printf("Digite o %dº elemento do vetor A: ", i+1);
        scanf("%d", &a_list[i]);
    }

    printf("Digite o número de elementos da lista B: ");
    scanf("%d", &b_size);

    int b_list[b_size];

    for(int i = 0; i < b_size; i++){
        printf("Digite o %dº elemento do vetor B: ", i+1);
        scanf("%d", &b_list[i]);
    }

    diference(a_list, b_list, a_size, b_size);

    return 0;

}