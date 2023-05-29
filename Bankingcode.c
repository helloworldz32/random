BANKING CODE:


#include <stdio.h>
#include <stdlib.h>
int main() {
int pin = 1234; // The correct PIN
int input_pin; // The PIN entered by the user
printf("Please enter your PIN: ");
scanf("%d", &input_pin);
if (input_pin != pin) {
printf("Invalid PIN. Please try again.\n");
} else {
printf("PIN accepted. Welcome!\n");
// Other code for successful login goes here
while(1){
int choice;
printf("\nATM System\n");
printf("-----------\n");
printf("1. Check the account Balance\n");
printf("2. Withdraw the money\n");
printf("3. Deposit the money\n");
printf("4. Receipt not printed\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
float balance = 100000.00; // initial account balance
if(choice==1){
printf("Your balance is: %.2f\n", balance);
}
if(choice==2){
float amount;
printf("Enter amount to withdraw: ");
scanf("%f", &amount);
if (amount > balance) {
printf("Insufficient funds.\n");
// return;
}
if(amount>50000){
printf("Transaction limit upto 50000\n");
printf("Please enter less than 50000\n");
}
balance -= amount;
printf("New balance: %.2f\n", balance);
}
if(choice==3){
float amount;
printf("Enter amount to deposit: ");
scanf("%f", &amount);
balance += amount;
printf("New balance: %.2f\n", balance);
}
if(choice==4){
printf("Wait for a minute or contact the desk");
}
if(choice==5){
printf("Thankyou");
}
}
return 0;
}
}
