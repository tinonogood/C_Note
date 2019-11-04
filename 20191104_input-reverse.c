#include <stdio.h>
int main(void)
{
    char *str = NULL;
    int ch;
    size_t size = 0, len =0;
    
    while ((ch=getchar()) != EOF && ch != '\n'){
        if (len+1 >= size){
            size = size * 2 +1;
            str = realloc(str, sizeof(char)*size);
        }
        str[len++] = ch;
    }


    if (str != NULL){
        str[len] = '\0';
//        printf("%s\n",str);
// reverse string
        free(str);
    }
    return 0;
}
