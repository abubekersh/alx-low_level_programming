#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) {
    va_list args;
    const char *ptr = format;
    int i = 0;
    char *str;

    va_start(args, format);

    while (ptr != NULL && ptr[i] != '\0') {
        if (ptr[i] == 'c') {
            printf("%c", va_arg(args, int));
        } else if (ptr[i] == 'i') {
            printf("%d", va_arg(args, int));
        } else if (ptr[i] == 'f') {
            printf("%f", va_arg(args, double));
        } else if (ptr[i] == 's') {
            str = va_arg(args, char*);
            if (str == NULL) {
                printf("(nil)");
            } else {
                printf("%s", str);
            }
        }
        i++;
        if (ptr[i] != '\0' && (ptr[i] == 'c' || ptr[i] == 'i' || ptr[i] == 'f' || ptr[i] == 's')) {
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

