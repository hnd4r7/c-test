#include <stdio.h>
#include <stdlib.h>

/* Paste this on the file you want to debug. */
#include <stdio.h>
#include <execinfo.h>
void print_trace(void) {
    char **strings;
    size_t i, size;
    enum Constexpr { MAX_SIZE = 1024 };
    void *array[MAX_SIZE];
    size = backtrace(array, MAX_SIZE);
    strings = backtrace_symbols(array, size);
    for (i = 0; i < size; i++)
        printf("%s\n", strings[i]);
    puts("");
    free(strings);
}

void my_func_3(void) {
    print_trace();
}

void my_func_2(void) {
    my_func_3();
}

void my_func_1(void) {
    my_func_3();
}

int main(void) {
    my_func_1(); /* line 33 */
    my_func_2(); /* line 34 */
    return 0;
}
