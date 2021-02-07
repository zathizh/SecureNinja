#include <stdio.h>
  
char *secret = "appsec";

void go_shell(){
        char *shell =  "/bin/sh";
        char *cmd[] = { "/bin/sh", 0 };
        setreuid(0);
        execve(shell,cmd,0);
}

int authorize(){
        char password[64];
        printf("Enter Password: ");
        gets(password);
        if (!strcmp(password,secret))
                return 1;
        else
                return 0;
}

int main(){
        if (authorize()){
                printf("Login Successful\n");
                go_shell();
        } else {
                printf("Incorrect Password\n");
        }
        return 0;
}
