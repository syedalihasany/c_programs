#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define M 4

char    *store_array(char*);
int     sort_array(char*,char*);
int     print_array(char*, char*);
int     print_array_test(char*, char*);

int main(){

    char a[M][N];                           // unsorted array                  
    int days = 0;

    char *ptr_start = &a[0][0];
    char *ptr       = &a[0][0];

    char ch;


    while(days < M){

        printf("\nEnter the reminder\t%d : ",ptr);                       // test point
        ptr = store_array(ptr);
        days += 1;
        if(*ptr == '0')
            break; 
    
    }
    printf("\nPointer start:\t%d\nPointer End:\t%d\n",ptr_start,ptr);   // test point
    sort_array(ptr_start,ptr); 
    print_array(ptr_start,ptr);

    print_array_test(ptr_start,ptr);

    return 0;

}

char  *store_array(char *ptr){
    char        *ptr_a = ptr;
    int         i = 0;
    char ch;                /*******Dangerous stuff added***BUT SOLVED PROBLEM******/
    
    printf("\nStarting Pointer:\t%d\n",ptr);                        // test point Probably storing newline character!!!!

    while(i < N-1 ){                                    //while(i < N || ch != '\n')
        ch       = getchar();
        if (ch == '\n')
            continue;                       /*******Dangerous stuff added****BUT SOLVED PROBLEM******/
        *ptr      = ch;
        ptr++;
        i++;
    }

    *ptr = '\0';
    printf("\nNull pointer:\t%d\n",ptr);                        // test point

    printf("\nString Stored:\t %s\n",ptr_a);                    // test point 

    return ptr_a + N;                                   // returns pointer to next row in the character array
}

int sort_array(char *ptr_a, char *ptr_a_end){
    int n = ptr_a_end - ptr_a;                               //int n = ptr_a_end - ptr_a + 1;
    n = n / N;
    printf("\n%d\n%d\n",N,n);                                         // test point
    char temp[N];
    char *ptr_temp = temp; 
    char *ptr_a_next;
    char *ptr_start = ptr_a;

    

    for(int j = 0; j < n - 1 ; j++ ){           // n - 1 ??????
        printf("\n-------------------------------Outter loop %d -------\n",j);      // test point

        for(int i = 0; i < n - 1 ; i++){
            ptr_a = ptr_start + (i*N);   /****************PROBLEM WAS HERE------->> ptr_a += ptr_a + (i*N) *************/
            ptr_a_next = ptr_a + N;
            if(     strcmp(ptr_a, ptr_a_next ) > 0        ){  /*********SOME PROBLEM HERE?********/
                    strcpy(ptr_temp,ptr_a);
                    strcpy(ptr_a,ptr_a_next);
                    strcpy(ptr_a_next, ptr_temp);
                
            }
            printf("\n---------Inner Loop %d -----\n",i);                                    // test point
            printf("\nPointer A:\t%d\nPointer Next:\t%d\n",ptr_a,ptr_a_next);               // test point
        }
        
        ptr_a = ptr_start;                  //probably superfluous after correction in above line

    }

    return 0;
} 

int print_array(char *ptr_a, char *ptr_end){
    int n = ptr_end - ptr_a;                //int n = ptr_end - ptr_a + 1;
    char *ptr_start = ptr_a;
    n = n/N;


    for(int i = 0; i < n ; i++){
        ptr_a = ptr_start + (i*N);  /****************PROBLEM WAS HERE------->> ptr_a += ptr_a + (i*N) *************/
        printf("\nPrinting string at Pointer:\t%d\n",ptr_a);                            // test point : printf("%s \n",ptr_a);
    }


    return 0;

}

int print_array_test(char *ptr_a, char *ptr_end){
    int n = ptr_end - ptr_a;                //int n = ptr_end - ptr_a + 1;
    char *ptr_start = ptr_a;
    n = n/N;


    for(int i = 0; i < n ; i++){
        ptr_a = ptr_start + (i*N);  /****************PROBLEM WAS HERE------->> ptr_a += ptr_a + (i*N) *************/
        printf("%s \n",ptr_a);
    }


    return 0;

}