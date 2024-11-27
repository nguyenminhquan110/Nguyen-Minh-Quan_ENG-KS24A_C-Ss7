#include <stdio.h>
int main() {
    int arr[] = {15, 25, 35, 45, 55};
    int chieudai = sizeof(arr) / sizeof (arr[0]);
    printf("Cac phan tu trong mang: \n");
    for (int i = 0; i < chieudai; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nDo dai cua mang la: %d\n", chieudai);
    return 0;
}

