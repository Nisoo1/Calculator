
#include <stdio.h>
#include <math.h>


int main(void) {
    double a, b, d;
    char op;

    printf("=============== CALCULATOR ===============\n"
            "\tOperator list : \n"
            "\tAddition : +\n"
            "\tSubtraction : -\n"
            "\tMultiplication : *\n"
            "\tDivision : /\n"
            "\tSquare : 2\n"
            "\tCube : 3\n"
            "\tPower : ^\n"
            "\tSquare root : s\n"
            "\tClear : c\n"
            "\tModulo : %%\n"
            "\tEnd : #\n"
            "==========================================\n");



    printf("First number : ");
    scanf("%lf", &a);

    printf("Operator : ");
    scanf(" %c", &op);


   while (op != '#') {
       switch (op) {
            case 's' :
                d = sqrt(a);
                break;

            case '%' :
                int x, y;
                printf("Second number : ");
                scanf("%lf", &b);
                x = (int)a;
                y = (int)b;
                d = x % y;
                break;

            case 'a' :
            d = fabs(a);
                break;

            case '2' :
            d = a * a;
                break;

            case 'c' :
            printf("New first number : ");
            scanf("%lf", &a);
            printf("Operator : ");
            scanf(" %c", &op);
                continue;

            case '3' :
            d = a * a * a;
                break;

            case '*' :
            printf("Second number : ");
            scanf("%lf", &b);
            d = a * b;
                break;

            case '+' :
            printf("Second number : ");
            scanf("%lf", &b);
            d = a + b;
                break;

            case '-' :
            printf("Second number : ");
            scanf("%lf", &b);
            d = a - b;
                break;

            case '/' :
            printf("Second number : ");
            scanf("%lf", &b);
            if (b == 0) {
                printf("Division by zero, undefined.\n");
                return 1;
        }
            d = a / b;
                break;

            case '^' :
            printf("Second number : ");
            scanf("%lf", &b);
            d = pow(a, b);
            break;

        default:
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