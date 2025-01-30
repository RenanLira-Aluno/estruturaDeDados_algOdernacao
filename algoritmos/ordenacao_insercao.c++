int array[] = {10,6,5,1,3};
void ordenacao_insercao(int v[], int tam){
    int j,i,temp;
    for(i = 1; i < tam; i++){
        temp = v[i];
        j = i - 1;
        while (v[j] > temp && j >= 0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j+1] = temp;
    }
}