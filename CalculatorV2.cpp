#include <stdio.h>
#include <math.h>


int main(void) {
    double a, b, d;
    char op;

    printf("=============== CALCULATOR ===============\n");
    printf("\tOperator list : \n");
    printf("\tAddition : +\n");
    printf("\tSubtraction : -\n");
    printf("\tMultiplication : *\n");
    printf("\tDivision : /\n");
    printf("\tSquare : 2\n");
    printf("\tCube : 3\n");
    printf("\tPower : ^\n");
    printf("\tSquare root : s\n");
    printf("\tClear : c\n");
    printf("\tModulo : %%\n");
    printf("\tEnd : #\n");
    printf("==========================================\n");



    printf("First number : ");
    scanf("%lf", &a);

    printf("Operator : ");
    scanf(" %c", &op);


    while (op != '#') {
        if (op == 's') {
        d = sqrt(a);
    }
    else if (op == '%') {
        int x, y;
        printf("Second number : ");
        scanf("%lf", &b);
        x = int(a);
        y = int(b);
        d = x % y;
    }
    else if (op == 'a') {
        d = fabs(a);
    }
    else if (op == '2') {
        d = a * a;
    }
    else if (op == 'c') {
        printf("New first number : ");
        scanf("%lf", &a);
        printf("Operator : ");
        scanf(" %c", &op);
        continue;
    }
    else if (op == '3') {
        d = a * a * a;
    }
    else if (op == '*') {
        printf("Second number : ");
        scanf("%lf", &b);
        d = a * b;
    }
    else if (op == '+') {
        printf("Second number : ");
        scanf("%lf", &b);
        d = a + b;
    }
    else if (op == '-') {
        printf("Second number : ");
        scanf("%lf", &b);
        d = a - b;
    }
    else if (op == '/') {
        printf("Second number : ");
        scanf("%lf", &b);
        if (b == 0) {
            printf("Division by zero, undefined.\n");
            return 1;
        }
        d = a / b;
    }
    else if (op == '^') {
        printf("Second number : ");
        scanf("%lf", &b);
        d = pow(a, b);
    }
    else {
        printf("Unknown operator.");
        return 1;
    }
    printf("%lf\n", d);
    printf("Operator : ");
    scanf(" %c", &op);
    a = d;
    }
    printf("END.");
}