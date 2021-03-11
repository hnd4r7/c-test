#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/wait.h>

int main()
{
   char buf[512];
int n;

for(;;){
	n = read(0, buf, sizeof buf);
	if(n == 0)
    	break;
    if(n < 0){
       printf(2, "read error\n");
		exit(1);
	}
    if(write(1, buf, n) != n){
    	printf(2, "write error\n");
        exit(1);
	}
}
}