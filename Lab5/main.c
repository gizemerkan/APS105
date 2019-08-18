#include <stdio.h>

int main(int argc, char **argv)
{
	char matrixA[100][100];
	char matrixB[100][100];
	//int matrixC[100][100];
	int i=0, j=0;

	
	printf("Enter matrix A:\n");
	for(i=0;i<100;i++){
		for(j=0; j<100; j++){
		matrixA[i][j]=getchar();
		putchar(matrixA[i][j]);
		if(getchar()==';'){
			putchar('\n');
		}
		}
	}
	
	
	printf("Enter matrix B:\n");
	for(i=0;i<100;i++){
		for(j=0; j<100; j++){
		matrixB[i][j]=getchar();
		putchar(matrixB[i][j]);
		}
	}
	
	/*matrix multiplication
	int i, j, k;
    for (i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            for(k = 0; k < 100; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("%d\n",matrixC[i][j]);
        } 
    }
	*/
	
	
	//if(dimensions of matrixA!=dimensions of matrixB){
		//printf("Error: inner matrix dimentions do not agree!\n");
		//break;
	return 0;
}
