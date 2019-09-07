#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

    //Algoritmo de Fatoração por Cholesky
	// Trabalho da Disciplina de Cálculo Numérico
 
int main(){

	int k , i , j, n;

    printf ("digite a ordem da matriz: ");
    scanf ("%d", &n);
 printf("\n");
 
    //preenchendo a matriz n x n
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
               printf ("digite o elemento %dX%d: ",i+1,j+1);
               scanf ("%f",&A[i][j]);
                printf("\n");
        }
    }


	for ( k = 0 ; k < n ; k ++ )
	{
		soma = 0 ;

		for ( j = 0 ; j < k ; j ++ )
		{
			soma = soma +  G[k][j] * G[k][j] ;
		}

		r = A[k][k] - soma ;
		G[k][k] = sqrt(r) ;

		for ( i = k  ; i < n ; i ++ )
		{
			soma = 0 ;

			for (j = 0 ; j < k ; j ++ )
			{
				soma = soma + G[i][j] * G[k][j] ;
			}

			G[i][k] = ( A[i][k] - soma) / G[k][k] ;
		}
	}

	for ( i = 0 ; i < n ; i ++ )
	{
		for ( j = 0 ; j < n ; j ++ )
		{   printf("\n");
			if ( j == 2 )
				printf("G[%d][%d]:%.2f \n", i+1 , j+1 , G[i][j]);
			else
				printf("G[%d][%d]:%.2f \n", i+1 , j+1 , G[i][j]);
		}
	}
	
	
	
	clock_t Ticks[2];
    Ticks[0] = clock();
    //O código a ter seu tempo de execução medido ficaria neste ponto.
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    getchar();

	return 0;

}
