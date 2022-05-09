#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"


int main(){
    struct cadastro cad[3];
    int opcao;
    do{
        system("cls");
        printf("\n0 - Sair");
        printf("\n1 - Cadastro");
        printf("\n2 - Mostrar");
        printf("\n3 - Mostrar maior idade");
        printf("\n4 - Mostrar maior nome");
        printf("\n5 - Mostrar maior nome-retorna char");
        printf("\n\nEscolha uma opcao: ");

        scanf("%d",&opcao);
        switch(opcao){
            case 0:
                printf("Saindo......");
                break;
            case 1:
                inserir(cad);
                break;
            case 2:
                mostrar(cad);
                break;
            case 3:
                printf("\nA maior idade cadastrada eh %d", maiorid(cad));
                break;
            case 4:
                printf("\nMaior nome: %s", cad[maiornome(cad)].nome);
                break;
            case 5:
                printf("\nMaior nome: %s", maiornomechar(cad));
                break;
            default:
                printf("\n comando errado");
        }
        system("pause");
        
    }while(opcao!=0);

    return 0;
}
