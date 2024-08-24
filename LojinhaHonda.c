#include <stdio.h>
#include <stdlib.h>

    float calculasalario(float salario){

    return salario * 0.30;
    }

    float valorparcela(int meses, float valor){

        return (valor / meses);
    }




int main(){

    int mod = 0;
    float salario = 0;
    float pop110 = 10.000;
    printf("Bem vindo a Nossa loja Honda \n");
    printf("Por Favor, escolha um dos nossos veiculos disponiveis abaixo\n 1- Pop 110 10.000 \n 2- Fan 160 18.000 \n 3-CB300F 25.000 \n");
    scanf("%i", &mod);
    if (mod = 1)
    {
        
        printf("Voce escolheu o modelo pop 110, vamos partir para a avaliacao");
        printf("Informe seu salario");
        scanf("%i", &salario);
        int meses = 0;
        printf("Em quantos meses deseja pagar sua moto?");
        scanf("%i",&meses);
        float valorparcel = valorparcela(meses, pop110);
        printf("O valor da sua parcela sera de %i", valorparcel);
        float salario30 = calculasalario(salario30);
        printf("O valor maximo da sua parcela e de R$ %2.f", salario30);
        


    }
    else if (mod = 2)
    {
        /* code */
    }
    else if(mod = 3)
    {

    }
    else
    {
        printf("Modelo nao disponivel");
    }
    
    
    

}