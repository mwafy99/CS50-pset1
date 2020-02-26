// mario pyramid v1
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");    // prompting user for input between 1 to 8
    }
    while (height < 1 || height > 8);

    for (int i = 0 ; i < height ; i++)
    {
        for (int space = height - i; space > 1 ; space--)
        {
            printf(" ");    // printing spaces on the same line
        }
        for (int j = 0 ; j < i + 1 ; j++)
        {
            printf("#");    // printing hashes
        }
        printf("\n");    // new row
    }
}

