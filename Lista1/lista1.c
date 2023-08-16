#include <stdio.h>
#include <math.h>

int main() {

    //Tarefa 1

    int Num1, Num2, Dif;

    printf( "Digite num1> " );
    scanf( "%d", &Num1 );

    printf( "\nDigite num2> " );
    scanf( "%d", &Num2 );

    Dif = Num1 - Num2;

    printf( "\nDiferenca> %d", Dif );

    //Tarefa 2

    float Base, Alt, Permt, Area;

    printf( "\nDigite a base> " );
    scanf( "%f", &Base );

    printf( "\nDigite a altura> " );
    scanf( "%f", &Alt );

    Permt = 2 * ( Alt + Base );
    Area = Alt * Base;

    printf( "\nPerimetro> %.2f", Permt );
    printf( "\nArea> %.2f", Area );

    //Tarefa 3

    const float Pi = 3.14159;
    float AreaTres, Raio, PermtTres;

    printf( "\nDigite o raio> " );
    scanf( "%f", &Raio );

    AreaTres = Pi * pow( Raio, 2 );
    PermtTres = 2 * Pi * Raio;

    printf( "\nArea> %.2f", AreaTres );
    printf( "\nPerimetro> %.2f", PermtTres );

    //Tarefa 4

    float Sal, PrcAumnt, Aumnt, NovoSal;

    printf( "\nSalario> " );
    scanf( "%f", &Sal );

    printf( "\nPorcentagem do aumento> " );
    scanf( "%f", &PrcAumnt );

    Aumnt = Sal * ( PrcAumnt / 100 );
    NovoSal = Sal + Aumnt;

    printf( "\nSalario com aumento> R$%.2f", NovoSal );

    //Tarefa 5

    float ValorPdt, PrcDsc, Dscnt, NovoValorPdt;

    printf( "\nValor do produto> " );
    scanf( "%f", &ValorPdt );

    printf( "\nPorcentagem do desconto> " );
    scanf( "%f", &PrcDsc );

    Dscnt = ValorPdt * ( PrcDsc / 100 );
    NovoValorPdt = ValorPdt - Dscnt;

    printf( "\nDesconto> R$%.2f", Dscnt );
    printf( "\nValor com desconto> R$%.2f", NovoValorPdt );

    //Tarefa 6

    float SalSeis, AumntSeis, SalAumnt, SalLiq;

    printf( "\nSalario> " );
    scanf( "%f", &SalSeis );

    AumntSeis = SalSeis * 0.2;
    SalAumnt = SalSeis + AumntSeis;
    SalLiq = SalAumnt - ( SalAumnt * 0.1 );

    printf( "\nSalario inicial> R$%.2f", SalSeis );
    printf( "\nSalario com aumento> R$%.2f", SalAumnt );
    printf( "\nSalario liquido (desconto de imposto)> R$%.2f", SalLiq );

    //Tarefa 7

    int Valor;

    printf( "\nDigite o valor > " );
    scanf( "%d", &Valor );

    if ( Valor % 5 != 0 ) { do {
        printf( "\nInsira um valor multiplo de cinco> " );
        printf( "\nDigite o valor > " );
        scanf( "%d", &Valor );
    } while ( Valor % 5 != 0 ); }


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
    printf( "\nCedulas de 5> %d", Ced5 );

    //Tarefa 8

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

    //Tarefa 9

    int A, B, C;

    printf( "\nInsira A> " );
    scanf( "%d", &A );
    printf( "\nInsira B> " );
    scanf( "%d", &B );

    C = A;
    A = B;
    B = C;

    printf( "\nA> %d", A );
    printf( "\nB> %d", B);

    //Tarefa 10

    float Tempo;

    printf( "\nInsira o tempo> " );
    scanf( "%f", &Tempo );

    float Formula = 2048 * pow( 2, -0.5 * Tempo );

    printf( "\nO resultado foi de %.2f gramas", Formula );

    return 0;
}
