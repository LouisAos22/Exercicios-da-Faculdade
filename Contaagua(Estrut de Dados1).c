#include <stdio.h>
#include <stdlib.h>



    int litros = 0;

    void calculatotallittros(int idade)
    {
        int i = 0;
        if (idade <= 10)
        {
            i++;
            litros += 18;
            printf("A pessoa %i com idade %i utiliza %i litros de agua \n \n",i,idade,litros);
        }
        else if (idade > 10 && idade <= 18)
        {
            i++;
            litros += 30;
            printf("A pessoa %i com idade %i utiliza %i litros de agua \n \n", i,idade,litros);
        }
            else if (idade > 18 && idade <= 25)
        {
            i++;
            litros += 42;
            printf("A pessoa %i com idade %i utiliza %i litros de agua \n \n", i,idade,litros);
        }

            else if (idade > 25)
        {
            i++;
            litros += 24;
            printf("A pessoa %i com idade %i utiliza %i litros de agua \n \n", i,idade,litros);
        }

        
    }

    void mostrarresultado(int pessoas){

        printf("--Segue o relatorio do consumo de agua---");
        printf("\nO total de litros e %i \n", litros);
        printf("O total de pessoas e %i \n",pessoas);
        printf("O total de litros gastos em Reais e %.2f", (litros * 0.60));

    }

int main(){

    int qtdepessoas = 0;


    printf("Ola, quantas pessoas mora na sua casa? \n");
    scanf("%i",&qtdepessoas);

    for (int i = 0; i < qtdepessoas; i++)
    {
        int idade = 0;
        printf("Qual a idade da pessoa? %i \n", i+1);
        scanf("%i", &idade);

        calculatotallittros(idade);
        
    }
    mostrarresultado(qtdepessoas);
    
    return 0;
}