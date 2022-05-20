#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

struct node *CriarListaLigada(struct node *start)
{
    struct node *novo;
    novo = (struct node *)malloc(sizeof(struct node));
    novo = NULL;

    return novo;
};

void ImprimirListaLigada(struct node *start)
{
    struct node *aux;
    aux = start;
    while (aux != NULL)
    {
        printf("\n%i\n", aux->data);
        aux = aux->prox;
    }
    system("pause");
};

struct node *InsereInicioLista(struct node *start, int dat)
{
    struct node *novo;
    novo = (struct node *)malloc(sizeof(struct node));
    novo->data = dat;
    novo->prox = start;

    return novo;
};

struct node *InsereFimLista(struct node *start, int dat)
{
    struct node *novo;
    novo = (struct node *)malloc(sizeof(struct node));

    struct node *aux;
    aux = start;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    novo->data = dat;
    aux->prox = novo;
    novo->prox = NULL;

    return start;
};

struct node *InsereDepois(struct node *start, int dat, int insApos)
{
    struct node *aux;
    aux = start;
    while (aux->data != insApos)
    {
        aux = aux->prox;
    }

    struct node *novo;
    novo = (struct node *)malloc(sizeof(struct node));
    novo->data = dat;
    novo->prox = aux->prox;
    aux->prox = novo;

    return start;
};

struct node *InsereAntes(struct node *start, int dat, int insAntes)
{
    struct node *aux;
    aux = start;
    while (aux->prox->data != insAntes)
    {
        aux = aux->prox;
    }

    struct node *novo;
    novo = (struct node *)malloc(sizeof(struct node));
    novo->data = dat;
    novo->prox = aux->prox;
    aux->prox = novo;

    return start;
};

struct node *DeletaNoInicio(struct node *start)
{
    struct node *aux;
    aux = start->prox;
    free(start);

    return aux;
};

struct node *DeletaNoFim(struct node *start)
{
    struct node *aux, *aux2;
    aux = start;
    while (aux->prox->prox != NULL)
    {
        aux = aux->prox;
    }
    aux2 = aux->prox;
    free(aux2);
    aux->prox = NULL;

    return start;
};

struct node *DeletaNoEspecifico(struct node *start, int del)
{
    struct node *aux, *aux2;
    aux = start;
    while (aux->prox->data != del)
    {

        aux = aux->prox;
    }
    aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);

    return start;
};

struct node *DeletaDepois(struct node *start, int delDepois)
{
    struct node *aux, *aux2;
    aux = start;
    while (aux->data != delDepois)
    {
        aux = aux->prox;
    }

    aux2 = aux->prox;
    aux->prox = aux2->prox;
    free(aux2);

    return start;
};

struct node *DeletaTudo(struct node *start)
{
    struct node *aux, *aux2;
    aux = start;

    while (aux->prox != NULL)
    {
        aux2 = aux->prox;
        free(aux);
        aux = aux2;
    }
    free(aux);

    return NULL;
};

/*
struct node *OrdenaLista(struct node*start)
{



};*/
