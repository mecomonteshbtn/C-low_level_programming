#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t process_id, p_process_id;

	process_id = getpid();
	p_process_id = getppid();
	printf("Process id: %d\n", process_id);
	printf("Parent Process id: %d\n", p_process_id);
	/* echo $$ print ppid */
	return (0);
}
