#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include<string.h>


struct pessoa *inserircomeco(struct pessoa *ini,char nome[],int idade, char sexo,float salario){
    struct pessoa *novo;
    novo = (struct pessoa*)malloc(sizeof(struct pessoa));
    strcpy(novo->nome,nome);
    novo ->idade = idade;
    novo->sexo = sexo;
    novo->salario = salario;
    novo->prox = ini;
    return novo;
};

void mostrar(struct pessoa *ini){
    struct pessoa *aux;
    aux = ini;
    while(aux!=NULL){
        printf("%s\n",aux->nome);
        printf("%d\n",aux->idade);
        printf("%c\n",aux->sexo);
        printf("%f\n",aux->salario);
        aux = aux->prox;
    }
};

struct pessoa *localizar(struct pessoa *ini){
    struct pessoa *aux;
    aux = ini;
    while(aux->prox!=NULL){
        aux = aux->prox;
    }
    return aux;
};

void menu(){
    printf("\n0. Sair\n");
    printf("1. Mostrar ultimo da lista\n");
    printf("2. Inserir no comeco\n");
    printf("3. Mostrar\n");
    printf("4. Mostrar pessoa com maior nome\n");
    printf("5. Inserir na ultima posicao\n");
    printf("6. Mostrar dados de determinado sexo\n");
};

struct pessoa *maiornome(struct pessoa *ini){
    struct pessoa *aux;
    aux = ini;
    struct pessoa *maior;
    maior = aux;
    aux = aux->prox;

    while(aux!=NULL){
        if(strlen(aux->nome) > strlen(maior->nome)){
            maior = aux;
        }
        aux = aux->prox;
    }
    return maior;
};

void inserirultima(struct pessoa *ender,char nome[],int idade, char sexo,float salario){
    struct pessoa *novo;
    novo = (struct pessoa*)malloc(sizeof(struct pessoa));
    strcpy(novo->nome,nome);
    novo ->idade = idade;
    novo->sexo = sexo;
    novo->salario = salario;
    ender->prox = novo;
    novo->prox = NULL;
};

void mostrarsexo(struct pessoa *ini, char sexo){
    struct pessoa *aux;
    aux  = ini;
    while (aux != NULL){
        if(aux->sexo == sexo){
            printf ("\n%s\n%f", aux->nome, aux->salario);
        }
        aux = aux->prox;
    }
};
