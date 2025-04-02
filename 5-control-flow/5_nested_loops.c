#include <stdio.h>

int main(int argc, char const *argv[])
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Weekday day = Monday; day <= Sunday; ++day)
    {
        if (day == Wednesday)
        {
            continue;
        }
            
        printf("%d\n", day);
    }
    return 0;
}
