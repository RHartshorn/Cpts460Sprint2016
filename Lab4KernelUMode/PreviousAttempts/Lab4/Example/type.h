#ifndef TYPE_H
#define TYPE_H

//************************************************************
#define NPROC     9
#define SSIZE  1024
#define MAXLEN 1024

#define MTXSEG 0x1000

//******* PROC status ********
#define FREE      0
#define READY     1
#define RUNNING   2
#define STOPPED   3
#define SLEEP     4
#define ZOMBIE    5

//************************************************************
typedef unsigned char   u8;
typedef unsigned short u16;
typedef unsigned long  u32;

//************************************************************
typedef struct proc{
    struct proc *next;
    int    *ksp;               // at offset 2

    int    uss;                // segment value
    int    usp;                // at offsets 4,6

    int    inkmode;            // at offset 8

    int    pid;                // add pid for identify the proc
    int    status;             // status = FREE|READY|RUNNING|SLEEP|ZOMBIE    
    int    ppid;               // parent pid
    struct proc *parent;
    int    priority;
    int    event;
    int    exitCode;
    char   name[32];           // name string of PROC

    int    kstack[SSIZE];      // per proc stack area
}PROC;

#endif