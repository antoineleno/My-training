#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    
    int cents = atoi(argv[1]);

    
    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    
    int quarters, dimes, nickels, twos, ones;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickels = cents / 5;
    cents %= 5;

    twos = cents / 2;
    cents %= 2;

    ones = cents;

    
    printf("%d\n", quarters + dimes + nickels + twos + ones);

    return 0;
}
