#include <stdio.h>

int print_array(char *, int);
                        
int main(){
    char date1[8] = "June 14";
    printf(date1);              //printf accepts a pointer as its argument
    printf("\n");
    print_array(date1,8);       //printing the string literal as a char array
}

int print_array(char *p, int n){
    for(int i =0 ; i< n ; i++){
        printf("%c \n",*p);
        p++;
    }
    
    return 0;
}
