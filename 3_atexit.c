#include <stdio.h>
#include <stdlib.h>
void Testfunction ()
{
    printf("This is Testfunction\n");
}
int main ()
{
    int status;
    //register the termination function
    status = atexit(Testfunction);
    if (status != 0)
    {
        printf("Registration Failed\n");
        exit(1);
    }
    printf("Registration successful\n");
    return 0;
}




/*More than one function working with atexit()*/
#include <stdio.h>
#include <stdlib.h>
void Testfunction1()
{
    printf("This is Testfunction1\n");
}
void Testfunction2()
{
    printf("This is Testfunction2\n");
}
void Testfunction3()
{
    printf("This is Testfunction3\n");
}
int main ()
{
    int status;
    //register the termination functions
    //if successfully register return 0
    status = atexit(Testfunction1);
    status = (status == 0)? atexit(Testfunction2):1;
    status = (status == 0)? atexit(Testfunction3):1;
    if (status != 0)
    {
        printf("Registration Failed\n");
        exit(1);
    }
    printf("Registration successful\n\n");
    return 0;
}






