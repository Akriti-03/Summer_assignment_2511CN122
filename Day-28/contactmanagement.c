#include <stdio.h>

struct Contact {
    char name[50];
    long long mobile;
};

int main() {
    struct Contact c;

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Mobile Number: ");
    scanf("%lld", &c.mobile);

    printf("\nContact Details\n");
    printf("Name: %s\n", c.name);
    printf("Mobile: %lld\n", c.mobile);

    return 0;
}