#include<stdio.h>
#include<hfcal.h>

void display_calories(float weight,float distance,float coeff)
{
  printf("weight: %f pounds \n",weight);
  printf("distance: %f miles \n",distance);
  printf("calories: %f \n",coeff * weight * distance);
  /*
  printf("weight: %3.2f pounds \n",weight);
  printf("distance: %3.2f miles \n",distance);
  printf("calories: %4.2f \n",coeff * weight * distance);
  */
}
