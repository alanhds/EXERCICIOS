// 6.	[SUPER DESAFIO 0,5] Problemas simples do cotidiano podem representar desafios
//  para o mundo computacional. Faça um algoritmo que, dados três números inteiros
//   representando dia, mês e ano de uma data, imprima qual o dia seguinte. 
//   Para facilitar, leve em consideração que TODOS os meses do ano tem 30 dias.

#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    //declaração de variaveis
        int  idia,imes,iano ;


    //Entrada de dados
        printf("Qual o dia ? \n");
        scanf("%d",&idia);

        printf("Qual o mes ? \n");
        scanf("%d",& imes);

        printf("Qual o ano ? \n");
        scanf("%d",& iano);

    //Comparações
       if (idia<30)
       {
           idia = idia + 1;
       }
       else
       {
           if (imes<12)
           {
                imes = imes + 1;
                idia = 1;
           }
           else
           {
                imes = 1;
                idia = 1;
                iano = iano + 1;

           }
       }

    //Resultado
        printf("\nData : %d",idia);
        printf("/%d",imes);
        printf("/%d",iano);
        printf("\nFim.......\n");

    //Finalização
        getchar();
        system("pause");
        return(0);
}