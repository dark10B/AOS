#include<stdio.h>
#include<dirent.h>

int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    return(0);
}





#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void main(int argc, char *argv[])
{
	char d[50];
	int cnt=0;
	if(argc==2)
	{
		bzero(d,sizeof(d));
		strcat(d,"ls ");
		strcat(d,"-l ");
		strcat(d,argv[1]);
		system(d);
	}
	else
		printf("\nInvalid No. of inputs");
}

