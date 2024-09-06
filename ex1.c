#include <stdio.h>
#include <stdlib.h>

    float calculafaturamento(float quantia, int tempo, float rentabil){
        quantia = (quantia * rentabil) * tempo;
        return(quantia);
    }

    int relatorio( int a, int b){
        if (a == 1 && b == 1)
        {
            return(11);
        }
        else if (a == 1 && b == 2)
        {
            return(12);
        }
        else if (a == 1 && b == 3)
        {
            return(13);
        }
        else if (a == 2 && b == 1)
        {
            return(21);
        }
        else if (a == 2 && b == 2)
        {
            return(22);
        }
        else if (a == 2 && b == 3)
        {
            return(23);
        }
        else if (a == 3 && b == 1)
        {
            return(31);
        }
        else if (a == 3 && b == 2)
        {
            return(32);
        }
        else if (a == 3 && b == 3)
        {
            return(33);
        }
        
    }

    int tempo(int a, int b){
        switch (a)
        {
        case 1:
            return relatorio(a, b);
            break;
        case 2:
            return relatorio(a, b);
            break;
        case 3:
            return relatorio(a, b);
            break;
        
        default:
            break;
        }
    }

    int nivelrisco(int risco, int duracao){
        switch (risco)
        {
        case 1:
             return (tempo(duracao, risco));
            break;
        case 2:
            return (tempo(duracao, risco));
            break;
        case 3:
            return (tempo(duracao, risco));
            break;
        
        default:
            break;
        }
    }

int main(){
    float quantia = 0;
    int classe = 0;
    int tempo = 0;
    int empresa = 0;
    float faturamento = 0;
    
    printf("Bem vindo a consultoria de investimentos LTDA!!!\nPor favor insira as seguintes informações abaixo\n");
    printf("Quantia que você deseja investir (R$):\n");
    scanf("%f", &quantia);
    printf("Classificacao de risco \n 1-Baixo\n 2-Medio\n 3-Alto\n");
    scanf("%i", &classe);
    printf("Quantidade de tempo em Meses\n");
    scanf("%i", &tempo);
    switch(tempo)
    {
    case 24:
        tempo = 1;
        empresa = nivelrisco(classe, tempo);
        break;
        tempo = 2;
        empresa = nivelrisco(classe, tempo);
        break;
        tempo = 3;
        empresa = nivelrisco(classe, tempo);
        break;
    
    default:
    printf("Ops, tempo de investimento inválido. Por favor, escolha entre 24");
        break;
    }
    
    switch (empresa)
    {
    case 11:
        faturamento = calculafaturamento(quantia, tempo, 0.05);
        printf("A melhor escolha de investimentos para seu perfil e a empesa AZ investimentos\n");
        printf(" Tempo minimo 24 meses\n Rentabilidade 0,5 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 12:
        faturamento = calculafaturamento(quantia, tempo, 0.08);
        printf("A melhor escolha de investimentos para seu perfil e a empesa AZ investimentos\n");
        printf(" Tempo minimo 60 meses\n Rentabilidade 0,8 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 13:
        faturamento = calculafaturamento(quantia, tempo, 0.12);
        printf("A melhor escolha de investimentos para seu perfil e a empesa AZ investimentos\n");
        printf(" Tempo minimo 120 meses\n Rentabilidade 1,2 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    case 21:
        faturamento = calculafaturamento(quantia, tempo, 0.11);
        printf("A melhor escolha de investimentos para seu perfil e a empesa Crypto invest\n");
        printf(" Tempo minimo 24 meses\n Rentabilidade 1,1 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 22:
        faturamento = calculafaturamento(quantia, tempo, 0.15);
        printf("A melhor escolha de investimentos para seu perfil e a empesa Crypto invest\n");
        printf(" Tempo minimo 60 meses\n Rentabilidade 1,5 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 23:
        printf("%i", empresa);
        faturamento = calculafaturamento(quantia, tempo, 0.19);
        printf("A melhor escolha de investimentos para seu perfil e a empesa Crypto invest\n");
        printf(" Tempo minimo 120 meses\nRentabilidade 1,9 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 31:
        faturamento = calculafaturamento(quantia, tempo, 0.21);
        printf("A melhor escolha de investimentos para seu perfil e a empesa Bitcoin XP\n");
        printf(" Tempo minimo 24 meses\n Rentabilidade 2,1 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 32:
        faturamento = calculafaturamento(quantia, tempo, 0.28);
        printf("A melhor escolha de investimentos para seu perfil e a empesa Bitcoin XP\n");
        printf(" Tempo minimo 60 meses\n Rentabilidade 2,8 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    case 33:
        faturamento = calculafaturamento(quantia, tempo, 0.39);
        printf("A melhor escolha de investimentos para seu perfil e a empesa Bitcoin XP\n");
        printf(" Tempo minimo 120 meses\n Rentabilidade 3,9 ao mes\n Risco baixo\n");
        printf("Seu faturamento sera de %.2f apos o total de %i meses \n", faturamento, tempo);
        break;
    
    default:
        break;
    }

    
       
}