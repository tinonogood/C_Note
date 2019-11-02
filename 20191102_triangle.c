#include <stdio.h>

int main() {
        
    int n;
    printf("Enter a Num: ");
    scanf ("%d",&n);
    printf("%d\n",n);

    int row = n /2 +1;
    // printf("row: %d\n",row);
    int column  = row * 2 - 1;
    // printf("column: %d\n",column);
    
    char str_line[column];
    for(int i =0; i<column; i++){
        str_line[i] = ' ';
    };
    int middle = n /2;
    str_line[middle] = '*';    
    
    for(int i =0; i<row; i++){
        str_line[middle+i] = '*';
        str_line[middle-i] = '*';
        printf(str_line);
        printf("\n");
    };
    
    
	return 0;
}
