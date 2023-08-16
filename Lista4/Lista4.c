#include <stdio.h>

int main() {

    //Tarefa 1

    int Idade;

    printf( "Digite sua idade> " );
    scanf( "%d", &Idade );

    if ( Idade >= 0 && Idade <= 10 ) {
        printf( "\nInfantil" );
    } else if ( Idade >= 11 && Idade <= 17 ) {
        printf( "\nJuvenil" );
    } else if ( Idade >= 18 && Idade <= 64 ) {
        printf( "\nAdulto" );
    } else if ( Idade >= 65 ) {
        printf( "\nSenior" );
    }

    //Tarefa 2

    float Nota1, Nota2, Nota3, Media;
    int Faltas;

    printf( "\nPrimeira nota> " );
    scanf( "%f", &Nota1 );

    printf( "\nSegunda nota> " );
    scanf( "%f", &Nota2 );

    printf( "\nTerceira nota> " );
    scanf( "%f", &Nota3 );

    printf( "\nNumero de faltas> " );
    scanf( "%d", &Faltas );

    Media = ( Nota1 + Nota2 + Nota3 ) / 3;

    if ( Media >= 6 && Faltas < 21 ) {
        printf( "\nAprovado" );
    } else if ( Media < 6 && Faltas >= 21 ) {
        printf( "\nReprovado por media e falta" );
    } else if ( Media < 6 ) {
        printf( "\nReprovado por media" );
    } else if ( Faltas >= 21 ) {
        printf( "\nReprovado por falta" );
    }

    //Tarefa 3

    int Dia;

    printf( "\nDigite o numero do dia da semana> " );
    scanf( "%d" , &Dia );

    if ( Dia >= 1 && Dia <= 7 ) {
        if ( Dia == 1 || Dia == 7 ) {
            printf( "\nFim de semana" );
        } else {
            printf( "\nDia util" );
        }
    } else {
        printf( "\nNumero incorreto" );
    }

    //Tarefa 4

    int CodLinha;

    printf( "\nDigite a linha de onibus> " );
    scanf( "%d", &CodLinha );

    if ( CodLinha == 1 ) {
        printf( "\nLinha 1> Bela Vista" );
    } else if ( CodLinha == 2 ) {
        printf( "\nLinha 2> Figueira" );
    } else if ( CodLinha == 3 ) {
        printf( "\nLinha 3> Sta Terezinha" );
    } else {
        printf( "\nCodigo inexistente" );
    }

    //Tarefa 5

    int Num1, Num2;

    printf( "\nDigite um numero> " );
    scanf( "%d", &Num1 );
    printf( "\nDigite outro numero> " );
    scanf( "%d", &Num2 );

    if ( Num1 > Num2 ) {
        printf( "\n%d maior que %d", Num1, Num2 );
    } else if ( Num2 > Num1 ) {
        printf( "\n%d maior que %d", Num2, Num1 );
    } else {
        printf( "\nNumeros iguais", Num1, Num2 );
    }

    //Tarefa 6

    int Ano1, Ano2;

    printf( "\nDigite o ano de nascimento da primeira pessoa> " );
    scanf( "%d", &Ano1 );

    printf( "\nDigite o da segunda pessoa> " );
    scanf( "%d", &Ano2 );

    if ( Ano1 < Ano2 ) {
        printf( "\nA primeira pessoa nasceu primeiro" );
    } else if ( Ano2 < Ano1 ) {
        printf( "\nA segunda pessoa nasceu primeiro" );
    } else {
        printf( "\nAmbas nasceram no mesmo ano" );
    }

    //Tarefa 7

    int Matricula;

    printf( "\nDigite a Matricula> " );
    scanf( "%d", &Matricula );

    int Digito = Matricula % 10;

    if ( Digito >= 0 && Digito <= 2 ) {
        printf( "\nPagamento em 10/02" );
    } else if ( Digito >= 3 && Digito <= 5 ) {
        printf( "\nPagamento em 10/04" );
    } else if ( Digito >= 6 && Digito <= 7 ) {
        printf( "\nPagamento em 10/06" );
    } else {
        printf( "\nPagamento em 10/08" );
    }

    //Tarefa 8

    float TanqueLts, ValorLts, ValorPagar;
    char Tipo;

    printf( "\nDigite a capacidade do tanque> " );
    scanf( "%f", &TanqueLts );
    printf( "\nEscolha o tipo de combustivel> \nE - Etanol\nD - Diesel\nG - Gasolina\n\n>" );
    scanf( " %c", &Tipo );

    if ( Tipo == 'E' || Tipo == 'e' ) {
        ValorLts = 5.99;
    } else if ( Tipo == 'D' || Tipo == 'd' ) {
        ValorLts = 6.589;
    } else if ( Tipo == 'G' || Tipo == 'g' ) {
        ValorLts = 6.99;
    } else {
        printf( "\nInvalido" );
    }

    ValorPagar = TanqueLts * ValorLts;

    printf( "\nO valor sera> R$ %.2f\n", ValorPagar );

    //Tarefa 9

    int ValidadeDia, ValidadeMes, ValidadeAno;
    int HojeDia, HojeMes, HojeAno;

    printf("\nDigite o Dia - Mes - Ano da data de validade> \n" );
    scanf( "%d %d %d", &ValidadeDia, &ValidadeMes, &ValidadeAno );

    printf( "\nDigite o Dia - Mes - Ano de hoje> \n" );
    scanf("%d %d %d", &HojeDia, &HojeMes, &HojeAno );

    if ( HojeAno > ValidadeAno ||
        ( HojeAno == ValidadeAno && HojeMes > ValidadeMes ) ||
        ( HojeAno == ValidadeAno && HojeMes == ValidadeMes && HojeDia > ValidadeDia )) {
        printf( "\nProduto vencido" );
    } else { printf( "\nDentro da validade" ); }

    //Tarefa 10

    int NumC1, NumC2, NumC3;

    printf( "\nDigite o primeiro numero> " );
    scanf( "%d", &NumC1 );

    printf( "\nDigite o segundo numero> " );
    scanf( "%d", &NumC2 );

    printf( "\nDigite o terceiro numero> " );
    scanf( "%d", &NumC3 );

    if ( NumC1 <= NumC2 && NumC1 <= NumC3 ) {
        if ( NumC2 <= NumC3 ) {
            printf( "\n%d %d %d", NumC1, NumC2, NumC3 );
        } else {
            printf( "\n%d %d %d", NumC1, NumC3, NumC2 );
        }
    } else if ( NumC2 <= NumC1 && NumC2 <= NumC3 ) {
        if ( NumC1 <= NumC3 ) {
            printf( "\n%d %d %d", NumC2, NumC1, NumC3 );
        } else {
            printf( "\n%d %d %d", NumC2, NumC3, NumC1 );
        }
    } else {
        if ( NumC1 <= NumC2 ) {
            printf( "\n%d %d %d", NumC3, NumC1, NumC2 );
        } else {
            printf( "\n%d %d %d", NumC3, NumC2, NumC1 );
        }
    }

    return 0;
}
