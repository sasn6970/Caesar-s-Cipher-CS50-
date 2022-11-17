#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


// The program gets the key from the command-line argument, 
// so it requires 2 arrays and the second one should be a positive number
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage ./caesar key");
        return 1;
    }

    for (int k = 0, n = strlen(argv[1]); k < n; k++)
    {
        if (isalpha(argv[1][k]))
        {
            printf("Usage ./caesar key");
            return 1;
        }
    }

    int key = atoi(argv[1]); // Convert key to integer
    printf("Success!\n");

    string s = get_string("Plain text: "); // Get text to be ciphered
    printf("Ciphertext: ");


    for (int i = 0, n = strlen(s) ; i < n ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') // Stablish char limit within ASCII alphabet and expected behaviour
        {
            printf("%c", (((s[i] - 97) + key) % 26) + 97);
        }

        else if (s[i] >= 'A' && s[i] <= 'Z')

        {
            printf("%c", (((s[i] - 65) + key) % 26) + 65);
        }
        
        else
        {
            printf("%c", (s[i]));
        }

    }

    printf("\n");

}
