void bolha(int quant, int* v) {
    int i, j;
    int troca;
    for(i=quant-1; i>=1; i--){
        troca = 0;
        for (j=0; j<i; j++){
            if (v[j] > v[j+1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j+1] = temp;
                troca = 1;
            }
        }
        if (troca==0){
            break;
        }
    }
}
