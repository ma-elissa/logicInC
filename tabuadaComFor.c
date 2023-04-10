#include <stdio.h>
    int main() {
        int number;
        printf("Enter the number you would like to know the table up to number 10: ");
        scanf("%d", &number);
    

        for(int multiplier = 1; multiplier <= 10; multiplier++) {
            int result = number * multiplier;
            printf("%d * %d = %d\n", number, multiplier, result );
        }
        return 0;
    }
