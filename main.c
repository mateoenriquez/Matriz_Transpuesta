#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n, m;
    srand(time(NULL)); 

    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);

    int matriz[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j]=rand()%10;
        }
        
    }
    
        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        
    }
    

    return 0;
}