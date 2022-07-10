#include <stdio.h>

int is_simple(int a);
int find_max(int a);

int main() {
    int a;
    printf("Please,enter intenger:\n");
    scanf("%d", &a);
    printf("%d\n", find_max(a));
    return 0;
}

int find_max(int a) {
    int max = 2;
    if (a == (int)a) {
        for (int i = 2; i <= a; ++i) {  // для каждого числа ,вплоть до вводимого "a", проверка на пустоту
            if (is_simple(i) != 0) {
                int copy = a;  // копия введенного a
                /* 16-21 строки проверка делится ли введенное число на простое число */
                if (copy > 0) {
                        while (copy > 0) {
                            copy -= i;
                        }
                } else {
                    while (copy < 0) {
                        copy +=i;
                        }
                    }
                if (copy == 0 && i > max) {
                    max = i;
                }
            }
        }
    return max;
    } else {
        printf("n/a\n");
    }
    return 0;
}

int is_simple(int a) {  // проверка на то , простое ли число?
    int counter = 1;  // счетчик количества делителей(так как в цикле идем не до a)
    for (int i = 1; i <= a/2; i++) {  // a/2 потому что число не может
    // поделиться на число большее своей половины
    int copy = a;
    if (copy > 0) {  // для положительных чисел
        while (copy > 0) {
            copy -= i;
            if (copy == 0) {  // на тот случай если делится
                // без остатка(здесь деление заменено на разность в 33 строке)
                counter++;
            }
        }
    } else {  // для отрицательных
        while (copy < 0) {
            copy += i;
            if (copy == 0) {
                counter++;
            }
        }
    }
    }
    if (counter == 2) {  // если делитей 2,вернуть 1(true)
        return 1;
    } else {
        return 0;
    }
}
