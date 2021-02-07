#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

bool IsPassworOK(void){
        char Password[12];
        gets (Password);
        return 0 == strcmp(Password, "goodpass");
}

int main(void){
        bool PwStatus;
        printf("%s","Enter password : ");
        PwStatus = IsPassworOK();

        if (PwStatus == false){
                puts("Access denied");
                exit(-1);
        }
        else{
                puts("Access Granted");
        }
}
