#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

struct cadastro{
    int id;
    char nome[50];
};

void inserir(struct cadastro cd[]);
void mostrar(struct cadastro cd[]);
int maiorid(struct cadastro cd[]);
int maiornome(struct cadastro cd[]);
char* maiornomechar(struct cadastro cd[]);

#endif // BIBLIO_H_INCLUDED
