#include <stdio.h>
#include <stdbool.h>

bool estPremier(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0, num = 2;
    while (count < 25) {
        if (estPremier(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    return 0;
}
