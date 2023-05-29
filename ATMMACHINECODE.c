ATM MACHINE CODE:


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct account {
int accnum;
char name[50];
float balance;
};
void create_account(struct account *acc) {
printf("Enter account number: ");
scanf("%d", &(acc->accnum));
printf("Enter name: ");
scanf("%s", acc->name);
printf("Enter balance: ");
scanf("%f", &(acc->balance));
}
void withdraw(struct account *acc) {
float amount;
printf("Enter amount to withdraw: ");
scanf("%f", &amount);
if (amount > acc->balance) {
printf("Insufficient funds.\n");
return;
}
if(amount>40000){
printf("Transaction limit crossed\n");
}
acc->balance -= amount;
printf("New balance: %.2f\n", acc->balance);
}
void deposit(struct account *acc) {
float amount;
printf("Enter amount to deposit: ");
scanf("%f", &amount);
acc->balance += amount;
printf("New balance: %.2f\n", acc->balance);
}
void view_account(struct account *acc) {
printf("Account number: %d\n", acc->accnum);
printf("Name: %s\n", acc->name);
printf("Balance: %.2f\n", acc->balance);
}
int main() {
int choice;
struct account acc;
while (1) {
printf("\nBanking Application\n");
printf("--------------------\n");
printf("1. Create Account\n");
printf("2. Withdraw\n");
  printf("3. Deposit\n");
printf("4. View Account Information\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
create_account(&acc);
break;
case 2:
withdraw(&acc);
break;
case 3:
deposit(&acc);
break;
case 4:
view_account(&acc);
break;
case 5:
exit(0);
default:
printf("Invalid choice.\n");
break;
}
}
return 0;
}
