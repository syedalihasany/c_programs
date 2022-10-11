#include <stdio.h>

                        
int print_array(int, int m, int a[][*]);   //column number is required therefore the * in the prototype parameter
int sum_array(int, int m, int a[][*]);
                                    
int main() {
    int n = 2, m = 7, sum = 0;
    int b[2][7]  =  {  {0,1,5,10,2,3,-7}, {7,8,4,3,11,3,12}  };  // initailising the 2D array
    
    print_array(n,m,b);
    sum = sum_array(n,m,b);
    
    printf("\nThe sum of the array is %d \n",sum);
    return 0;
}

int print_array(int n, int m, int e[][m]){ 
                                    
    for(int k = 0; k<n; k++){
        for(int j  = 0; j<m ;j++){
            printf("%d  ",e[k][j]);
        }
        printf("\n");
    }
}

int sum_array(int n, int m, int b[][m]){
    int *a =  b;                       // assigning address of array b to a
    int sum = 0;

/* exploiting the fact that arrays are stored row wise in memory */    
    while (a <= &b[n-1][m-1]){      
        sum += *a;
        a++;
    }
   
   return sum;
}
