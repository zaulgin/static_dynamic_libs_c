#include "data_io.h"

#include <stdio.h>

int input(double *data, int n) {
    for (int i = 0; i < n; i++) {
        if (scanf("%lf", &data[i]) != 1) {
            return 1;
        }
    }
    return 0;
}

void output(double *data, int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%.2lf", data[i]);
        } else {
            printf("%.2lf ", data[i]);
        }
    }
}
