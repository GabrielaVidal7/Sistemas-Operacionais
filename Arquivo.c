#include <unistd.h>
#include <fcntl.h>

int main(){
	int file;

	file = open("file.txt",O_WRONLY|O_CREAT,0666);

	write(file,"Hello World!",12);

	close(file);
}