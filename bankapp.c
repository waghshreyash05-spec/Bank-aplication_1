#include <stdio.h>

struct Bank {
    int accNo;
    char name[30];
    float balance;
};

int main() {

    struct Bank user;
    int choice;
    float amount;

    printf("=== BANK SYSTEM ===\n");

    printf("Enter Account Number: ");
    scanf("%d", &user.accNo);

    printf("Enter Name: ");
    scanf("%s", user.name);

    printf("Enter Balance: ");
    scanf("%f", &user.balance);

    do {

        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.Check Balance");
        printf("\n4.Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                user.balance = user.balance + amount;

                printf("Amount Deposited\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount > user.balance) {
                    printf("Insufficient Balance\n");
                } else {
                    user.balance = user.balance - amount;
                    printf("Withdrawal Successful\n");
                }
                break;

            case 3:
                printf("\nAccount No: %d", user.accNo);
                printf("\nName: %s", user.name);
                printf("\nBalance: %.2f\n", user.balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}
