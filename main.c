#include <stdio.h>
#include <math.h>
#include <string.h>

void good(int answer) {
    printf("Good your answer is %.2f\n", (float)answer);
}
void bad(float result) {
    printf("Bad the right answer is %.2f\n", result);
}
void sum(int num1, int num2) {
    int answer;
    int result = num1 + num2;
    printf("%d  + %d = ", num1, num2);
    scanf("%d", &answer);
    (answer == result) ? good(answer) : bad(result);
}
void sub(int num1, int num2) {
    int answer;
    int result = num1 - num2;
    printf("%d  - %d = ", num1, num2);
    scanf("%d", &answer);
    (answer == result) ? good(answer) : bad(result);

}
void mul(int num1, int num2) {
    int answer;
    int result = num1 * num2;
    printf("%d  * %d = ", num1, num2);
    scanf("%d", &answer);
    (answer == result) ? good(answer) : bad(result);
}
void div(int num1, int num2) {
    int answer;
    float result = num1 / num2;
    printf("%d  / %d = ", num1, num2);
    scanf("%d", &answer);
    (answer == result) ? good(answer) : bad(result);
}
int main() {
    char again[] = "yes";
    while (strcmp(again, "yes") == 0)
    {
        int a, b, numbers[2];
        printf("Enter two numbers: ");
        scanf("%d %d", &a,&b );
        (a < b) ? (numbers[0] = b, numbers[1] = a) : (numbers[0] = a, numbers[1] = b);
        sum(numbers[0], numbers[1]);
        sub(numbers[0], numbers[1]);
        mul(numbers[0], numbers[1]);
        div(numbers[0], numbers[1]);
        printf("Would you paly again: ");
        scanf("%s", &again);
    }
    return 0;
}