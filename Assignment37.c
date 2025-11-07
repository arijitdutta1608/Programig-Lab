#include <stdio.h>

int main() {
    int num;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nChoose an operation to perform:\n");
    printf("a. Check if the number is a Buzz number\n");
    printf("b. Check if the number is Even or Odd\n");
    printf("c. Check if the number is Positive or Negative\n");
    printf("Enter your choice (a/b/c): ");
    scanf(" %c", &choice); // note the space before %c to ignore newline

    switch (choice) {
        case 'a':
        case 'A':
            // A Buzz number is divisible by 7 or ends with 7
            if (num % 7 == 0 || num % 10 == 7)
                printf("%d is a Buzz number.\n", num);
            else
                printf("%d is not a Buzz number.\n", num);
            break;

        case 'b':
        case 'B':
            if (num % 2 == 0)
                printf("%d is an Even number.\n", num);
            else
                printf("%d is an Odd number.\n", num);
            break;

        case 'c':
        case 'C':
            if (num > 0)
                printf("%d is Positive.\n", num);
            else if (num < 0)
                printf("%d is Negative.\n", num);
            else
                printf("The number is Zero.\n");
            break;

        default:
            printf("Invalid choice! Please enter a, b, or c.\n");
    }

    return 0;
}
