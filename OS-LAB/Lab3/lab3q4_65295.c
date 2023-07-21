#include <stdio.h>

int main() {
    int a, b, c;
    int sum = 0;
    int count = 0;

    while (1) {
        printf("Enter a positive integer (0 to quit): ");
        scanf("%d", &a);
        if (a <= 0) {
            break;
        }
        printf("Enter two more positive integers: ");
        scanf("%d %d", &b, &c);

        int summation = a + b + c;
        printf("Summation = %d\n", summation);

        sum += summation;
        count += 3; 
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average = %.2lf\n", average);
    } else {
        printf("No numbers were entered.\n");
    }
    return 0;
}
