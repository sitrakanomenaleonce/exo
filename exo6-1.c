#include <stdio.h>

int main() {
    long long U[31];
    U[0] = 3;
    U[1] = -4;
    long long somme = U[0] + U[1];

    for (int n = 2; n < 30; n++)     //somme des 30premiers termes
      {
        U[n] = 2 * U[n-1] + 3 * U[n-2];
        somme += U[n];
    }

    printf("Somme des 30 premiers termes = %lld\n", somme);
    return 0;
}
