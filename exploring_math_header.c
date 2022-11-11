#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <math.h>

#ifndef PI
    #define PI 3.14159265358979323846
#endif

int main() {
    // Write C code here
    printf("%d \n",FLT_ROUNDS);
    printf("%d \n",FLT_MIN_10_EXP);
    printf("%d \n",FLT_MAX_10_EXP);
    printf("%f \n",FLT_MAX);
    printf("%d \n",DECIMAL_DIG);
    printf("%d \n",INT_MAX);
    printf("%f \n",cos(PI/4));
    
    

    return 0;
}