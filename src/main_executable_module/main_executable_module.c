#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "../data_libs/data_stat.h"
#include "../data_module/data_process.h"
#include "../yet_another_decision_module/decision.h"
#include "sort.h"

int main() {
    double *data;
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        printf("n/a");
        return 1;
    }
    data = malloc(n * sizeof(double));

    printf("LOAD DATA...\n");
    int checkInput = input(data, n);

    if (checkInput) {
        free(data);
        printf("n/a");
        return 1;
    }

    printf("RAW DATA:\n\t");
    output(data, n);

    printf("\nNORMALIZED DATA:\n\t");
    normalization(data, n);
    output(data, n);

    printf("\nSORTED NORMALIZED DATA:\n\t");
    sort(data, n);
    output(data, n);

    printf("\nFINAL DECISION:\n\t");
    if (make_decision(data, n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    free(data);
    return 0;
}
