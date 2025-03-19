#include <stdio.h>
#include <stdlib.h>
//Aula sobre Push, pop e peek

// push adiciona um elemento no topo da pilha
// pop remove o elemento do topo da pilha
// peek retorna o elemento do topo da pilha

// Esvaziar a pilha
// clear

// size retorna o tamanho da pilha
// list lista os elementos da pilha

#define tamanho 10

int pilha[tamanho];

int Size_Pilha(){
    int i = 0;
    while(pilha[i] != 0){
        i++;
    }
    return i;
}

int main(){

    
    char op;
    int aux;

    do{
        printf("1 - Push\n");
        printf("2 - Pop\n");
        printf("3 - Peek\n");
        printf("4 - Size\n");
        printf("5 - List\n");
        printf("6 - Clear\n");
        printf("7 - Sair\n");
        printf("Opcao: ");
        scanf("%c", &op);
        getchar();

        switch(op){
            case '1':
                if(Size_Pilha() < tamanho){
                    printf("Digite o valor: ");
                    scanf("%d", &aux);
                    getchar();
                    pilha[Size_Pilha()] = aux;
                }else{
                    printf("Pilha cheia\n");
                }
                break;
            case '2':
                if(Size_Pilha() > 0){
                    pilha[Size_Pilha()-1] = 0;
                }else{
                    printf("Pilha vazia\n");
                }
                break;
            case '3':
                if(Size_Pilha() > 0){
                    printf("Topo: %d\n", pilha[Size_Pilha()-1]);
                }else{
                    printf("Pilha vazia\n");
                }
                break;
            case '4':
                printf("Tamanho da pilha: %d\n", Size_Pilha());
                break;
            case '5':
                for(int i = 0; i < Size_Pilha(); i++){
                    printf("%d ", pilha[i]);
                }
                printf("\n");
                break;
            case '6':
                for(int i = 0; i < tamanho; i++){
                    pilha[i] = 0;
                }
                break;
            case '7':
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while(op != '7');

    return 0;
}