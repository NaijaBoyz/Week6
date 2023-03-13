#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char *dir = "/home/runner/Week6/Test_dir/change"; // replace with the desired directory path
    
    // change the current working directory
    int result = chdir(dir);
    
    if (result != 0) {
        perror("chdir() error");
        exit(EXIT_FAILURE);
    }
    
    // check that the directory was changed successfully
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
        perror("getcwd() error");
        exit(EXIT_FAILURE);
    }
    printf("Current working directory: %s\n", cwd);
    
    return 0;
}
