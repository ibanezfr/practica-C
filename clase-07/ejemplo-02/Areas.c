// Diseñar una aplicación que ofrezca, a través de un menú, la posibilidad de
// calcular áreas de figuras geométricas específicas. Se deben codificar
// funciones que calculen las áreas de: círculo, cuadrado, rectángulo, triángulo
// y trapecio. Las fórmulas pueden buscarse en libros de geometría de nivel
// secundario (polimodal).

#include <stdio.h>
#include <math.h>

double area_circulo(float r) {
    return pow(r, 2) * 3.14159265358979323846;
}

double area_cuadrado(float l) {
    return l * l;
}

double area_rectangulo(float b, float a) {
    return b * a;
}

void area_triangulo(float b, float a, float *area) {
    *area = (b * a) / 2;
}

double area_trapecio(float b1, float b2, float a) {
    return ((b1 + b2) * a) / 2;
}

int main() {
    float area, radio, lado, base, alt, b1, b2;
    int op = 0;

    while (op != 6) {
        printf("1 - Círculo\n");
        printf("2 - Cuadrado\n");
        printf("3 - Rectángulo\n");
        printf("4 - Triángulo\n");
        printf("5 - Trapecio\n");
        printf("6 - Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Introduzca el valor del radio > ");
                scanf("%f", &radio);
                area = area_circulo(radio);
                printf(" El área del círculo es --> %.2f\n", area);
                break;
            case 2:
                printf("Introduzca el valor del lado > ");
                scanf("%f", &lado);
                area = area_cuadrado(lado);
                printf(" El área del cuadrado es --> %.2f\n", area);
                break;
            case 3:
                printf("Introduzca el valor de la base > ");
                scanf("%f", &base);
                printf("Introduzca el valor de la altura > ");
                scanf("%f", &alt);
                area = area_rectangulo(base, alt);
                printf(" El área del rectángulo es --> %.2f\n", area);
                break;
            case 4:
                printf("Introduzca el valor de la base > ");
                scanf("%f", &base);
                printf("Introduzca el valor de la altura > ");
                scanf("%f", &alt);
                area_triangulo(base, alt, &area);
                printf(" El área del triángulo es --> %.2f\n", area);
                break;
            case 5:
                printf("Introduzca el valor de la base 1 > ");
                scanf("%f", &b1);
                printf("Introduzca el valor de la base 2 > ");
                scanf("%f", &b2);
                printf("Introduzca el valor de la altura > ");
                scanf("%f", &alt);
                area = area_trapecio(b1, b2, alt);
                printf(" El área del trapecio es --> %.2f\n", area);
                break;
            case 6:
                printf("Gracias por utilizar nuestro programa\n");
                break;
            default:
                printf("Opción inválida\n");
                break;
        }
    }

    return 0;
}
