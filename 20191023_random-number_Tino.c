#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand( time(0) );
    int i;
    i = rand();
    printf("%d",i);
return 0;
}
