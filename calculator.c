#include<stdio.h>
int main(){
    int a, b;
    char operand;
    printf("Simple calculator program. . .\n\a");
    printf("Enter two integer number: ");
    scanf("%d %d", &a, &b);
    printf("Enter operand('*,+,-,/'): ");
    scanf(" %c", &operand);//bosluk scanf new line demek
    printf("operand = %c\n", operand);
    if (operand == '+'){
        int result = a + b;
        printf("%d + %d = %d", a, b, result);
    return 0;
    }
    else if (operand == '-'){
        int result = a - b;
        printf("%d - %d = %d", a, b, result);
    return 0;
    }
    else if (operand == '*'){
        int result = a * b;
        printf("%d x %d = %d", a, b, result);
    return 0;
    }
    else if (operand == '/'){
        if (b == 0)
        {
            printf("0 detected opinion rejected\a");
            return 1;
        }
        
        int result = a / b;
        printf("%d / %d = %d", a, b, result);
    return 0;
    }
}