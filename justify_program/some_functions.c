#include "some_functions.h"

char word[LEN];

char* read_word(){
    
    scanf("%s", word);
    if (strlen(word) >= 20){
        word[LEN-1] = '\0';
        word[LEN-2] = '*';
    }

    return word;
}
int print_word(char* address){
    printf("%s",address);

    return 0;
}
int print_space(){
    printf(" ");

    return 0;
}
int print_newline(){
    printf("\n");

    return 0;
}

int check_for_hash(char* address){
    int my_bool = 1;
    if (*address == '#' )
        my_bool = 0;


    return my_bool;
}
