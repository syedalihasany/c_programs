#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <errno.h>

#ifndef PI
    #define PI 3.14159265358979323846
#endif

/*
 * use the following command in the command line to compile using C99
 * 
 * >> gcc -std=c99 -o outputfile sourcefile.c
 * 
 */

int main(int argc,char* argv[]) {
    // Write C code here
    printf("%d \n",FLT_ROUNDS);
    printf("%d \n",FLT_MIN_10_EXP);
    printf("%d \n",FLT_MAX_10_EXP);
    printf("%f \n",FLT_MAX);
    printf("%d \n",DECIMAL_DIG);
    printf("%d \n",INT_MAX);
    printf("%f \n",cos(PI/4));
    printf("%f \n",exp(3));
    printf("%f \n",log(20.085537));
    printf("%f \n",INFINITY);
    printf("%f \n",8.7/INFINITY);
    printf("Error :%d \n",errno);
    
    
    //printing command line arguments
    for (int i = 0; i < argc ; i++){
        printf("argument %d is %s \n",i,argv[i]);
    }
    

    return 0;
}