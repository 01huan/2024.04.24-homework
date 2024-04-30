#include <stdio.h>
int main() {
    int arr[3][2], am=0;
    for (int i=0; i<3; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    for (int i=0; i<3; i++) {
        int temp = arr[i][0];
        if ((0 <= temp) && (temp <= 11)) {
            am++;
            if (temp == 0) {
                printf("AM 12:%d\n", arr[i][1]);
            } else {
                printf("AM %d:%d\n", temp, arr[i][1]);
            }
        } else if ((12 <= temp) && (temp <= 23)) {
            if (temp == 12) {
                printf("PM 12:%d\n", arr[i][1]);
            } else {
                printf("PM %d:%d\n", temp-12, arr[i][1]);
            }
        }
    } printf("%d", am);
}