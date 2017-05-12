#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "uthash.h"



#define BUFSIZE 1500

struct my_struct {
    int id;            /* we'll use this field as the key */
    char name[10];             
    UT_hash_handle hh; /* makes this structure hashable */
};

struct my_struct *users = NULL;

void add_user(struct my_struct *s) {
    HASH_ADD_INT( users, id, s );    
}

int main(char* argv, int argc)
{
return 0;
}
