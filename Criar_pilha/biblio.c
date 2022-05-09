#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <string.h>


void menu(){
    printf ("\n0.Sair\n");
    printf ("1.Retornar endereco do ultimo bloco\n");
    printf ("2.Inserir no fim\n");
    printf ("3.Mostrar\n");
    printf ("4.Criar Pilha\n");
    printf ("5.Mostrar Pilha\n");
};

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
    ender=endereco(ini);
    struct bloco*novo;
    novo = (struct bloco*)malloc(sizeof(struct bloco));
    novo->idade = id;
    novo->ant = NULL;
    novo->prox = NULL;
    if (ini == NULL){
        ini = novo;
    }
    else{
        ender->prox = novo;
        novo->ant = ender;
    }
    return ini;
};

void mostrar (struct bloco*ini){
    struct bloco*aux;
    aux=ini;
    while(aux!=NULL){
        printf ("\n%i\n", aux->idade);
        aux=aux->prox;
    }
};

struct pilha* criar_pilha(struct bloco*ini, struct pilha*topo){
    struct bloco*aux, *aux2;
    if (ini != NULL){
        aux = ini;
        aux2 = aux->prox;
        while(aux != NULL){
            if(aux2 == NULL){
                aux=aux->prox;
                aux2=ini;
            }

            if(aux->idade == aux2->idade && aux!=aux2){
                struct pilha*novo;
                novo = (struct pilha*)malloc(sizeof(struct pilha));
                novo->num = aux2->idade;
                novo->ant = NULL;
                if(topo == NULL){
                    topo = novo;
                }
                else{
                    novo->ant = topo;
                    topo = novo;
                    aux=aux->prox;
                    aux2=ini;
                }
            }
            else{
                aux2=aux2->prox;
            }
        }
    }
    return topo;
};

void mostrar_pilha(struct pilha*topo){
    struct pilha*aux;
    aux = topo;
    while (aux != NULL){
        printf ("\n%i\n", aux->num);
        aux=aux->ant;
    }
};
