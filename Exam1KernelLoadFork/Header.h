//******************************************************************
//Author: Robin Hartshorn
//Student ID: 10906124
//Date Created: 2/5/16
//Last Edited: 3/29/16
//Project: Computer Science 460: Exam 1
//******************************************************************

#ifndef HEADER_H
#define HEADER_H

//INTERRUPTHANDLER ***********
int kcinth();
int kgetpid();
int kchname(char *name);
int kkfork();
int ktswitch();
int kkwait(int *status);
int kkexit(int value);
int kps();

//LOADER.C **********
int load(char *fileName, u16 segment);

//T.C **********
int printMenu();
int body();
int ksleep(int eventValue);
int kwakeup(int eventValue);
int activeProcCount();
int kexit(int exitValue);
int hasChild(int parrentPid);
int kwait(int *status);
PROC *kfork(char *filename);
int kexec(char *filepath);
int do_kfork();
int do_tswitch();
int do_exit();
int do_kwait();
int do_kwakeup();
int do_ksleep();
int init();
int scheduler();
main();
int set_vector(u16 segment, u16 handler);

//QUEUE **********
int enqueue(PROC **queue, PROC *tmpProc);
PROC *dequeue(PROC **queue);
PROC *getProc(PROC **list);
int putProc(PROC **list, PROC *tmpProc);

//IO: INPUT *********

//IO: OUTPUT *********
char *gets(char str[]);

//IO: STATUS *********
int printList(char *name, PROC *list);
int printQueue(char *name, PROC *queue);
int printSleepQueue(char *name, PROC *queue);
int printStatuses();
int printProcArray();
int printGlobals();
int pfd(OFT *fd);

//IO: INODE ***********
void PrintGroup(GD *gp);
void PrintInodeData(INODE * ip);

//IO: DATASTRUCTURES **********
void PrintHeader(HEADER *head);

//INODE ***********
int LoadInode(int ino, int InodeBeginBlock, INODE **ip);
int LoadGroup(GD **gp, int GDBlockNumber);

//UTILITYS **********
int strSplit(char* str, char *strArray, char *delim);
int atoi(char *str);
u16 get_block(u16 blk, char buf[]);

//FORK **********
int fork();

//EXEC **********
int exec(char *filepath);

//ASSEMBLY FUNCTIONS **********
int int80h();
int goUmode();

#endif