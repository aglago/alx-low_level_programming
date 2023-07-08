#include <stdio.h>
#include <string.h> // Include the string.h header for strcmp

int main(int argc, char *argv[]) {
    int verbose = 0; // Default value
    
    // Check if the "-v" flag is present
    if (argc > 1 && strcmp(argv[1], "-v") == 0) {
        verbose = 1;
    }
    
    // Print output based on the verbose flag
    if (verbose) {
        printf("Verbose output enabled.\n");
    } else {
        printf("Verbose output disabled.\n");
    }
    
    return 0;
}

