#include <iostream>
#include <stdio.h>

int main()
{
	float A[3][3];

	int i, j, max;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter [%d][%d]: ", i + 1, j + 1);
            scanf_s("%f", &A[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %.f ", A[i][j]);
        }
        printf("\n");
    }

    max = abs(A[0][0]);
    for (i = 0; i < 3; i++) {
        for (j = 1; j < 3; j++) {
            if (max < abs(A[i][j])) {
                max = abs(A[i][j]);
            }
        }
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %.2f ", A[i][j] / max);
        }
        printf("\n");
    }
}