#include <stdio.h>

struct Item {
    int id, qty;
    char name[30];
};

int main() {
    struct Item p[100];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Item %d ID: ", i + 1);
        scanf("%d", &p[i].id);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Quantity: ");
        scanf("%d", &p[i].qty);
    }

    printf("\nInventory List\n");
    for (i = 0; i < n; i++) {
        printf("%d %s %d\n", p[i].id,
               p[i].name, p[i].qty);
    }

    return 0;
}