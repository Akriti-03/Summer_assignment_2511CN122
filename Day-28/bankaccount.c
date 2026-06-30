#include <stdio.h>

int main() {
    float balance = 5000, amount;
    int choice;

    printf("1.Deposit\n2.Withdraw\n");
    scanf("%d", &choice);

    if (choice == 1) {
        scanf("%f", &amount);
        balance += amount;
    }
    else if (choice == 2) {
        scanf("%f", &amount);

        if (amount <= balance)
            balance -= amount;
    }

    printf("Balance = %.2f", balance);

    return 0;
}