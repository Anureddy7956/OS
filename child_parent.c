// Demonstrate by creating five Child Processes using system call fork () and display their IDS

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main() {
	pid_t pid;
	int i;
	printf ("Parent process started with PID: %d\n", getpid());
	for (i = 1; i <= 5; i++) {
		pid = fork(); 
		if (pid < 0) {
		perror ("Fork failed");
		return 1;
		}
		else if (pid == 0) {
		printf ("Child %d created with PID: %d, Parent PID: %d\n", i, getpid(), getppid());
		return 0; 
		}
	}
printf ("Parent process (PID: %d) finished creating children.\n", getpid());
return 0;
}
