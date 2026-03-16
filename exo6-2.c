#include <stdio.h>

int main() {
    long long U[71];
    U[0] = 3;
    U[1] = -4;

    for (int n = 2; n <= 70; n++) 
    {
        U[n] = 2 * U[n-1] + 3 * U[n-2];
    }

    printf("U70 = %lld \n", U[70]);
    return 0;
}
