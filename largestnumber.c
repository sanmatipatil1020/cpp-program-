#include <stdio.h>

int largestnum(int a, int b, int c); 

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);  
    
    int largestnumber = largestnum(a, b, c);
    printf("Largest number = %d\n", largestnumber);
    
    return 0;
}

int largestnum(int a, int b, int c) { 
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}
//
