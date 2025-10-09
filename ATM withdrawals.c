/*
name:Vincent mutua 
Reg:CT100/G/26230/25
des:ATM withdrawals
*/
#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance = balance - withdraw; 

        if (balance > 0) {
            printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
        } 
        else if (balance == 0) {
            printf("Your account balance is now zero.\n");
        } 
        else {
            printf("You have overdrawn your account! Balance: %.2f\n", balance);
        }
    }

    printf("\nTransaction ended. Thank you for using our ATM.\n");

    return 0;
}
