#include <stdio.h>

int max;                            // global variable to hold maximum value  
int min;                            // global variable to hold minimum value
int max_min(const int [], int);     // prototype of the function that gets us the min
                                    // and max values in the array
                
int main() {
    
    int b[] = {0,1,5,10,2,3,-7};    // initiailising an array of integers
    int n = 7;                      // length of the array
     
    max_min(b,n);
    
    printf("max is : %d \n", max);
    printf("min is : %d \n", min);
    
    return 0;
}

int max_min(const int a[], int n){  // const used to avoid modification of address
                                    // of the 1st array element
                                    
    int *p;                         // pointer to hold address of the array elements
    max = *a;                       // assigning max,min first value at array index 0
    min = *a;                       // a is the name of the array and it also 
    p = a;                          // holds the address of the 1st array element
                                    // assigned to p as we will perform arithmetic
                                    // operations on this pointer and we do not want 
                                    // a to be changed by accident
    while (p < a + n){              // logic to get min and max values
        if (*p > max)
            max = *p;
        if (*p < min)
            min = *p;
            
        p++;                        // move to next address
    }
    printf("%d %d \n", a,p);        // printing 1st and last(7th) address
    printf("%d\n", p-a);            // difference shows total number of elements
    return 0;
}
