#include <stdio.h>
// writing into file using write() system call
int main() {
    FILE *fp = fopen("hello.txt", "w"); // Open file for writing
    if (fp == NULL) {
        perror("Unable to open file");
        return 1;
    }
    char message[] = "Hello World!";
    fwrite(message, sizeof(char), 12, fp); // 12 characters
    fclose(fp); // Close file
    printf("%s\n", message); // Print message to console
    return 0;
}


