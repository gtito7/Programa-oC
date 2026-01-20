# include <stdio.h>

int main (){

    int a = 10;
    float b = 3.5;

    char caractere = 'A';
    double grandeDecimal = 20.99;

    // Conversão implícita

    float resultado1 = a + b; // inteiro convertido para float
    double resultado2 = b + grandeDecimal; // decimal convertido para double
    int resultado3 = a + caractere; // caractere convertido para int (valor ASCII
    printf("Resultado 1: (int + float): %.2f\n", resultado1);
    printf("Resultado 2: (float + double): %.2f\n", resultado2);
    printf("Resultado 3: (int + char): %d\n", resultado3);

    // Conversão explícita (casting)

    float quociente = (float) a / b; // forçando a conversão para float
    printf("Quociente 1: (float / float): %.2f\n", quociente);

    int convertido1 = (int) b; // float para int
    float convertido2 = (float) grandeDecimal; // double para float
    char convertido3 = (char) a; // int para char
    printf("Convertido 1: (float para int): %d\n", convertido1);
    printf("Convertido 2: (double para float): %.2f\n", convertido2);
    printf("Convertido 3: (int para char): %c\n", convertido3);

    return 0;
    




}