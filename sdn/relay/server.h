#ifndef SERVER_H
#define SERVER_H

int create_sock(char *);
int server_workings();
int connect_back(struct controller *);
void *cli_run(void *);
void *alarm_run(void *);

#endif
