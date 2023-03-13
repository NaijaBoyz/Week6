#include<stdio.h>
#include<unistd.h>
int main()
{
 //pass your path in the function
 int ch=chdir("Test_Dir");
 /*if the change of directory was successful it will print successful
otherwise it will print not successful*/
 if(ch<0)
 printf("chdir change of directory not successful\n");
 else
 printf("chdir change of directory successful");
 return 0;
}
