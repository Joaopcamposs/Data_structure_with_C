#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include <string.h>

int main(){
    int op, id=0, apos, ante, desa;
    struct bloco*ini;
    struct bloco*ender;
    ender = NULL;
    ini = NULL;

    do{
        system("cls");
        menu();
        printf ("Sua opcao: ");
        scanf ("%i", &op);

        switch(op){
            case 1:{
                ender = endereco(ini);
                printf ("\n%i", ender->idade);
                system("pause");
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
            break;
            }

            case 4:{
                printf ("\nInforme a idade: ");
                scanf ("%i", &id);
                ini = inseririni(ini, id);
                break;
            }

            case 5:{
                printf ("\nInserir apos: ");
                scanf ("%i", &apos);
                printf ("\nInforme a idade: ");
                scanf ("%i", &id);
                inserirapos(ini, ender, id, apos);
                break;
            }

            case 6:{
                printf ("\nInserir antes: ");
                scanf ("%i", &ante);
                printf ("\nInforme a idade: ");
                scanf ("%i", &id);
                ini = inserirantes(ini, ante, id);
                break;
            }
                
            case 7:{
                printf ("\nInforme desalocar: ");
                scanf ("%i", &desa);
                ini = desalocar(ini, desa);
                break;
            }
        }
    } while(op!=0);

    return 0;
}
