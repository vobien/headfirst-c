#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];

    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if ((latitude > 45) && (latitude < 49))
        {
            if ((longitude < -72) && (longitude > -77))
                {
                    printf("%f,%f,%s\n", latitude, longitude, info);
                }
        }
    }

    return 0;
}