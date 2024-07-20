#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "data_process.h"

int main() {
    double *data;
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("n/a");
        return 1;
    }
    // Don`t forget to allocate memory !
    data = malloc(n * sizeof(double));

    int checkInput = input(data, n);

    if (checkInput) {
        free(data);
        printf("n/a");
        return 1;
    }

    if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");

    free(data);
    return 0;
}
