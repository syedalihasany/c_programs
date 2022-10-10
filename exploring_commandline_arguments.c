#include <stdio.h>


int *f(int []);

int main(int argc, char *argv[]) {
    // Write C code here
    int digits[5] = {7,3,5,4,1};
    int *sz;
     
    //sz = sizeof(digits)/sizeof(digits[0]);
    sz = f(digits);
    printf("%d \n",*sz);
    
    for(int k = 0; k < argc; k++){
        printf("%s \n", argv[k]);
    }
    printf("%d \n",argc);
    printf("%s \n ", argv[argc-1]);
    return 0;
}

int *f(int b[]){
    return &b[2];
    //return sizeof(b)/sizeof(b[0]);
    
}
