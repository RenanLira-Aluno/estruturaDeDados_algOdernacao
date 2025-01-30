#include <stdlib.h>

void ordenacao_intercalacao(int v[], int p, int m, int u) {
    int *w = (int *)malloc((u - p + 1) * sizeof(int));
    if (w == NULL) abort();

    int i = p, j = m + 1, k = 0;
    while (i <= m && j <= u) {
        if (v[i] < v[j]) {
            w[k++] = v[i++];
        } else {
            w[k++] = v[j++];
        }
    }
    
    while (i <= m) {
        w[k++] = v[i++];
    }
    
    while (j <= u) {
        w[k++] = v[j++];
    }
    
    for (k = 0; k <= u - p; k++) {
        v[p + k] = w[k];
    }
    
    free(w);
}

void merge_sort(int v[], int p, int u) {
    if (p < u) {
        int m = (p + u) / 2;
        merge_sort(v, p, m);
        merge_sort(v, m + 1, u);
        ordenacao_intercalacao(v, p, m, u);
    }
}
