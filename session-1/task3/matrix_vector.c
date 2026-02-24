
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;

    a = calloc(n, sizeof(float *));
    for (int i=0; i<n; ++i) {
        a[i] = calloc(n,sizeof(float));
    }

    b = calloc(n, sizeof(float));
    c = calloc(n, sizeof(float));

    for(int i=0; i<n; ++i){
        b[i] = 1.0f;
        for(int j=0; j<n; ++j){
            a[i][j] = 1.0f;
        }
    }

    for(int k = 0; k<n; ++k){
        c[k] = 0.0f;
        for (int j=0; j<n; ++j){
            c[k] += a[k][j] * b[j];
        }
    }

    for (int i=0; i<n; ++i){
        printf("c[%d] = %.1f\n", i, c[i]); 
    }

    for(int i=0; i<n, ++i){
        free(a[i]);
    }

    free(a);
    free(b);
    free(c);
    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    
    return 0;
 }
