#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

void Dotnet()
{
    char cStr[100] = {'\0'};

    system("dotnet new console -o temp");
    unlink("temp/Program.cs");
    sprintf(cStr,"dotnet run --project temp");
    system(cStr);
}

void MkDirCS(char *str)
{
    if(str == NULL)
    {
        printf("No input given\n");
        exit(-1);
    }
    char cStr[100] = {'\0'};
    int fd = 0;
    
    fd = mkdir("temp",0777);
    if(fd < 0)
    {
        printf("Unable to create the folder\n");
        exit(-1);
    }
    sprintf(cStr,"cp -i %s temp",str);

    system(cStr);
    Dotnet();
}

int main(int no , char *str[])
{
    // str[0] = command to run the program (./myexe)
    // str[1] = actually string

    MkDirCS(str[1]);
    system("rm -rf temp");
    return 0;// exit(0);
}