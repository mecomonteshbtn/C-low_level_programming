/* The system call fork (man 2 fork) creates a new child process,
 * almost identical to the parent (the process that calls fork).
 * Once fork successfully returns, two processes continue to run
 * the same program, but with different stacks, datas and heaps.
 *
 * Note: there is no typo in the above example.
 * Using the return value of fork, it is possible to know if the
 * current process is the father or the child: fork will return 0
 * to the child, and the PID of the child to the father. 
 */

#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("Before fork\n");
	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	return (0);
}
