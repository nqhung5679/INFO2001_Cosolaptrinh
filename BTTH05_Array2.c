#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int timKiemNhiPhan(int arr[], int right,int x){
    int left=0,mid;
    while (left<=right)
    {
        mid=(left+right)/2;
        if (arr[mid]==x){
            return mid;
        }
        if (arr[mid]>x){
            right=mid-1;
        }
        else {
            left=mid+1;
        }
    }
    return -1;
}
int timKiemTuyenTinh(int arr[],int x){
    int i,n;
    for (i=0;i<n;i++){
        if (arr[i]==x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int i, a, j, n;
    printf("Nhap gia tri so luong phan tu trong mang:");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap gia tri cho cac phan tu trong mang:\n");
    for (i = 0; i < n; i++) {
        printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nMang vua nhap:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    bubbleSort(arr, n);
    printf("\n");
    printf("Mang sau khi sap xep\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    int x, kq;
    printf("\nNhap gia tri phan tu trong mang ban muon tim: ");
    scanf("%d", &x);
    a = timKiemNhiPhan(arr, n - 1, x);
    printf("\nTim kiem mang theo kieu nhi phan\n");
    if (a != -1) {
        printf("Tim thay %d tai vi tri thu %d\n", x, a);
    } else {
        printf("Khong tim thay %d trong mang\n", x);
    }
    printf("\nTim kiem mang theo kieu tuyen tinh\n");
    kq = timKiemTuyenTinh(arr, x);
    if (kq != -1) {
        printf("Tim thay %d tai vi tri thu %d\n", x, kq);
    } else {
        printf("Khong tim thay %d trong mang\n", x);
    }
    return 0;
}
