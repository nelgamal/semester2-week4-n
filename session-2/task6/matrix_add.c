
#include <stdio.h>
#include <stdlib.h>

// Modify this code so that 'n' is a command-line argument
// 
// You will need to dynamically allocate the matrices: mat1, mat2, sum
// You will need to modify the code so that matrix dimension is variable n
// remember to free dynamicaly allocated memory 

int main( int argc, char **argv ) {
    int n = atoi(argv[1]);
    int *mat1 = calloc(n * n, sizeof(int));
    int *mat2 = calloc(n * n, sizeof(int));
    int *sum  = calloc(n * n, sizeof(int));

    // set initial data
    for( int j=0; j<5; ++ j) {
        for( int k=0; k<n; ++k ) {
            mat1[j*n + k] = -2;
            mat2[j*n + k] = 3; 
        }
    }

    // compute sum
    for( int j=0; j<n; ++ j) {
        for( int k=0; k<n; ++k ) {
            sum[j*n + k] = mat1[j*n + k] + mat2[j*n + k]; 
        }
    }

    // print out the result
    for( int j=0; j<n; ++ j) {
        for( int k=0; k<n; ++k ) {
            printf("%d ",sum[j*n + k]);
        }
        printf("\n");
    }

    free(mat1);
    free(mat2);
    free(sum);

    return 0;
}