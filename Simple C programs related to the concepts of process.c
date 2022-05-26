/*Simple C programs related to the concepts of: 
Background Process, Parent Process, Child Process, Zombie Process, Orphan Process, Sleeping
Process, Running Process*/
#include<stdio.h> 
int main ()
{
	int pid, retnice;
	pid = fork ();
	if (pid == 0)
	{
		retnice = nice(-4);
		printf("The priority assigned to the child- %d\nI am the child process \nMy pid-%d\nMyparent pid-%d\n\n",retnice, getpid ().getppid ());
		printf ("Process is going to sleep for 10 seconds...");
		printf("\n\nThe priority assigned to the child- %d\nI am the child process\nMy pid-%d\nMyparent pid=%d\n",retnice, getpid ().getppid ());
		sleep (10);
		system ("ps -l");
	}
	else if(pid>0)
	{
		retnice = nice(5);
		printf ("the priority of parent = %d\nI am the parent process\nMy pid=%d\n",retnice, getpid ());
	}

	else
	printf ("\nUnsucessful");
}
//Run on unix/linux 
