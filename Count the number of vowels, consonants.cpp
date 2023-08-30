#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Enter a String.\n");
    char line[1000];
    fgets(line, sizeof(line), stdin);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; line[i] != '\0'; ++i) {
        char ch = tolower(line[i]);

        // check if character is any of a, e, i, o, u
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++vowels;
        }

        // check if character is in between a to z
        else if ((ch >= 'a' && ch <= 'z')) {
            ++consonants;
        }

        // check if character is in between 0 to 9
        else if (ch >= '0' && ch <= '9') {
            ++digits;
        }

        // check if character is a white space
        else if (ch == ' ') {
            ++spaces;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", spaces);

    return 0;
}

