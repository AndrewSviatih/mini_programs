#include <stdio.h>

int main () {

    FILE * fin = fopen("text_in.txt", "r");
    FILE * fout = fopen("text_out.txt", "w");

    int len_arr;

    fscanf(fin, "%d", &len_arr);
    int arr[len_arr];

    for (int i = 0; i < len_arr; i++) {
        fscanf(fin, "%d", &arr[i]);
    }

    fclose(fin);

    printf("%d\n", len_arr);

    for (int i = 0; i < len_arr; i++) {
        printf("%d ", arr[i]);
        fprintf(fout, "%d ", arr[i]);
    }

    fclose(fout);

}
