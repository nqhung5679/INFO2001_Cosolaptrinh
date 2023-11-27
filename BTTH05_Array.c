#include<stdio.h>
#include<stdlib.h>

void bubbleshort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[10];
    printf("Nhap phan tu:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Thu tu khi chua dung bubbleshort :\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }


    bubbleshort(a, 10);

    printf("\nThu tu khi dung bubbleshort: (tu lon den be)\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}