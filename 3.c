#include <math.h>
#include <stdio.h>

double f, x, h = 0.1;

void
fr()
{
    printf("x        f(x)\n");
    printf("--------------\n");

    for(x = 0.0; x < 1.6f; x + 0.1f)
    {
        if(x >= 0 && x < 0.7f)
        {
            f = 1 / (1 + 25 * pow(x, 2));
        }

        if(x >= 0.6f && x < 1.7f)
        {
            f = (x + 2 * pow(x, 2)) * pow(sin(x), 2);
        }

        printf("%f        %f\n", x, f);

        f = 0;
        x = x + h;
    }
    x = 0;
}

void
dw()
{
    printf("x        f(x)\n");
    printf("--------------\n");

    do
    {
        if(x >= 0 && x <= 0.6)
        {
            f = 1 / (1 + 25 * pow(x, 2));
        }
        else
        {
            f = (x + 2 * pow(x, 2)) * pow(sin(x), 2);
        }

        printf("%f        %f\n", x, f);

        f = 0;
        x = x + h;
    } while(x < 1.6f);
    x = 0;
}

int
main()
{
    printf("Введите шаг \n");
    scanf("%lf", &h);
    printf("for: \n");
    fr();
    // printf("\n");printf("\n");
    printf("do while: \n");
    dw();

    return 0;
}
