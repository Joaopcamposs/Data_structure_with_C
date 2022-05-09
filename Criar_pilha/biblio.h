#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

struct bloco{
    int idade;
    struct bloco*prox;
    struct bloco*ant;
};

struct pilha{
    int num;
    struct pilha *ant;
};

void menu();
struct bloco* endereco(struct bloco*ini);
struct bloco* inserirnofim(struct bloco*ender,struct bloco*ini, int id);
void mostrar (struct bloco*ini);
struct pilha* criar_pilha(struct bloco*ini, struct pilha*topo);
void mostrar_pilha(struct pilha*topo);


#endif // BIBLIO_H_INCLUDED
