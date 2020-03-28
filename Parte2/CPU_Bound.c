#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main (int argc, char *argv[], char *envio[]){
	int valor_fork=fork();		//Syscall de processo

	if(valor_fork==0){
		execve("bin/dade", argv, envio);	//Syscall de processo
	}

	exit(0);	//Syscall de processo
}
