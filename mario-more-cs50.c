// mario pyramid v2
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height < 1 || height > 8);

    for (int i = 0 ; i < height ; i++)
    {
        for(int space = height - i ; space > 1 ; space--)
        {
            printf(" ");
        }

        for(int hash = 0 ; hash < i + 1 ; hash++) {
            printf("#");
        }
        printf("  ");
        for(int j = 0 ; j < i + 1 ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
