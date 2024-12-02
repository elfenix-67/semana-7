#include <stdio.h>
#include "funciones.h"

int main() {
    float p[3][2];  
    float a, b, c;  
    float perimetro, area;
    for (int i = 0; i < 3; i++) {
        p[i][0] = ingresarComponente('X', i + 1);
        p[i][1] = ingresarComponente('Y', i + 1);
    }
    distancia(&a, &b, &c, p);
    perimetro = calcularPerimetro(a, b, c);
    area = calcularArea(p);
    printf("El perimetro del triangulo es: %.2f\n", perimetro);
    printf("El area del triangulo es: %.2f\n", area);

    return 0;
}
