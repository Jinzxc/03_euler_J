#include <stdio.h>

// Find the sum of all the multiples of 3 or 5 below 1000.
void prob1() {
    short i;
    int sum = 0;

    for(i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("Answer for #1: %d\n", sum);
}

// What is the smallest positive number that is 
// evenly divisible by all of the numbers from 1 to 20?
void prob5() {
    char i;
    int does = 21;
    int status = 1;

    while(status) {
        for(i = 2; i <= 20; i++) {
            if(does % i != 0) {
                does++;
                break;
            } else if(i == 20) {
                status = 0;
            }
        }
    }

    printf("Answer for #5: %d\n", does);
    // Done in a super inefficient way
}

// Find the difference between the sum of the squares 
// of the first one hundred natural numbers and the square of the sum.
void prob6() {
    int sumSquare = 0;
    int sum = 0;
    int i;

    for(i = 1; i < 101; i++) {
        sumSquare += i * i;
        sum += i;
    }

    printf("Answer for #6: %d\n", sum * sum - sumSquare);

}

int main()
{
    prob1();
    prob5();
    prob6();
}