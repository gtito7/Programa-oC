#include <stdio.h>
 
int main() {

/* 
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
*/

    // "Inception Effect"

    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= 10; j++) {

            printf("%d\t", i * j);
        }

        printf("\n");
    }

    return 0;
}