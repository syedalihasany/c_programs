#include "basic_header.h"


struct dial_code {
    char* country;
    int code;
};



int main(){
    const struct dial_code subcontinent_codes[] = {
        {"Pakistan", 92}, {"India", 91}, {"Bangladesh", 880}, {"Myanmar", 95}, {"Nepal", 977}, {"SriLanka", 94}
    };

    int n = 0;
    n = sizeof(subcontinent_codes) / sizeof(subcontinent_codes[0]);
    for (int i = 0; i < n; i++)
        printf("Dial code for %s is %d \n", subcontinent_codes[i].country, subcontinent_codes[i].code );


    return 0;
}