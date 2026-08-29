#include <stdio.h>

int main() {
    int choice;
    int a, b;

    printf("===== C Programming Practice =====\n");
    printf("1. Add Two Numbers\n");
    printf("2. Check Even or Odd\n");
    printf("3. Check Positive or Negative\n");
    printf("4. Find Largest of Two Numbers\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Sum = %d\n", a + b);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &a);

            if (a % 2 == 0)
                printf("%d is Even\n", a);
            else
                printf("%d is Odd\n", a);
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &a);

            if (a > 0)
                printf("%d is Positive\n", a);
            else if (a < 0)
                printf("%d is Negative\n", a);
            else
                printf("The number is Zero\n");
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            if (a > b)
                printf("%d is larger\n", a);
            else if (b > a)
                printf("%d is larger\n", b);
            else
                printf("Both numbers are equal\n");
            break;

        case 5:
            printf("Thank you!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}