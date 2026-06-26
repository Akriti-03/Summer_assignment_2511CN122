#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai 4.Kolkata\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("2. 2 + 2 = ?\n");
    printf("1.3 2.4 3.5 4.6\n");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("Your Score = %d", score);

    return 0;
}