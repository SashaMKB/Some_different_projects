#include <stdio.h>
#define NMAX 10
int true_or_false = 1;
int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max_v,
                   int min_v,
                   double mean_v,
                   double variance_v);

int main()
{
    int n, data[NMAX];
    input(data, &n);
    if (true_or_false == 1) {
    output(data, n);
    output_result(max(data, n),
                  min(data, n),
                  mean(data, n),
                  variance(data, n));
    } else {
        printf("n/a");
    }
    return 0;
}

int input(int *a, int *n) {
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
    return 0;
}

void output(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
}

int max(int *a, int n) {
    int max_v = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > max_v) {
            max_v = a[i];
        }
    }
return max_v;
}

int min(int *a,int n) {
    int min_v = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] < min_v) {
            min_v = a[i];
        }
    }
return min_v;
}

double mean(int *a, int n) {
    double mean_v;
    for (int i = 0; i < n; ++i) {
            mean_v += a[i];
        }
return (mean_v/n);
}

double variance(int *a, int n) {
    double variance_v;
    double aux_per = mean(a,n);
    for (int i = 0; i < n; ++i) {
        variance_v += ((a[i]-aux_per) * (a[i]-aux_per));
    }
return (variance_v/n);
}

void output_result(int max_v,
                   int min_v,
                   double mean_v,
                   double variance_v) {
                    printf("%d %d %.6f %.6f", max_v, min_v, mean_v, variance_v);
                   }