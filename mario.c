#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int get_positive_int(string prompt);
void get_spaces(int num);
void get_hashes(int num);
void get_gaps(void);

int main(void)
{
    int height = get_positive_int("Height: ");  
    int spaces = height - 1;
    int hashes = 1;
     
    for (int i = 0; i < height; i++)
    {
        get_spaces(spaces);
        get_hashes(hashes);
        get_gaps();
        get_hashes(hashes);
        printf("\n");
        spaces--;
        hashes++;
    }
}

// Check the conditions for a valid prompt
// 0. Check if prompt is not less or equal than 0
// 1. Check if prompt is not bigger than 8
// 2. Check if there are no letters or words
// 3. check if input is null
int get_positive_int(string prompt)
{
    // char to make use of the isdigit function from ctype library
    char n;
    do
    {
        n = get_int("%s", prompt);
    }
    while (n <= 0 || n > 8 || isdigit(n));
    return n;
}

void get_gaps(void)
{
    printf("  ");
}

void get_spaces(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf(" ");
    }
}

void get_hashes(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("#");
    }
}
