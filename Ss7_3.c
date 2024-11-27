#include <stdio.h>
int main() {
    int arr[5] = {11, 22, 33, 44, 55};
    int a = 0;
    printf("Cac so chan trong mang: \n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            a = 1;
        }
    }
    if (!a) {
        printf("Mang khong chua so chan.\n");
    }
    return 0;
}

