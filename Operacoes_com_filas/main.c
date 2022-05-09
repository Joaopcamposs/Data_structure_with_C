#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <string.h>


int main(){
    struct pessoa *comeco;
    comeco = NULL;
    int opcao;
    int idade;
    float salario;
    char nome[40],sexo;
    struct pessoa *ender;
    ender = NULL;

    do{
        menu();
        printf("Informe uma opcao");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:{
                ender = localizar(comeco);
                printf("%s",ender->nome);
                break;
            }

            case 2:{
                printf("Informe o nome");
                fflush(stdin);
                gets(nome);
                printf("Informe a idade");
                scanf("%d",&idade);
                printf("Informe o sexo");
                fflush(stdin);
                scanf("%c",&sexo);
                printf("Informe o salario");
                scanf("%f",&salario);
                comeco = inserircomeco(comeco,nome,idade,sexo,salario);
                break;
            }

            case 3:{
                mostrar(comeco);
                break;
            }

            case 4:{
                ender = maiornome(comeco);
                printf("%s\n",ender->nome);
                printf("%d\n",ender->idade);
                printf("%c\n",ender->sexo);
                printf("%f\n",ender->salario);
                break;
            }

            case 5:{
                ender = localizar(comeco);
                printf("Informe o nome");
                fflush(stdin);
                gets(nome);
                printf("Informe a idade");
                scanf("%d",&idade);
                printf("Informe o sexo");
                fflush(stdin);
                scanf("%c",&sexo);
                printf("Informe o salario");
                scanf("%f",&salario);
                inserirultima(ender, nome, idade, sexo, salario);
                break;
            }

            case 6:{
                printf ("\nInforme qual sexo deseja verificar: ");
                fflush(stdin);
                scanf ("%c", &sexo);
                mostrarsexo(comeco, sexo);
                break;
            }
        }
    } while(opcao!=0);
    
    return 0;
}
