#include <stdio.h>

int main() {
    int option;

    printf("Welcome to the Telecom Call Service!\n");
    printf("Please select an option:\n");
    printf("1. Check Balance\n");
    printf("2. Recharge Account\n");
    printf("3. Activate Call Waiting\n");
    printf("4. Deactivate Call Waiting\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Your current balance is Rs. XXXX.\n");
            break;
        case 2:
            printf("Please enter the recharge amount: ");
            // Code to recharge the account
            break;
        case 3:
            printf("Call waiting has been activated for your number.\n");
            break;
        case 4:
            printf("Call waiting has been deactivated for your number.\n");
            break;
        case 5:
            printf("Thank you for using the Telecom Call Service. Goodbye!\n");
            break;
        default:
            printf("Invalid option selected. Please try again.\n");
            break;
    }

    return 0;
}