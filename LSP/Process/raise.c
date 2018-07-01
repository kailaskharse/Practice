#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h> 
#include<unistd.h>
#include<errno.h>
#include<signal.h>
void usr1_handler(int sig_num){
	printf("Parent (%d)got the SIGUSR1\n",getpid());
}

int main(){
	pid_t ret;
	int status;
	int role=-1;
	
	ret=fork();
	if(ret>0){	//PAARENT CONTEXT
		printf("Parent: This is the parent porcess (pid %d)\n",getpid());
		signal(SIGUSR1, usr1_handler);	
		role=0;
		printf("IN PARENT: Calling PAUSE Function\n");
		pause();
		printf("IN PARENT: exiting PAUSE function\n");
		printf("parent: Awating child Exit\n");
		ret=wait(&status);
		printf("PARENT: exiting wait in parent\n");
	}
	else if (ret == 0){	//CHILD CONTEXT
		printf("Child: this s the child process (PID %d)\n",getpid());	
		role=1;
		printf("IN CHILD: Calling Sleep in child\n");
		sleep(10);
		printf("child:sending SIGUSR1 to pid %d\n",getppid());
		printf("CHILD: CALLING KILL SIGNAL IN KILL\n");
		kill(getppid(),SIGUSR1);
		sleep(20);
	}
	else{		//PARENT CONTEXT ERROR
		printf("parent: Error trying to fork() (%d)\n",errno);
	}
	printf("%s: Exiting..\n",((role==0)?"Parent":"Child"));
	return 0;
}
	
		

