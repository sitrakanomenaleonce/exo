#include <stdio.h>

int main() {
    int n;
    printf("Taille des vecteurs: ");
    scanf("%d", &n);

    int A[n], B[n];
    printf("Entrez les éléments du vecteur A:\n");
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("Entrez les éléments du vecteur B:\n");
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);

    int produitScalaire = 0;
    printf("Somme des vecteurs: ");
    for (int i = 0; i < n; i++) 
    {
        produitScalaire += A[i] * B[i];
        printf("%d ", A[i] + B[i]);
    }

    printf("\nProduit scalaire = %d\n", produitScalaire);
    return 0;
}

