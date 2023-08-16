#include <stdio.h>

int main() {

    //Tarefa 1

    float Nota1, Nota2, Nota3, Media;

    printf( "Digite a nota 1> " );
    scanf( "%f", &Nota1 );
    printf( "\nDigite a nota 2> " );
    scanf( "%f", &Nota2 );
    printf( "\nDigite a nota 3> " );
    scanf( "%f", &Nota3 );

    Media = ( Nota1 + Nota2 + Nota3 ) / 3;

    if ( Media >= 6 ) {
        printf( "\nCom media de %.1f, passou de ano", Media );
    } else {
        printf( "\nCom media de %.1f, reprovou", Media );
    }

    //Tarefa 2

    int Tempo;
    float Sal, Bonus;

    printf( "\nDigite seus anos de casa> " );
    scanf( "%d",&Tempo );

    printf( "\nDigite seu salario> " );
    scanf( "%f", &Sal);

    if ( Tempo < 3 ) {
        Bonus = Sal * 0.5;
    } else { Bonus = Sal * 0.75; }

    printf( "\nSeu bonus sera de> R$%.2f", Bonus );

    //Tarefa 3

    int Numero;

    printf( "\nDigite um numero> " );
    scanf( "%d", &Numero );

    if (Numero % 2 == 0) {
        printf( "\nPar" );
    } else { printf( "\nImpar" ); }

    //Tarefa 4

    float ValorCompra, ValorVenda;

    printf( "\nDigite o valor de compra> " );
    scanf( "%f", &ValorCompra );

    if ( ValorCompra < 100 ) {
        ValorVenda = ValorCompra * 1.4;
    } else { ValorVenda = ValorCompra * 1.3; }

    printf( "\nO valor de venda sera de> R$%.2f", ValorVenda );

    //Tarefa 5

    int ConsumoG;
    float ValorPagar;

    printf( "\nInforme o consumo de gas do mes> " );
    scanf( "%d", &ConsumoG );

    if ( ConsumoG <= 10 ) {
        ValorPagar = ConsumoG * 15;
    } else { ValorPagar = ConsumoG * 15 + 20; }

    printf( "\nValor a pagar> R$%.2f", ValorPagar );

    return 0;
}
