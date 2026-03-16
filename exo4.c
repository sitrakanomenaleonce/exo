#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Entrez une chaine: ");
    scanf("%s", str);
    printf("\n");
    int n = strlen(str);                  //LONGUEUR D'UNE CHAINE

    printf("l'inverse de cette chaine est:");
    for (int i = n - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
