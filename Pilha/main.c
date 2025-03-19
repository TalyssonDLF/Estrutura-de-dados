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

int topo = 0;

int pilha[tamanho];

int Size_Pilha(){
    return topo;
}

void push(int valor){
    if(topo < tamanho){
        pilha[topo] = valor;
        topo++;
        printf("Valor adicionado!\n");
    }else{
        printf("Pilha cheia\n");
    }
}

void pop(){
    if(topo > 0){
        pilha[topo-1] = 0;
        topo--;
    }else{
        printf("Pilha vazia\n");
    }
}

void peek(){
    if(topo > 0){
        printf("Topo: %d\n", pilha[topo-1]);
    }else{
        printf("Pilha vazia\n");
    }
}

void size(){
    printf("Tamanho da pilha: %d\n", topo);
}

void list(){
    for(int i = 0; i < Size_Pilha(); i++){
        printf("%d ", pilha[i]);
    }
    printf("\n");
}

void clear(){
    for(int i = 0; i < tamanho; i++){
        pilha[i] = 0;
    }
}

int main(){
    
    char op;
    int aux;

    do{
        printf("---------------Bem vindo ao meu sistema de pilhas---------------\n");
        printf("3 - Push\n");
        printf("2 - Pop\n");
        printf("3 - Peek\n");
        printf("4 - Size\n");
        printf("5 - List\n");
        printf("6 - Clear\n");
        printf("7 - Sair\n");
        printf("Opcao: ");
        scanf("%c", &op);
        getchar();
        system("clear");

        switch(op){
            case '1':
                printf("Digite o valor: ");
                scanf("%d", &aux);
                getchar();
                push(aux);
                break;
            case '2':
                pop();
                break;
            case '3':
                peek();
                break;
            case '4':
                size();
                break;
            case '5':
                list();
                break;
            case '6':
                clear();
                break;
            case '7':
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while(op != '7');

    return 0;
}