#include <stdio.h>
#include <stdlib.h>

int main () {

    float g1 , g2 , result;
    printf ("enter your first grade (value 0 - 10)\n");
    scanf ("%f" , &g1);
    printf ("enter your second grade\n");
    scanf ("%f" , &g2);
    result = (g1 + g2) / 2;

    if (result >= 7){
        printf ("approved");
    } else{
        printf ("failed");
    }


    return 0;


}
