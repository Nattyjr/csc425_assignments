#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 2) {
        fprintf(stderr, "Missing argument for memory size\n");
        exit(1);
    }

    // Get memory size from command line argument
    long long megabytes = atoi(argv[1]);
    long long bytes = megabytes * 1024 * 1024;

    // Allocate memory
    char *memory = (char *)malloc(bytes);
    if (memory == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Print memory size in bytes
    printf("Memory size: %lld bytes\n", bytes);

    // Touch each byte in the allocated memory
    while (1) {
        for (long long i = 0; i < bytes; i++) {
            memory[i] += 1;
        }
    }

    // Free allocated memory
    free(memory);

    return 0;
}
