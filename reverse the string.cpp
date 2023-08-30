#include <stdio.h>
#include <string.h>

void reverse(char sentence[], int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap the characters at start and end indices
    char temp = sentence[start];
    sentence[start] = sentence[end];
    sentence[end] = temp;

    // Recursively reverse the substring
    reverse(sentence, start + 1, end - 1);
}

int main() {
    char sentence[] = "Go work";
    int length = strlen(sentence);
    
    reverse(sentence, 0, length - 1);

    printf("The reversed sentence is: %s\n", sentence);
    return 0;
}

