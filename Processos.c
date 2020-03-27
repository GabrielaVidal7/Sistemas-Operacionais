#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main (int argc, char *argv[], char *envio[]){
	int valor_fork=fork();		//Syscall de processo

	if(valor_fork==0){
		printf("Filho - %5d\n", getpid());
		execve("bin/dade", argv, envio);	//Syscall de processo
	}else{
		printf("Pai - %5d\n", getpid());
	}
	exit(0);	//Syscall de processo
}