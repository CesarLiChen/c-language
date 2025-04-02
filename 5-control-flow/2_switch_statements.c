#include <stdio.h>

int main(int argc, char const *argv[])
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Tuesday;

    switch (today)
    {
    case Sunday:
        printf("Today is Sun.\n");
        break;
    case Monday:
        printf("Today is Mon.\n");
        break;
    case Tuesday:
        printf("Today is Tuesday\n");
        break;
    default:
        printf("whatever\n");
        break;
    }

    return 0;
}
