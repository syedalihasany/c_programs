#include "some_functions.h"
/*
*This program justifies the text in the file quote.txt and outputs the resulting 
*justfied text in output.txt
*if you are using PowerShell then use the following command on the Shell for redirection:
* >>> Get-Content quote.txt | .\main.exe > output.txt
*
*To compile the source code use the following command:
* >>> gcc -o main justify.c some_functions.c some_functions.h
*
*/

char* address_word;

int count = 0;
int main(){

    while(*address_word != '#' ){
        address_word = read_word();
        print_word(address_word);
        print_space();
        count++;
        if (count >= 6){
            print_newline();
            count = 0;
        }  
    }






    return 0;
}