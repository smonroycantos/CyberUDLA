//Sebastian Monroy
#include <stdio.h>
#include <conio.h>
int main ()
{
    float metro, precio, total;
    printf("Ingrese el numero de metros cuadrados a pintar\n");
    scanf("%f",&metro);
    printf("Ingrese el valor por metro cuadrado en dolares\n");
    scanf("%f",&precio);  
    total = metro*precio;
    printf("El precio por pintar %.2f metros cuadrados es de $%.2f", metro, total);
    getch();
    return 0;
}