#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int age;
    int number;
};

int main() {
    struct student s;
    int i;

    printf("Nhap thong tin sinh vien\n");

    printf("Nhap ten sinh vien: ");
    scanf("%s", s.name);

    printf("Nhap tuoi: ");
    scanf("%d", &s.age);

    printf("Nhap ma sinh vien: ");
    scanf("%d", &s.number);

    printf("1 la luu, 2 la cap nhat\n");
    scanf("%d", &i);

    while (i == 1 || i == 2) {
        switch (i) {
            case 1:
                printf("Thong tin sinh vien:\n");
                printf("Ten: %s\n", s.name);
                printf("Tuoi: %d\n", s.age);
                printf("Ma sinh vien: %d\n", s.number);
                break;
            case 2:
                printf("Nhap thong tin moi:\n");
                printf("Nhap ten sinh vien:\n ");
                scanf("%s", s.name);
                printf("Nhap tuoi: \n");
                scanf("%d", &s.age);
                printf("Nhap ma sinh vien:\n ");
                scanf("%d", &s.number);
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }

        printf("1 la luu, 2 la cap nhat\n");
        scanf("%d", &i);
    }

    return 0;
}