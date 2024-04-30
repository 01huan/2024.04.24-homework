#include <stdio.h>
int main() {
    int n, tA, tB;
    scanf("%d", &n);
    int A[n], B[n];
    for (int i=0; i<n; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (A[i]*B[i] < A[j]*B[j]) {
                tA = A[i];
                A[i] = A[j];
                A[j] = tA;
                tB = B[i];
                B[i] = B[j];
                B[j] = tB;
            }
        }
    }
    for (int i=0; i<n; i++) {
        printf("%dx%d=%d\n", A[i], B[i], A[i]*B[i]);
    }
}