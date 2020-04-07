#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac,char **av[])
{
	DIR *dp;
	struct dirent *dentry;

	if(! (dp=opendir(argv[1])) ) {
		printf("opendir error\n");
		exit(2);
	}

	while(1) {
		dentry=readdir(dp);
		if(!dentry)
			break;

		printf("%s\n", dentry->d_name);
	}
	return 0;
}
