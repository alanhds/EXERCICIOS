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
        int  idiaDez,ianoDez, ianoCentena, ianoMilhar, ianoUnidade;

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

    //imprime data 
        printf("\nData : ");

    //impressão do dia
        if (idia < 19){
            //imprime o dia
            escreveUnidade(idia);
        }else
        {
            idiaDez = idia/10;
                if ( idia % 10 == 0)
                {
                    escreveDezena(idiaDez);
                }else
                {
                    escreveDezena(idiaDez);
                    printf(" e ");
                    idia = idia-(idiaDez*10);
                    escreveUnidade(idia);
                }

        }

     printf(" de ");

    //Imprime o mes 
        escreveMes(imes);
        printf(" de ");

    //Imprime o ano

        //milhar
            if (iano>999)
            {
                ianoMilhar = iano /1000;
                escreveMilhar( ianoMilhar);
            }

            iano =iano - (ianoMilhar*1000);

        //centena
            ianoCentena = iano /100;

            if (iano>99)
            {
                if ( iano % 100 == 0)
                {
                    escreveCentena(ianoCentena);
                }else
                {
                    escreveCentenaE( ianoCentena);
                }
            }

            iano =iano - (ianoCentena*100);

        //dezena
            if (iano < 19){
                //unidade
                    escreveUnidade(iano);
            }else
            {
                //dezena
                 ianoDez = iano/10;
                    if ( iano % 10 == 0)
                    {
                        escreveDezena(ianoDez);
                    }else
                    {
                        escreveDezena(ianoDez);
                        printf(" e ");
                        iano = iano-(ianoDez*10);
                        escreveUnidade(iano);
                    }

            }
    printf(" \n \n FIM ");
    //Finalização
        getchar();
        system("pause");
        return(0);
}

void escreveUnidade(int unidade){
    switch (unidade)
            {
                   case 1:printf("um");break;
                    case 2:printf("dois");break;
                    case 3:printf("três");break;
                    case 4:printf("quatro");break;
                    case 5:printf("cinco");break;
                    case 6:printf("seis");break;
                    case 7:printf("sete");break;
                    case 8:printf("ioto");break;
                    case 9:printf("nove");break;
                    case 10:printf("dez");break;
                    case 11:printf("onze");break;
                    case 12:printf("doze");break;
                    case 13:printf("treze");break;
                    case 14:printf("quatorze");break;
                    case 15:printf("quinze");break;
                    case 16:printf("dezesies");break;
                    case 17:printf("dezesete");break;
                    case 18:printf("dezoito");break;
                    case 19:printf("dezenove");break;
                }
}

void escreveDezena(int dezena){
 switch (dezena)
            {
                    case 2:printf("vinte");break;
                    case 3:printf("trinta");break;
                    case 4:printf("quarenta");break;
                    case 5:printf("cinquenta");break;
                    case 6:printf("sessenta");break;
                    case 7:printf("setenta");break;
                    case 8:printf("iotenta");break;
                    case 9:printf("noventa");break;
                }
}

void escreveCentena(int centena){
 switch (centena)
            {       
                    case 1:printf("cem ");break;
                    case 2:printf("duzentos ");break;
                    case 3:printf("trezentos ");break;
                    case 4:printf("quatocentos ");break;
                    case 5:printf("quinhentos ");break;
                    case 6:printf("sissentos ");break;
                    case 7:printf("setecento ");break;
                    case 8:printf("oitocentos ");break;
                    case 9:printf("novecentos ");break;
                }
}

void escreveCentenaE(int centena){
 switch (centena)
            {       
                    case 1:printf("cento e ");break;
                    case 2:printf("duzentos e ");break;
                    case 3:printf("trezentos e ");break;
                    case 4:printf("quatocentos e ");break;
                    case 5:printf("quinhentos e ");break;
                    case 6:printf("sissentos e ");break;
                    case 7:printf("setecento e ");break;
                    case 8:printf("oitocentos e ");break;
                    case 9:printf("novecentos e ");break;
                }
}
void escreveMilhar(int milhar){
    if (milhar>1){
        escreveUnidade( milhar );
        printf(" ");
    }
    printf(" mil ");
}

void escreveMes(int mes){
 switch (mes)
            {
                    case 1:printf("Janeiro");break;
                    case 2:printf("Fevereito");break;
                    case 3:printf("Marco");break;
                    case 4:printf("Abril");break;
                    case 5:printf("Maio");break;
                    case 6:printf("Junho");break;
                    case 7:printf("Julho");break;
                    case 8:printf("Agosto");break;
                    case 9:printf("Setembro");break;
                    case 10:printf("Outubro");break;
                    case 11:printf("Novembro");break;
                    case 12:printf("dezembro");break;
                }
}