#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d %s %.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details\n");
    display(s, n);

    return 0;
}