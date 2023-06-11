#include <stdio.h>

void calculateDenominations(int amount) {
    int thousandCount = amount / 1000;
    amount %= 1000;

    int fiveHundredCount = amount / 500;
    amount %= 500;

    int hundredCount = amount / 100;
    amount %= 100;

    int fiftyCount = amount / 50;
    amount %= 50;

    int twentyCount = amount / 20;
    amount %= 20;

    int tenCount = amount / 10;
    amount %= 10;

    int fiveCount = amount / 5;
    amount %= 5;

    int oneCount = amount / 1;

    printf("1000 THB: %d\n", thousandCount);
    printf("500 THB: %d\n", fiveHundredCount);
    printf("100 THB: %d\n", hundredCount);
    printf("50 THB: %d\n", fiftyCount);
    printf("20 THB: %d\n", twentyCount);
    printf("10 THB: %d\n", tenCount);
    printf("5 THB: %d\n", fiveCount);
    printf("1 THB: %d\n", oneCount);
}

int main() {
    int money, cost;

    printf("Enter the amount of money: ");
    scanf("%d", &money);

    printf("Enter the cost: ");
    scanf("%d", &cost);

    int difference = money - cost;

    printf("Difference: %d THB\n", difference);

    calculateDenominations(difference);

    return 0;
}
//https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Untitled%20Diagram.drawio#R5VpNk5s4EP01rto9jAtJfB4Te3Zz2K2kalKV3aMGZJsNRqwQtsmvjzDCwAgDiT1oqJyMGgm1Wu91t9ReoNX%2B9CfDye5vGpBoAY3gtEDrBYQAGp74KSR5KXEAKgVbFgayUy14Cr8RKTSkNAsDkrY6ckojHiZtoU%2FjmPi8JcOM0WO724ZG7VkTvCWK4MnHkSr9EgZ8V0pdy6jlH0i43VUzA0O%2B2eOqsxSkOxzQY0OEHhdoxSjl5dP%2BtCJRYbzKLuW4P668vSjGSMzHDPj62f7%2FaB%2B%2F2cfsiT%2BvD37I%2FAdT6sbzasEkEOuXTcr4jm5pjKPHWvqe0SwOSPFVQ7TqPn9RmgghEML%2FCOe53EyccSpEO76P5NtyzmKiq0uRopRmzCc9%2BkMJCcy2hPf0QxeDC6QSuiec5WIcIxHm4aGtB5aQ2V761VYVD9KwP2BkqeQBR5mcKRUKc9X0USRgXZj4uAs5eUrwee1HwawuAx4I4%2BTUb0J1yXIA8iQsJS9d2TzWIK967Br4to1XspE1cyCikUC0bwSiHPqJhkLDy26ayGrt5mU7q0%2BUeslRL7bqosbP7x5SEB7GSVYouEDvCmdIY1IscwFXZ1%2BdquAX7jEpHoXxcRSRiG4Z3os9SggLhXqEvXz3qX4xxJdNeCJVbLkXf0y4bNscOCqFgGtNyKEqZs6WRPZIEjk6vbmtYD0INxtyXm2B93WF94dOnLftPYGjN%2B0lvOIdmkh1nOWkWAWKZSbAqrAZy%2F8pxovFyua%2F8nPnxvrUauWydUeMOyMxDuAkkcKcOFKYUMu%2Bn0JebrvrQdku9v3BWBrQlIJ674tG3mg0Qo0uOJjGPeDwjjGcNzokxTan19FiWe0sEbleExSD%2FW2jt7vj9XUXD6W%2BdwWgo7hvcdjzM2FFsiYx3YexsCeN098qr%2B6T368nK4z6JE2HHfkz9r9uzzD%2BmPEojO%2BYiUAPLQFsb5OnOnjooqUzqYdXjz0kDlT2azz0WIbmUw9CM8%2FYgDk2nGnN2So1G1hcQDsSCr8PwoN43PKzXWy8L1AXP6fFT%2BmrhHmzFMfBSpi9zvDwvmoKxaABDKMMDOVHhbD93aGpzh9SRI1JrHLagXk055q20%2BYXMDv8kNlBMPPVCDb3Cy4wOl%2F0tBJMDavdqD%2BLntlLyZ0IUzJ2I5b7QWwhI%2F2ktabhbP80b4yysCMkTkzZuV8FAm8kZeGtR7zbKOv9TEy8kGw3gmBgsqA4I4LZ2gnm6SDYG7h6qSpxw9WiK1s6UbnIUIhZUo7GpJ9ubxHvXWesTryjV8O7%2B6vivSqYDwaiWy%2BXbsM7GBOIqtRuw%2FOBpG6anG4%2BEcfUfwqzZ57SQTiWSa5WJqlXbj%2BS0nESD6Rz02Rz86EWgtqp5fyqwc0dS0m9yZx7EyWLq4z%2BcDdJtJsRIztq29My0tRyp99gpGfAJifB0oBggJfn1ssqZ100tRZ1ybQqp3ZXS%2B9IcDQ2e9VaWUBq8soEnjMW91ADTEMNt13qvxRnm9QAU57ETC1%2F%2BrgjJs2xNwhlwUkXKE31BuFKkbv09WqBWzdWu7z4naAqmvWfrst%2FFdR%2FXUeP3wE%3D