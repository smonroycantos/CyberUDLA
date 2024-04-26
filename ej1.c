
#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159
int main (){
    float b, h, rest, vol, ref;
    int n;
    printf("Ingrese el radio de la base del cilindro, en metros\n");
    scanf("%f",&b);
    printf("Ingrese la altura del cilindro, en metros\n");
    scanf("%f",&h);
    printf("Ingrese la cantidad de mililitros del recipiente de refresco\n");
    scanf("%f",&ref);
    vol = (pow(b,2)*h*PI)*1000000;
    n = floor(vol/ref);
    rest = vol/ref - n;
    printf("De un contenedor de %.2f mililitros se pueden obtener %i latas de refresco de %.2f mililitros\nCon un restante de %.2f mililitros", vol, n, ref, rest);
    getch();
    return 0;
}