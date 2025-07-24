#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // print a pyramid of that height
    for (int i = 1; i < height + 1; i++)
    {
        // dots
        int dots = height - i;
        for (int d = 0; d < dots; d++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
