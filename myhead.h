#ifndef _MYHEAD_H_
#define _MYHEAD_H_

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <pthread.h>
#include <fcntl.h>
#include <sqlite3.h>

#define portnumber 8000

#define MAX 100

#include <termio.h>


enum CMD{
	LOG = -100,
	REGIST,
	SHOW,
	CHAT,
	BROAD,
	HI,
	CPWD,
	RNAME,
	LOGOFF,
	EXIT,
	KICK,
	BAN,
	LINE,
	NOTLINE,
    LOGOK,
    CHATOK
};

struct message
{
    int action;
    char id[20];
    char name[20];
    char password[20];
    char toname[20];
    char msg[100];
    int state;
};

typedef struct message MSG;

MSG msg;
int sockfd;


#endif
