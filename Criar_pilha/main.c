#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <string.h>

int main(){
    int op, id=0;
    struct bloco*ini;
    struct bloco*ender;
    ini=NULL;
    ender=NULL;
    struct pilha*topo;
    topo=NULL;


    do{
        system("cls");
        menu();
        printf ("Sua opcao: ");
        scanf ("%i", &op);

        switch(op){
            case 1:{
                ender = endereco(ini);
                printf ("\n%i", ender->idade);
            break;
            }

            case 2:{
                printf ("\nInforme a idade: ");
                scanf ("%i", &id);
                ini = inserirnofim(ender, ini, id);
            break;
            }

            case 3:{
                mostrar(ini);
                system ("pause");
            break;
            }

            case 4:{
                topo = criar_pilha(ini, topo);
                mostrar_pilha(topo);
                system ("pause");
                break;
            }

            case 5:{
                mostrar_pilha(topo);
                system("pause");
                break;
            }

        }
    } while(op!=0);

    return 0;
}
