#include <stdio.h>
// constant definition
#define CAPACITY  7.5
#define RATE_OF_FLOW  50.0

// prototype of time_calculation function
void time_calculation(float L, float W, float D);

int main()
{
    int pool_size;
    float L, W, D;
    do
    {
        // Menu displaying
        printf("_____POOL SIZE_____\n");
        printf("    1-SMALL\n");
        printf("    2-LARGE\n");
        printf("which size do you want to explore?: ");
        scanf("%d", &pool_size);
        if (pool_size != 1 && pool_size != 2)
        {
            printf("\nThis option is not available\n");
        }
    } while (pool_size != 1 && pool_size != 2);
    

    if (pool_size == 1)
    {
        L = 20;
        W = 12;
        D = 4;
        // call of the function time_calculation
        time_calculation(L, W, D);
    }
    else
    {
        L = 30;
        W = 20;
        D = 10;
        // call of the function time_calculation
        time_calculation(L, W, D);
    }
    return 0;
}

/**
 * time_calculation - calculates the time needed to fill up a precise pool
 * @L: length of the pool
 * @W: width of the pool
 * @D: depth of the pool
*/
void time_calculation(float L, float W, float D)
{

    float  pool_volume, volume_galon;
    int hours, min, total_min;

    pool_volume = L * W * D; // volume of the pool
    volume_galon = CAPACITY * pool_volume;  //corresponding galon for the pool volume
    total_min = volume_galon / RATE_OF_FLOW; // total minutes to fill up the pool
    hours = total_min / 60; // number of hours
    min = total_min % 60; // number of minutes
    //display the number of hours and minutes to fill up the pool
    printf("It will take %d hours %d minutes to fill up the pool\n", hours, min);
}