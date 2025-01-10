#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>
#include <stdbool.h>

bool containsSubstring(const char *str, const char *substr) {
    regex_t regex;
    int reti;

    // Create the regex pattern to match the substring
    reti = regcomp(&regex, substr, REG_EXTENDED);
    if (reti) {
        fprintf(stderr, "Could not compile regex\n");
        exit(1);
    }

    // Execute the regex on the input string
    reti = regexec(&regex, str, 0, NULL, 0);
    regfree(&regex); // Free the compiled regex

    return reti == 0; // 0 means match found
}

int main() {
    char input[100];
    const char *substring = "abc"; // Change this to the desired substring

    printf("Enter a string: ");
    scanf("%99s", input); // Limit input to prevent buffer overflow

    if (containsSubstring(input, substring)) {
        printf("The string contains the substring '%s'.\n", substring);
    } else {
        printf("The string does not contain the substring '%s'.\n", substring);
    }

    return 0;
}
