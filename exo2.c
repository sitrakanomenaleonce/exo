#include <stdio.h>

int main() {
    int n;
    printf("Taille des vecteurs: ");
    scanf("%d", &n);

    int A[n], B[n],S[n];
    printf("Entrez les éléments du vecteur A:\n");
    
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Entrez les éléments du vecteur B:\n");
    
    for (int i = 0; i < n; i++) 
        scanf("%d", &B[i]);

    int produitScalaire = 0;
    for (int i = 0; i < n; i++) 
    {
        produitScalaire += A[i] * B[i];
        S[i]= A[i] + B[i];
        
    }

    printf("\nProduit scalaire de deux vecteurs = %d \n", produitScalaire);
    printf("Contenu du somme de deux vecteurs : ");
    for (i = 0; i < n; i++) {
        printf("%d ", S[i]);
    }
    return 0;
}

