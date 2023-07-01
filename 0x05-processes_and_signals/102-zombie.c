#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * infinite_while - function of the prototype
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - function of the prototype
 * Return: infinite_while zombies
 */
int main(void)
{
	pid_t zombiePID;
	unsigned int f;

	for (f = 0; f < 5; f++)
	{
		zombiePID = fork();
		if (zombiePID == 0)
			exit(0);
		else
			printf("Zombie process created, PID: %d\n", zombiePID);
	}
	return (infinite_while());
}
