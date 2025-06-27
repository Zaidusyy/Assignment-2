#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int**)a)[0] - (*(int**)b)[0];
}

int** merge(int** intervals, int n, int* colSize, int* retSize, int** retColSizes) {
    qsort(intervals, n, sizeof(int*), cmp);

    int** res = malloc(n * sizeof(int*));
    *retColSizes = malloc(n * sizeof(int));
    int k = 0;

    res[0] = malloc(2 * sizeof(int));
    res[0][0] = intervals[0][0];
    res[0][1] = intervals[0][1];
    (*retColSizes)[0] = 2;

    for (int i = 1; i < n; i++) {
        int* last = res[k];
        int* curr = intervals[i];

        if (curr[0] <= last[1]) {
            if (curr[1] > last[1])
                last[1] = curr[1];
        } else {
            k++;
            res[k] = malloc(2 * sizeof(int));
            res[k][0] = curr[0];
            res[k][1] = curr[1];
            (*retColSizes)[k] = 2;
        }
    }

    *retSize = k + 1;
    return res;
}
