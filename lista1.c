#include <stdio.h>
#include <math.h>

int main() {
    /* int Num1, Num2, Dif;

    printf( "Digite num1> " );
    scanf( "%d", &Num1 );

    printf( "\nDigite num2> " );
    scanf( "%d", &Num2 );

    Dif = Num1 - Num2;

    printf( "\nDiferenca> %d", Dif );

    float Base, Alt, Permt, Area;

    printf( "\nDigite a base> " );
    scanf( "%f", &Base );

    printf( "\nDigite a altura> " );
    scanf( "%f", &Alt );

    Permt = 2 * ( Alt + Base );
    Area = Alt * Base;

    printf( "\nPerimetro> %.2f", Permt );
    printf( "\nArea> %.2f", Area );

    const float Pi = 3.14159;
    float Area, Raio, Permt;

    printf( "\nDigite o raio> " );
    scanf( "%f", &Raio );

    Area = Pi * pow( Raio, 2 );
    Permt = 2 * Pi * Raio;

    printf( "\nArea> %.2f", Area );
    printf( "\nPerimetro> %.2f", Permt );

    float Sal, PrcAumnt, Aumnt, NovoSal;

    printf( "\nSalario> " );
    scanf( "%f", &Sal );

    printf( "\nPorcentagem do aumento> " );
    scanf( "%f", &PrcAumnt );

    Aumnt = Sal * ( PrcAumnt / 100 );
    NovoSal = Sal + Aumnt;

    printf( "\nSalario com aumento> R$%.2f", NovoSal );

    float ValorPdt, PrcDsc, Dscnt, NovoValorPdt;

    printf( "\nValor do produto> " );
    scanf( "%f", &ValorPdt );

    printf( "\nPorcentagem do desconto> " );
    scanf( "%f", &PrcDsc );

    Dscnt = ValorPdt * ( PrcDsc / 100 );
    NovoValorPdt = ValorPdt - Dscnt;

    printf( "\nDesconto> R$%.2f", Dscnt );
    printf( "\nValor com desconto> R$%.2f", NovoValorPdt );

    float Sal, Aumnt, SalAumnt, SalLiq;

    printf( "\nSalario> " );
    scanf( "%f", &Sal );

    Aumnt = Sal * 0.2;
    SalAumnt = Sal + Aumnt;
    SalLiq = SalAumnt - ( SalAumnt * 0.1 );

    printf( "\nSalario inicial> R$%.2f", Sal );
    printf( "\nSalario com aumento> R$%.2f", SalAumnt );
    printf( "\nSalario liquido (desconto de imposto)> R$%.2f", SalLiq );

    int Valor;

    printf( "\nDigite o valor > " );
    scanf( "%d", &Valor );

    if ( Valor % 5 != 0 ) {
        printf( "\nInsira um valor multiplo de cinco> " );
        return 1;
    }

    int Ced100 = Valor / 100;
    Valor %= 100;
    int Ced50 = Valor / 50;
    Valor %= 50;
    int Ced20 = Valor / 20;
    Valor %= 20;
    int Ced10 = Valor / 10;
    Valor %= 10;

    int Ced5 = Valor / 5;

    printf( "\nCedulas de 100> %d", Ced100 );
    printf( "\nCedulas de 50> %d", Ced50 );
    printf( "\nCedulas de 20> %d", Ced20 );
    printf( "\nCedulas de 10> %d", Ced10 );
    printf( "\nCedulas de 5> %d", Ced5 );*/

    float KmInicial, KmFinal, LtCombstv, CapcddTanque, KmTanque, Distancia, Rendimento;

    printf( "\nKm inicial> " );
    scanf( "%f", &KmInicial );
    printf( "\nKm final> " );
    scanf( "%f", &KmFinal );
    printf( "\nLitros de combustivel gasto> " );
    scanf( "%f", &LtCombstv );
    printf( "\nCapacidade do tanque> " );
    scanf( "%f", &CapcddTanque );

    Distancia = KmFinal - KmInicial;
    Rendimento = Distancia / LtCombstv;
    KmTanque = Rendimento * CapcddTanque;

    printf( "\nKm feito por tanque cheio> %.2f Km", KmTanque );

    return 0;
}
