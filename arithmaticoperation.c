#include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
float Div(int a, int b);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = Add(num1, num2);
    printf("sum = %d\n", sum);
    
    int sub = Sub(num1, num2);
    printf("sub = %d\n", sub);
    
    int mul = Mul(num1, num2);
    printf("mul = %d\n", mul);
    
    float div = Div(num1, num2);
    printf("div = %.2f\n", div); // Use %.2f for float output

    return 0; // Return 0 at the end of main
}

int Add(int a, int b) {
    int c= a + b;
    return c;
}

int Sub(int a, int b) {
    int c= a - b;
    return c;
}

int Mul(int a, int b) {
    int c= a * b;
    return c;
}

float Div(int a, int b) {
    if (b != 0) { 
        int c= a / b;
    return c;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
