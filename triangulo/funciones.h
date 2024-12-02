#ifndef FUNCIONES_H
#define FUNCIONES_H
typedef struct {
    float x;
    float y;
} Punto;
float ingresarComponente(char comp, int i);
void distancia(float *a, float *b, float *c, float p[3][2]);
float calcularPerimetro(float a, float b, float c);
float calcularArea(float p[3][2]);

#endif
