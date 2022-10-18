#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define N 20
#define M 31

char    *store_array(char*);
int     sort_array(char*,char*);
int     print_array(char*, char*);

int main(){

    char a[M][N];                           // unsorted array                  
    int days = 1;

    char *ptr_start = &a[0][0];
    char *ptr       = &a[0][0];



    char ch;
    while(days <= M){
        printf("\nEnter the reminder: ");
        ch = getchar();
        if(ch == '0')
            break;
        else{
            ptr = store_array(ptr);
            days += 1;
        }
        printf("\n");
    }

    sort_array(ptr_start,ptr);
    print_array(ptr_start,ptr);

    return 0;

}

char  *store_array(char *ptr){
    char *ptr_a;
    ptr_a = ptr;
    int        i = 0;
    char       ch;
    
    ch = getchar();
    
    while(i <= N-1 || ch != '\n'){
        ch      = getchar();
        *ptr    = ch;
        ptr++;
        i++;
    }

    *ptr = '\0';

    return ptr_a + N;           // returns pointer to next row in the character array
}

int sort_array(char *ptr_a, char *ptr_a_end){
    int n = ptr_a_end - ptr_a + 1;
    n = n / N;
    char temp[N];
    char *ptr_temp; 
    ptr_temp = temp;
    char *ptr_a_next;

    strcpy(ptr_temp, ptr_a);

    for(int j = 0; j < n; j++ ){


        for(int i = 0; i < n; i++){
            ptr_a += (i*N);
            ptr_a_next = ptr_a + N;
            if(     strcmp(ptr_a, ptr_a_next ) > 0        ){
                    strcpy(ptr_temp,ptr_a);
                    strcpy(ptr_a,ptr_a_next);
                    strcpy(ptr_a_next, ptr_temp);
            }
            
        }
    

    }

    return 0;
} 

int print_array(char *ptr_a, char *ptr_end){
    int n = ptr_end - ptr_a + 1;
    n = n/N;


    for(int i = 0; i <= n ; i++){
        ptr_a += (i*N);
        printf("%s \n",ptr_a);
    }


    return 0;

}
