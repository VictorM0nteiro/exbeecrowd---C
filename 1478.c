#include <stdio.h>

int main ()
{

	int tamanho, linha, coluna;

	while (1)
	{

		scanf("%d", &tamanho);
		int matriz[tamanho][tamanho];

		if (tamanho == 0)
			return 0;

		for(linha = 0; linha < tamanho; linha++)
			for(coluna = 0; coluna < tamanho; coluna++)
			{
				if (linha == coluna)
					matriz[linha][coluna] = 1;
				if (linha < coluna)
					matriz[linha][coluna] = coluna - linha + 1;
				if (linha > coluna)
					matriz[linha][coluna] = linha - coluna + 1;
			}


		//Imprime a matriz;
		for (linha = 0; linha < tamanho; linha++)
		{
			for (coluna = 0; coluna < tamanho; coluna++)
			{
				if (coluna == 0)
					printf("%3d", matriz[linha][coluna]);
				else
					printf(" %3d", matriz[linha][coluna]);

			}

			printf("\n");
		}

		printf("\n");

	}
    }
