// 6.	[SUPER DESAFIO 0,5] Problemas simples do cotidiano podem representar desafios
//  para o mundo computacional. Faça um algoritmo que, dados três números inteiros
//  representando dia, mês e ano de uma data, imprima qual o dia seguinte.
//  Para facilitar, leve em consideração que TODOS os meses do ano tem 30 dias.


Programa exercicio6;
var
    idia, imes, iano : inteiro;


inicio

    //Entrada de dados
        escrever ("Qual o dia: ");
        ler( idia );
        escrever ("Qual o mês: ");
        ler( imes );
        escrever ("Qual o ano: ");
        ler( iano);

    //calcular o proximo dia do ano e calcular  
        if idia < 30  then
            idia <- idia + 1;
        else
            if imes < 12 then
                imes <- mes + 1;
            else
                iano <- iano +1;
                idia<- 1;
                imes<- 1;
            end_if;
        end_if;

fim;