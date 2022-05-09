#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

struct bloco{
    int idade;
    struct bloco*prox;
    struct bloco*ant;
};

void menu();
struct bloco* endereco(struct bloco*ini);
struct bloco* inserirnofim(struct bloco*ender,struct bloco*ini, int id);
void mostrar(struct bloco*ini);
struct bloco*inseririni(struct bloco*ini, int id);
void inserirapos (struct bloco*ini, struct bloco*ender, int id, int apos);
struct bloco *inserirantes (struct bloco*ini, int id, int ante);
struct bloco*desalocar (struct bloco*ini, int desa);

#endif // BIBLIO_H_INCLUDED