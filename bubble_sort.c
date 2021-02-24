#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[10];
    for(int i = 0; i < 10; i++){
         c[i] = (rand() % 99) + 1;
    }

    for(int i = 0; i < 10; i++){
        printf("%d\n", c[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int k = 0; k < 10; k++){
            if(c[k] > c[i]){
                int temp = c[i];
                c[i] = c[k];
                c[k] = temp;
            }
        }
    }
    printf("\n\n");
    for(int i = 0; i < 10; i++){
        printf("%d\n", c[i]);
    }
    return 0;
}
