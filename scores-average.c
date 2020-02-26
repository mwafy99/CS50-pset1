#include <stdio.h>
#include <cs50.h>

float avg(int n,float scores[]);

int main(void)
{
    int n = get_int("number of scores: ");  // get number of scores from user

    float scores[n];

    for (int i = 0 ; i < n ; i++)     // get scores from user
    {
        scores[i] = get_float("score%i: ",i+1);
    }

    printf("Average: %.1f\n",avg(n,scores));

}

float avg(int n,float scores[])
{
    float sum = 0;
    for (int i = 0 ; i < n ; i++)
    {
        sum += scores[i];
    }

    return sum / n;
}


