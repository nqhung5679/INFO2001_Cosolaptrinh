#include <stdio.h>
#include <stdlib.h>

void selectionsort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int i_min = i;
        int v_min = a[i];
        for (int j = i + 1; j < n; j++) {
            if (a[j] < v_min) {
                v_min = a[j];
                i_min = j;
            }
        }
        int temp = a[i];
        a[i] = a[i_min];
        a[i_min] = temp;
    }
}

int main() {
    int a[10];
    printf("Nhap phan tu:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Thu tu khi chua dung selection sort:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }


    selectionsort(a, 10);

    printf("\nThu tu khi dung selection sort:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}