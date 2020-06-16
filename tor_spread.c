#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc, char **argv) {
    //This is where I need to start in order to configure my network over tor
    //First I need to check if tor eists in the system or not
    struct stat s;
    int err = stat("/etc/tor", &s);
    if(err == -1) {
        if(ENOENT == errno) {
            //Directory doesnt exist prompt me to use the install tor command
        }
        else {
            perror("stat");
            exit(1);
        }
    }
    else {
        //Directory exits, tor is installed
        
    }
    return 0;
}