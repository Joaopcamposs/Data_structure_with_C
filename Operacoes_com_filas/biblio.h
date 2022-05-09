#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

struct pessoa{
    char nome[40];
    int idade;
    char sexo;
    float salario;
    struct pessoa*prox;
};

struct pessoa *inserircomeco(struct pessoa *ini,char nome[],int idade, char sexo,float salario);
void mostrar(struct pessoa *ini);
struct pessoa *localizar(struct pessoa *ini);
void menu();
struct pessoa *maiornome(struct pessoa *ini);
void inserirultima(struct pessoa *ender,char nome[],int idade, char sexo,float salario);
void mostrarsexo(struct pessoa *ini, char sexo);

#endif // BIBLIO_H_INCLUDED
