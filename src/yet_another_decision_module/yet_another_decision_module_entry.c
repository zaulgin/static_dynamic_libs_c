#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "decision.h"

int main() {
    double *data;
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("n/a");
        return 1;
    }
    data = malloc(n * sizeof(double));

    int checkInput = input(data, n);

    if (checkInput) {
        free(data);
        printf("n/a");
        return 1;
    }

    if (make_decision(data, n))
        printf("YES");
    else
        printf("NO");

    free(data);
    return 0;
}
