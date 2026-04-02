#include "esfera_utils.h"

#define PI 3.14159

float calcula_volume (float R)
{
    float volume;
    volume = (4 * PI * (R * R * R)) / 3.0;
    return volume;
}

float calcula_area (float R)
{ 
    float area;
    area = 4 * PI * (R * R);
    return area;
}