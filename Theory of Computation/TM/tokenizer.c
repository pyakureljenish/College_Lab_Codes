#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TOKEN_LENGTH 100
#define MAX_TOKENS 100

typedef enum {
    TOKEN_KEYWORD,
    TOKEN_IDENTIFIER,
    TOKEN_NUMBER,
    TOKEN_OPERATOR,
    TOKEN_PUNCTUATION,
    TOKEN_UNKNOWN
} TokenType;

typedef struct {
    char token[MAX_TOKEN_LENGTH];
    TokenType type;
} Token;

// List of C keywords
const char *keywords[] = {
    "int", "float", "double", "char", "void",
    "if", "else", "while", "for", "return",
    "break", "continue", "switch", "case", "default",
    "typedef", "struct", "union", "enum", "goto"
};

int isKeyword(const char *word) {
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // Found a keyword
        }
    }
    return 0; // Not a keyword
}

void tokenize(const char *source) {
    Token tokens[MAX_TOKENS];
    int tokenCount = 0;

    const char *ptr = source;
    while (*ptr) {
        // Skip whitespace
        if (isspace(*ptr)) {
            ptr++;
            continue;
        }

        // Identify keywords and identifiers
        if (isalpha(*ptr) || *ptr == '_') {
            char token[MAX_TOKEN_LENGTH];
            int len = 0;
            while (isalnum(*ptr) || *ptr == '_') {
                token[len++] = *ptr++;
            }
            token[len] = '\0';

            if (isKeyword(token)) {
                tokens[tokenCount].type = TOKEN_KEYWORD;
            } else {
                tokens[tokenCount].type = TOKEN_IDENTIFIER;
            }
            strcpy(tokens[tokenCount++].token, token);
            continue;
        }

        // Identify numbers
        if (isdigit(*ptr)) {
            char token[MAX_TOKEN_LENGTH];
            int len = 0;
            while (isdigit(*ptr)) {
                token[len++] = *ptr++;
            }
            token[len] = '\0';
            tokens[tokenCount].type = TOKEN_NUMBER;
            strcpy(tokens[tokenCount++].token, token);
            continue;
        }

        // Identify operators and punctuation
        if (strchr("+-*/=<>!&|;", *ptr)) {
            char token[3] = {0}; // Two characters + null terminator
            token[0] = *ptr++;
            if ((*ptr == '=' || *ptr == '*') && (token[0] == '+' || token[0] == '-' || token[0] == '!' || token[0] == '<' || token[0] == '>')) {
                token[1] = *ptr++;
            }
            tokens[tokenCount].type = TOKEN_OPERATOR;
            strcpy(tokens[tokenCount++].token, token);
            continue;
        }

        // Handle punctuation (e.g., commas, braces)
        if (strchr("()[]{}", *ptr)) {
            char token[2] = {0};
            token[0] = *ptr++;
            tokens[tokenCount].type = TOKEN_PUNCTUATION;
            strcpy(tokens[tokenCount++].token, token);
            continue;
        }

        // Unknown token handling
        tokens[tokenCount].type = TOKEN_UNKNOWN;
        tokens[tokenCount].token[0] = *ptr++;
        tokens[tokenCount++].token[1] = '\0';
    }

    // Print tokens
    for (int i = 0; i < tokenCount; i++) {
        printf("Token: %-15s Type: ", tokens[i].token);
        switch (tokens[i].type) {
            case TOKEN_KEYWORD: printf("Keyword\n"); break;
            case TOKEN_IDENTIFIER: printf("Identifier\n"); break;
            case TOKEN_NUMBER: printf("Number\n"); break;
            case TOKEN_OPERATOR: printf("Operator\n"); break;
            case TOKEN_PUNCTUATION: printf("Punctuation\n"); break;
            case TOKEN_UNKNOWN: printf("Unknown\n"); break;
        }
    }
}

int main() {
    const char *sourceCode = "int main() { return 0; }";
    printf("Source Code:\n%s\n\nTokens:\n", sourceCode);
    tokenize(sourceCode);
    return 0;
}
