#include "esfera_utils.h"

float calcula_volume (float R)
{
    float volume;
    volume = (float) 4/3;
    //printf("%.2f\n",volume);
    volume *= PI;
    //printf("%.2f\n",volume);
    volume = volume * R * R * R;
    //printf("%.2f\n",volume);
    return volume;
}

float calcula_area (float R)
{
    float area;
    area = 4 * PI * R * R;
    return area;
}