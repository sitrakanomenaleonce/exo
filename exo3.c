#include <stdio.h>

int main() 
{
    int n;
    printf("Taille de la matrice carrée: ");     //QUE DU MATRICE CARREE
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    printf("Entrer la matrice A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Entrer la matrice B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
          {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];      //REGLE DE LIGNE COLONNE
         }

    printf("Produit C = A * B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", C[i][j]);
            printf("\n");
    }
    return 0;
}
