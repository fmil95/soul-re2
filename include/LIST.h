#ifndef LIST_H
#define LIST_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void LIST_InsertFunc(NodeType *list, NodeType *node);
void LIST_DeleteFunc(NodeType *node);
NodeType*LIST_GetFunc(NodeType *list);
NodeType*LIST_LastOrdered(NodeType *list, ListOrderFunc *listOrderFunc);
void LIST_SortFunc(NodeType *list, ListOrderFunc *listOrderFunc);
NodeType*LIST_HeadFunc(NodeType *list);
void LIST_Flip(NodeType *list);
int LIST_Count(NodeType *list);
void LIST_Concatenate(NodeType *target, NodeType *source);

#endif /* LIST_H */
