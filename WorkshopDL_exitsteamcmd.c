#include <stdio.h>

int main() {
    FILE* file_ptr = fopen("scmd_exit", "w+");
    fclose(file_ptr);
    return 0;
}
