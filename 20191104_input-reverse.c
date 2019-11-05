#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Enter a number: (ex: 11 22 33)");
    
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

        int returnArr[len],length = 0, c, bytesread;
        char* str1 = str;
        
        printf("%s\n",str1);
        
        while (sscanf(str1, "%d%n", &c, &bytesread) > 0) {
            returnArr[length++] = c;
            str1 += bytesread;
        }
        
        for ( int i = length-1; i >= 0; i-- ) {
            printf("%d ", returnArr[i]);
        }
        

        free(str);
    }
    return 0;
}
