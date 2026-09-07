#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR 5.0F/9.0F

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT)*SCALE_FACTOR;

    printf("In celsius it will be : %.2f \n", celsius);
   // scanf("%f",&celsius);




    

    return 0;
    
}