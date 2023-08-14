#include <stdio.h>

int main() {
    int Num1, Num2, Dif;

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

    return 0;
}
