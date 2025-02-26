#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    SEMI,
    OPEN_PAREN,
    CLOSE_PAREN,
} TokenTypeSeparator;

typedef enum
{
    EXIT,
} TokenTypeKeyword;

typedef enum {
    INT,
} TokenTypeLiteral;

typedef struct {
    TokenTypeSeparator type;
} TokenSeparator;

typedef struct {
    TokenTypeKeyword type;
} TokenKeyword;

typedef struct {
    TokenTypeLiteral type;
    int value;
} TokenLiteral;

int main() {
    FILE *file;
    file = fopen("test_program.ds", "r");
    char current = fgetc(file);
    while (current != EOF) {
        printf("%c", current);
        current = fgetc(file);
    }
    printf("Main!!!");
}