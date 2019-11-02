# inclube "20191102_call-lib.h"

int main(){
    int a = 1;
    int b = 2;
    printf("This is called from lib: %d + %d\n",a,b);
    printSum(a,b);
    return 0;
}
