#include <stdio.h> 
#include<fcntl.h>
  
int main() 
{ 
    int fd1,position; 
    fd1=open("/home/arbaaz/AOS/hello.c",O_RDONLY);
    position=lseek(fd1,0,2); 
printf("Size of file is %d bytes\n",position);
    return 0; 
}




#include <stdio.h>
#include<fcntl.h>
#include <unistd.h>
void main(int argc, char **argv)
{
    FILE *fp;
    char ch;
    int size = 0;
    fp = fopen(argv[1], "r");
    if (fp == NULL)
        printf("\nFile unable to open ");
    else 
        printf("\nFile opened ");
    fseek(fp, 0, 2);    /* file pointer at the end of file */
    size = ftell(fp); /* take a position of file pointer un size variable */
    printf("The size of given file is : %d\n", size);    
    fclose(fp);
}
