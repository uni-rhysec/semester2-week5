/*
 Compute length of string
*/

#include <stdio.h>

int main( void ) {

    int length = 1;
    char str[500] = {'H','e','l','l','o'};

    for (char *ch; *ch != '\0'; ++ch)  {
        length += 1;
    }
    
    printf("%d\n",length);

    return 0;
}