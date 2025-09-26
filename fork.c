#include <stdio.h>
#include <sys/types.h> //system call datatypes
#include <unistd.h>// unix standard

int main() {
    pid_t pid; // inter datatype used in unix-like os

    pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process
        printf("This is the child process. PID: %d\n", getpid());
    } else {
        // Parent process
        printf("This is the parent process. PID: %d, child's PID: %d\n", getppid(), pid);
    }

    return 0;
}

