#include <stdio.h>
#include <math.h>
#define g0 32
#define R 20902000
#define G 3.44e-8
#define masaTierra 4.092e23


int main(int argc, char const *argv[]){
    double h;
    double g;
    double porcentaje;
    double km;
    double m;
    double porcentajeReal;
    printf("Ingrese el porcentaje: ");
    scanf("%lf", &porcentaje);
    porcentajeReal= porcentaje/100;
    h= sqrt((G*masaTierra)/(porcentajeReal*g0))-R;
    km = h * 0.0003048;
    m = km * 1000;
    printf("La gravedad es %.2f%% de la gravedad que son %.2f pies\n", porcentaje ,(porcentaje/100)*(g0));
    printf("Altura aproximada en pies: %.0f\n", h);
    printf("Altura aproximada en kilometros: %.2f\n", km);
    printf("Altura aproximada en metros: %.2f\n", m);
    return 0;
}