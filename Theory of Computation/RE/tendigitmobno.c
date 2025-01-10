#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>
#include <stdbool.h> 

bool isValidMobileNumber(const char *str) {
    regex_t regex;
    int reti;

    // Compile the regular expression for a 10-digit mobile number
    reti = regcomp(&regex, "^[789][0-9]{9}$", REG_EXTENDED);
    if (reti) {
        fprintf(stderr, "Could not compile regex\n");
        exit(1);
    }

    // Execute the regex
    reti = regexec(&regex, str, 0, NULL, 0);
    regfree(&regex); // Free the compiled regex

    return reti == 0; // 0 means match found
}

int main() {
    char number[15];
    printf("Enter a mobile number: ");
    scanf("%s", number);
    
    if (isValidMobileNumber(number)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    
    return 0;
}
