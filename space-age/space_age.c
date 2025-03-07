#include "space_age.h"
float orbital_period[]={0.2408467,0.61519726,1.0,1.8808158,11.862615,29.447498,84.016846,164.79132};
float age(planet_t planet, int64_t seconds)
{
    //float ages = seconds*orbital_period[planet];
    return (float)seconds/orbital_period[planet];
}