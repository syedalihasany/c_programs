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
