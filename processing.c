#include "processing.h"

int processing(char path[], char symbol, char alease, char result[])
{
    char c = 255;
    int i = 0, count = 0;

    if( (symbol >= 'A' && symbol <= 'Z')
        || (symbol >= 'a' && symbol <= 'z')
        || symbol == '\\'
        || symbol == '/'){

        printf("unexpected symbol %c eror!", symbol);

        return 2;
    }

    while(c != '\0'){
        c = path[i];
        if( c == symbol ){
            c = alease;
            count++;
        }
        result[i] = c;
        i++;
    }
    if( !count )
        return 3;

    return 0;
}

