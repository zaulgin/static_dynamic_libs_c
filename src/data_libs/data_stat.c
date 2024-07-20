#include "data_stat.h"

#include <math.h>

double max(double *data, int n) {
    double max = data[0];
    for (int i = 1; i < n; i++) {
        if (max < data[i]) {
            max = data[i];
        }
    }
    return max;
}

double min(double *data, int n) {
    double min = data[0];
    for (int i = 1; i < n; i++) {
        if (min > data[i]) {
            min = data[i];
        }
    }
    return min;
}

double mean(double *data, int n) {
    double res;
    double sum = 0;
    for (int i = 1; i < n; i++) {
        sum += data[i];
    }
    res = sum / n;
    return res;
}

double variance(double *data, int n) {
    double meanVar = mean(data, n);
    double temp = 0;
    for (int i = 0; i < n; i++) {
        temp += pow((data[i] - meanVar), 2);
    }
    return (temp / n);
}
