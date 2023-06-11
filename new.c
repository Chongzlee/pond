#include <stdio.h>

int main() {

    int money;
    int paid;
    int change;

    printf("Your money: 1000 THB\n");

    do {
        printf("\nEnter amount paid: ");
        scanf("%d", &paid);

        if (paid >= 0 && paid <= 890) { // Within range
            change = 1000 - paid;
            printf("\n-------------------------------");
            printf("\nChange money total: %d Baht", change);
            printf("\n-------------------------------");

            if (change >= 1000) {
                printf("\n1000 Baht = %d ", change / 1000);
                change = change % 1000;
            }

            if (change >= 500) {
                printf("\n500 Baht = %d", change / 500);
                change = change % 500;
            }

            if (change >= 100) {
                printf("\n100 Baht = %d", change / 100);
                change = change % 100;
            }

            if (change >= 50) {
                printf("\n50 Baht = %d", change / 50);
                change = change % 50;
            }

            if (change >= 20) {
                printf("\n20 Baht = %d", change / 20);
                change = change % 20;
            }

            if (change >= 10) {
                printf("\n10 Baht = %d", change / 10);
                change = change % 10;
            }

            if (change >= 5) {
                printf("\n5 Baht = %d", change / 5);
                change = change % 5;
            }

            if (change >= 2) {
                printf("\n2 Baht = %d", change / 2);
                change = change % 2;
            }

            if (change >= 1) {
                printf("\n1 Baht = %d", change);
            }

            break;
        } else if (paid > 890) { // Greater than 890
            printf("\nre input\n");
        }
    } while (1);

    return 0;
}
