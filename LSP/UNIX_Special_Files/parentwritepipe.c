#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<errno.h>
#define BUFSIZE 10

int main(void){
	char bufin[BUFSIZE]="Empty";
	char bufout[] = "hello";
	int bytesin,status;
	pid_t childpid;
	int fd[2];
	
	if(pipe(fd) ==-1){
		perror("failed to create the pipe");
		return 1;
	}
	bytesin = strlen(bufin);
	childpid = fork();
	if(childpid == -1){
		perror("failed to fork\n");
		return 1;
	}
	if(childpid){		//parent code
		write(fd[1],bufout,strlen(bufout)+1);
		childpid=wait(&status);
		printf("in Parent\n");
		}
	else{ 				//child code
	
		bytesin = read(fd[0], bufin, BUFSIZE);
		printf("in Child\n");
	}
	fprintf(stderr, "pid=%d,[%dld]:my bufin is {%s}, my bufout is {%s}\n",((long)getpid(),bytesin, bufin, bufout));
	return 0;
}
