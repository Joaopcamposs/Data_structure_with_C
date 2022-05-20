#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{
    int opc = 0;
    struct node *start = NULL;

    do
    {
        system("cls");
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Cria lista/elementos");
        printf("\n 2: Imprime a lista");
        printf("\n 3: Adiciona um no no inicio da lista");
        printf("\n 4: Adiciona um no no fim da lista");
        printf("\n 5: Adiciona um no depois de um dado no");
        printf("\n 6: Adiciona um no antes de um dado no");
        printf("\n 7: Deleta um no no inicio da lista");
        printf("\n 8: Deleta um no no fim da lista");
        printf("\n 9: Deleta um no especifico");
        printf("\n 10: Deleta um no depois um no especifico");
        printf("\n 11: Deleta toda a lista");
        printf("\n 12: ordena a lista");
        printf("\n 13: Salvar Lista no TXT");
        printf("\n 14: Sair");
        printf("\n\n Informe uma opcao: ");
        scanf("%d", &opc);

        if (opc == 1)
        {
            start = CriarListaLigada(start);
        }

        else if (opc == 2)
        {
            ImprimirListaLigada(start);
        }

        else if (opc == 3)
        {
            printf("\nDigite a data: ");
            int dat;
            scanf("%i", &dat);
            start = InsereInicioLista(start, dat);
        }

        else if (opc == 4)
        {
            int dat;
            printf("\nDigite a data: ");
            scanf("%i", &dat);
            start = InsereFimLista(start, dat);
        }

        else if (opc == 5)
        {
            int dat, insApos;
            printf("\nDigite apos qual quer inserir: ");
            scanf("%i", &insApos);
            printf("\nDigite a data: ");
            scanf("%i", &dat);
            start = InsereDepois(start, dat, insApos);
        }

        else if (opc == 6)
        {
            int dat, insAntes;
            printf("\nDigite antes de qual quer inserir: ");
            scanf("%i", &insAntes);
            printf("\nDigite a data: ");
            scanf("%i", &dat);
            start = InsereAntes(start, dat, insAntes);
        }

        else if (opc == 7)
        {
            start = DeletaNoInicio(start);
        }

        else if (opc == 8)
        {
            start = DeletaNoFim(start);
        }

        else if (opc == 9)
        {
            int del;
            printf("\nDigite qual deseja remover: ");
            scanf("%i", &del);
            start = DeletaNoEspecifico(start, del);
        }

        else if (opc == 10)
        {
            int delDepois;
            printf("\nDigite depois de qual deseja remover: ");
            scanf("%i", &delDepois);
            start = DeletaDepois(start, delDepois);
        }

        else if (opc == 11)
        {
            start = DeletaTudo(start);
        }
        /*
        else if (opc==12){
            start = OrdenaLista(start);
        }

        else if (opc==13){
            SalvarTXT(*start);
        }*/
    } while (opc != 14);
    return 0;
}
