#include <stdio.h>
#define NMAX 10

void input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);
int true_or_false = 1;

int main() {
    int n, data[NMAX];
    input(data, &n);
    if (true_or_false == 1) {
    squaring(data, n);
    output(data, n);
}
else {
    printf("n/a");
}
    return 0;
}

void input(int *a, int *n) {
    char auxillaury_c;
    int gavno;
    if (scanf("%d%c", n, &auxillaury_c) == 2 && auxillaury_c == '\n' && *n < 11) {
        for (int i = 0;i < *n;i++)  {
            if (scanf("%d%c", &gavno, &auxillaury_c) == 2 &&
                (auxillaury_c == '\n' || auxillaury_c == ' ')) {
                a[i] = gavno;
            } else {
                true_or_false = 0;
            }
        }
    } else {
         true_or_false = 0;
    }
}

void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void squaring(int *a, int n) {
    for (int i = 0; i < n ; i++) {
        a[i] *= a[i];
    }
}
