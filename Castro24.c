#include <stdio.h>

int main() {
    int stored_pin = 4321;
    int entered_pin;
    float balance = 10000.0;
    float withdrawal;

    printf("Enter your PIN: ");
    scanf("%d", &entered_pin);

    if (entered_pin != stored_pin) {
        printf("Transaction Denied: Incorrect PIN.\n");
        return 1; 
    }

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);

    if (withdrawal <= 0) {
        printf("Transaction Denied: Withdrawal amount must be positive.\n");
    } 
    else if (withdrawal > balance) {
        printf("Transaction Denied: Withdrawal exceeds your balance (Php %.2f).\n", balance);
    } 
    else if ((int)withdrawal % 100 != 0) {
        printf("Transaction Denied: Amount must be divisible by 100.\n");
    } 
    else {
        balance -= withdrawal; 
        
        printf("\n--- Transaction Successful ---\n");
        printf("Amount Withdrawn: Php %.2f\n", withdrawal);
        printf("Remaining Balance: Php %.2f\n", balance);
    }

    return 0;
}