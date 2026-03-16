#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Entrez une chaine: ");
    scanf("%s", str);

    printf("Nombre de caracteres = %zu\n", strlen(str));
    return 0;
}
