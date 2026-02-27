/*
 Compute length of string
*/

#include <stdio.h>

int main( void ) {

    int length = 0;
    char str[500] = {'H','e','l','l','o','T','h','e','r','e'};

    for (char *ch = str; *ch != '\0'; ++ch)  {
        length += 1;
    }
    
    printf("%d\n",length);

    return 0;
}