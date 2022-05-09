#include "biblio.h"
#include <stdio.h>
#include <string.h>


void inserir(struct cadastro cd[]){
    int i;
    for(i=0;i<=2;i++){
        printf("\nEntre com o %i nome ", i+1);
        fflush(stdin);
        gets(cd[i].nome);
        printf("\nEntre com a %i idade ", i+1);
        scanf("%d", &cd[i].id);
    }
}

void mostrar(struct cadastro cd[]){
    int i;
    printf("\nOs seguinte alunos estao cadastrados:");
    for(i=0;i<=2;i++){
        printf("\nNome: %s", cd[i].nome);
        printf("\nIdade: %d", cd[i].id);
    }
}

int maiorid(struct cadastro cd[]){
    int i;
    int maior;
    maior=cd[0].id;
    for(i=1;i<=2;i++){
        if(cd[i].id>maior)
            maior=cd[i].id;
    }
    return(maior);
}

int maiornome(struct cadastro cd[]){
    int pos,i;
    int tammaior,maior;
    tammaior=strlen(cd[0].nome);
    pos=0;
    for(i=1;i<=2;i++){
        maior= strlen(cd[i].nome);
        if(tammaior<maior){
            tammaior=maior;
            pos=i;
        }
    }
    return(pos);
}

char* maiornomechar(struct cadastro cd[]){
    int pos,i;
    int tammaior,maior;
    tammaior=strlen(cd[0].nome);
    pos=0;
    for(i=1;i<=2;i++){
        maior= strlen(cd[i].nome);
        if(tammaior<maior){
            tammaior=maior;
            pos=i;
        }
    }
    return(cd[pos].nome);
}
