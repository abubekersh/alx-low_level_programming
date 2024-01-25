#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) {
    va_list args;
    const char *ptr = format;
    char *str;

    va_start(args, format);

    while (ptr && *ptr) {
        if (*ptr == 'c') {
            printf("%c", va_arg(args, int));
        } else if (*ptr == 'i') {
            printf("%d", va_arg(args, int));
        } else if (*ptr == 'f') {
            printf("%f", va_arg(args, double));
        } else if (*ptr == 's') {
            str = va_arg(args, char*);
            if (str == NULL) {
                printf("(nil)");
            } else {
                printf("%s", str);
            }
        }

        ptr++;

        if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's')) {
            printf(", ");
        }
    }

    va_end(args);
    printf("\n");
}

int main() {
    print_all("cifs", 'H', 123, 3.14, "Hello");
    print_all("si", 'X', "String");
    print_all("c", 'A');
    print_all("");
    return 0;
}

