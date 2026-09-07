#include <stdio.h>

int main(void)
{
    int height, width, length, volume;
    float weight;
    

    height=12;
    width=10;
    length=8;
    volume= height*width*length;
    weight = (volume+165)/166;

    printf("dimension : %dx%dx%d\n",height , width , length);
    printf("volume : %d \n", volume);
    printf("dimension weight : %.2f\n",weight);



    return 0;

}
