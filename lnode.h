#ifndef LNODE_H
#define LNODE_H

typedef struct 
{
    int value;
    Lnode* next;
} Lnode;

Lnode* createNode(int value);

#endif

