//do while

#include <stdio.h>

int main() {
    int i, n = 5, j = 0;
    printf("Enter a number: ");
    scanf("%d", &i);
    
    do {
        if (i % 2 == 0) {
            printf("%d is an even number.\n", i);
        } else {
            printf("%d is an odd number.\n", i);
        }
        i++;
        j++;
    } while (i > 0 && j < n);

    return 0;
}

//while do

#include <stdio.h>

int main() {
    int i, n = 5, j = 1;
    printf("Enter a number: ");
    scanf("%d", &i);
    
    while (i > 0 && j < n) {
        if (i % 2 == 0) {
            printf("%d is an even number.\n", i);
        } else {
            printf("%d is an odd number.\n", i);
        }
        i++;
        j++;
    }

    return 0;
}

//if else

#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            printf("Number is an even number: %d\n", i);
        } else {
            printf("Number is an odd number: %d\n", i);
        }
    }
    
    return 0;
}


//switch case

#include <stdio.h>

int main() {
    int a, b, c, choice;
    printf("1. Add\n2. Sub\n3. Mul\n4. Div\nEnter Your choice: ");
    scanf("%d", &choice);
    printf("Enter values for a and b: ");
    scanf("%d%d", &a, &b);

    switch (choice) {
        case 1:
            c = a + b;
            printf("The sum of a & b is: %d\n", c);
            break;
        case 2:
            c = a - b;
            printf("The difference of a & b is: %d\n", c);
            break;
        case 3:
            c = a * b;
            printf("The product of a & b is: %d\n", c);
            break;
        case 4:
            if (b != 0) {
                c = a / b;
                printf("The division of a & b is: %d\n", c);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Enter a valid option.\n");
            break;
    }

    return 0;
}
