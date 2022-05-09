#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <string.h>2


void menu(){
    printf ("\n0.Sair\n");
    printf ("1.Retornar endereco do ultimo bloco\n");
    printf ("2.Inserir no fim\n");
    printf ("3.Mostrar\n");
    printf ("4.Inserir inicio\n");
    printf ("5.Inserir apos\n");
    printf ("6.Inserir antes\n");
    printf ("7.Desalocar\n");
}

struct bloco* endereco(struct bloco*ini){
    struct bloco*aux;
    aux = ini;
    if (aux != NULL){
        while (aux->prox != NULL){
            aux = aux->prox;
        }
    }
    return aux;
};

struct bloco* inserirnofim(struct bloco*ender,struct bloco*ini, int id){
    ender = endereco(ini);
    struct bloco*novo;
    novo = (struct bloco*)malloc(sizeof(struct bloco));
    novo->idade = id;
    novo->ant = NULL;
    novo->prox = NULL;
    if (ender == NULL){
        ini = novo;
    } else{
        ender->prox = novo;
        novo->ant = ender;
    }

    return ini;
};

void mostrar(struct bloco*ini){
    struct bloco*aux;
    aux = ini;
    while(aux != NULL){
        printf ("\n%i\n", aux->idade);
        aux = aux->prox;
    }
    system("pause");
};

struct bloco*inseririni(struct bloco*ini, int id){
    struct bloco*novo;
    novo = (struct bloco*)malloc(sizeof(struct bloco));
    novo -> idade = id;
    novo -> prox = NULL;
    novo -> ant = NULL;
    if (ini != NULL){
       ini -> ant = novo;
       novo -> prox = ini;
    }

    return novo;
};

void inserirapos (struct bloco*ini, struct bloco*ender, int id, int apos)
{
    struct bloco*novo;
    novo = (struct bloco*)malloc(sizeof(struct bloco));
    struct bloco*aux;
    aux = ini;
    while (apos != aux-> idade){
        aux= aux -> prox;
    }
    novo->idade = id;
    novo -> ant = aux;
    novo->prox = aux->prox;
    if (aux-> prox == NULL){
        ender = novo;
    } 
    else{
        aux->prox = novo;
        aux->prox->ant=novo;
    }
};

struct bloco *inserirantes (struct bloco*ini, int id, int ante){
    struct bloco*novo;
    novo=(struct bloco*)malloc(sizeof(struct bloco));
    struct bloco*aux;
    aux=ini;
    while (ante != aux->idade){
        aux = aux->prox;
    }
    novo->idade = id;
    novo->ant = aux->ant;
    if(aux->ant == NULL)
        ini = novo;
    aux->ant=novo;
    aux->ant->prox=novo;

    return ini;
};

struct bloco*desalocar (struct bloco*ini, int desa){
    struct bloco*aux, *aux2;
    aux = ini;
    aux2=ini;
    while (desa != aux->idade){
        aux=aux->prox;
    }
    if (aux == ini){
        ini = aux->prox;
        free(aux);
    } 
    else{
        while(aux2->prox!=aux){
            aux2 = aux2->prox;
        }
        aux2->prox=aux->prox;
        aux->prox->ant=aux2;
        free(aux);
    }
    
    return ini;
};
