#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
/**
 * main - PID to get the pid of a process
 * Return: Always 0
 */
int main(void)
{
	int pd, f;

	pd = getpid();
	f = getppid();

	printf("the PID of this process is : %d\n", pd);
	printf("the PPID of this process is : %d\n", f);
	}
	wait();
	printf("HI from the parent\n");
	return (0);
}
