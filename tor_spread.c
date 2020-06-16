#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>

int main(int argc, char **argv) {
    //This is where I need to start in order to configure my network over tor
    //First I need to check if tor eists in the system or not
    printf("Start the program\n");
    struct stat s;
    int err = stat("/etc/tor", &s);
    if(err == -1) {
        if(ENOENT == errno) {
            //Directory doesnt exist prompt me to use the install tor command
            printf("Install the Tor First.. To install type sudo apt-get install tor");
            exit(0);
        }
        else {
            perror("stat");
            exit(1);
        }
    }
    else {
        //Directory exits, tor is installed
        printf("The Directory Exists\n");
        //First thing first, I need to check whether the configuration file has been updated or not
    }
    return 0;
}

void addConfigurationTorrcfile() {
    //This function should only add the configuration file if it doesnt exist
    
}