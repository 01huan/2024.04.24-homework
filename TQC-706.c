#include <stdio.h>
int main() {
    FILE *read = fopen("read.txt", "r");
    int arr[10], num, len=0, temp;
    while (fscanf(read, "%d", &num) != EOF) {
        arr[len] = num;
        len++;
    }
    for (int i=0; i<4; i++) {
        scanf("%d", &arr[len]);
        len++;
    }
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    FILE *write = fopen("write.txt", "w");
    for (int i=0; i<len; i++) {
        fprintf(write, "%d\n", arr[i]);
        printf("%d\n", arr[i]);
    }
    fclose(read);
    fclose(write);
}