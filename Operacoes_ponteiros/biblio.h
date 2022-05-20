#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

struct node
{
    int data;
    struct node *prox;
};

struct node *CriarListaLigada(struct node *start);
void ImprimirListaLigada(struct node *start);
struct node *InsereInicioLista(struct node *start, int dat);
struct node *InsereFimLista(struct node *start, int dat);
struct node *InsereDepois(struct node *start, int dat, int insApos);
struct node *InsereAntes(struct node *start, int dat, int insAntes);
struct node *DeletaNoInicio(struct node *start);
struct node *DeletaNoFim(struct node *start);
struct node *DeletaNoEspecifico(struct node *start, int del);
struct node *DeletaDepois(struct node *start, int delDepois);
struct node *DeletaTudo(struct node *start);
/*
struct node *OrdenaLista(struct node*start);

void SalvarTXT(struct node*start);
*/

#endif // BIBLIO_H_INCLUDED
