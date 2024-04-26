//Sebastian Monroy
#include <stdio.h>
#include <conio.h>
int main ()
{
    float d, p;
    int t;
    printf("Ingrese la distancia entre las ciudades\n");
    scanf("%f",&d);
    d = d*2;
    printf("Ingrese el numero de dias de estancia\n");
    scanf("%i",&t);
    p = d*0.19;
    if (d>500 && t>10){
        p = p*0.8;
        printf ("Felicidades, ha obtenido un descuento del 20%%\n");
    }
    printf("El valor total a pagar es de $%.2f", p);
    getch();
    return 0;
    
}