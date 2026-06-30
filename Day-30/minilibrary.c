#include <stdio.h>

struct Book {
    int id;
    char name[30];
};

int main() {
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\nLibrary Records\n");
    for (i = 0; i < n; i++) {
        printf("%d %s\n", b[i].id, b[i].name);
    }

    return 0;
}