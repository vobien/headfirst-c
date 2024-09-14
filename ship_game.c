#include <stdio.h>

void go_south_east(int* lat, int* lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() {
    // axis y
    int latitude = 32; 
    
    // // axis x
    // int longitude = -64;

    // go_south_east(&latitude, &longitude);
    // printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

    int* pLat = &latitude;
    printf("p: %p\n", pLat);
    printf("size: %i\n", sizeof(pLat));

    float d = 1.23;
    float* pFloat = &d;
    printf("p: %p\n", pFloat);
    printf("size: %i\n", sizeof(pFloat));

}