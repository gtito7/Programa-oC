#include <stdio.h>

int main (){

    // Modificaroes de tipos de dados

    // signed - permite valores positivos e negativos (padrão para int)
    signed int a = -10;
    printf("Signed int: %d\n", a);
    // unsigned - permite apenas valores positivos
    unsigned int b = 10;
    printf("Unsigned int: %u\n", b);
    // short - reduz o tamanho do tipo de dado (normalmente 2 bytes)
    short int c = 30000;
    printf("Short int: %d\n", c);
    // long - aumenta o tamanho do tipo de dado (normalmente 8 bytes)
    long int d = 1000000000L;
    printf("Long int: %ld\n", d);
    // long long - aumenta ainda mais o tamanho do tipo de dado (normalmente 8 bytes ou mais)
    long long int e = 1000000000000LL;
    printf("Long long int: %lld\n", e);
    double f = 3.14159265358979323846; // maior precisão para números de ponto flutuante
    printf("Double: %.20f\n", f);
    unsigned long long int g = 18446744073709551615ULL; // maior valor para unsigned long long int
    printf("Unsigned long long int: %llu\n", g);
    unsigned int h = 4294967295U; // maior valor para unsigned int
    printf("Unsigned int valor máximo: %u\n", h);
    long int j = 9223372036854775807L; // não executa normalmente
    printf("Long int valor máximo: %ld\n", j);
    int k = -2147483648; // menor valor para signed int
    printf("Signed int valor mínimo: %d\n", k);

    return 0;
}