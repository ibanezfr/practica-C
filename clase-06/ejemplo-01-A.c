#include <stdio.h>

int main() {
   float Total;
   float Nota;
   float Prom;
   int i;

   Total = 0.0;
   Nota = 0.0;
   Prom = 0.0;

   for (i = 1; i <= 40; i++) {
      printf("Ingrese la nota del alumno %d > ", i);
      scanf("%f", &Nota);
      Total += Nota;
   }

   Prom = (Total / 40 * 100) / 100;

   printf("Promedio: %.2f\n", Prom);

   return 0;
}