#include <stdio.h>
#include "esfera_utils.h"

int main ()
{
    float raio, volume, area;
    scanf ("%f", &raio);

    area = Calcula_Area(raio);
    volume = Calcula_Volume(raio);

    printf ("AREA: %.2f\n", area);
    printf ("VOLUME: %.2f", volume);

    return 0;
}

