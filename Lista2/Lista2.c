#include <stdio.h>
#include <math.h>

int main() {

    //Tarefa 1
    int DataNasc;

    printf( "Digite seu ano de nascimento> " );
    scanf( "%d", &DataNasc );

    if ( DataNasc >= 1990 && DataNasc <= 1999 ) {
        printf( "\nNascido na decada de 90" );
    }

    //Tarefa 2

    float ValorVenda;

    printf( "\nDigite o valor de venda do mes> " );
    scanf( "%f", &ValorVenda );

    if ( ValorVenda > 30000 ) {
        printf( "\nParabens, voce superou a meta do mes!" );
    }

    //Tarefa 3

    int A, B, C;

    printf( "\nDigite o valor de A> " );
    scanf( "%d", &A );

    printf( "\nDigite o valor de B> " );
    scanf( "%d", &B );

    printf( "\nDigite o valor de C> " );
    scanf( "%d", &C );

    int AB;

    AB = A + B;

    if ( AB > C ) {
        printf( "\nA soma de A + B resulta em um numero maior que C> %d", AB);
    }

    //Tarefa 4

    float ValorCompra;

    printf( "\nDigite o valor de compra> " );
    scanf( "%f", &ValorCompra );

    if ( ValorCompra > 200 ) {
        float Desc = ValorCompra * 0.15;
        float ValorFinal = ValorCompra - Desc;

        printf( "\nValor a pagar> %.2f", ValorFinal );
    } else {
        printf( "\nValor a pagar> %.2f", ValorCompra );
    }

    //Tarefa 5

    float Velocidade;

    printf( "\nDigite a velocidade em km/h> " );
    scanf( "%f", &Velocidade );

    if ( Velocidade > 60 ) {
        float Multa = ( Velocidade - 60 ) * 10;
        printf( "\nMultado> R$%.2f", Multa );
    }

    return 0;
}
