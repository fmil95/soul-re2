/* Original path: C:\sr2\game\LIST.C */
/* .text 0x001415C8 */

#include "common.h"

// /* 001415c8 00000020 */ void LIST_InsertFunc(/* a0 4 */ NodeType *list, /* a1 5 */ NodeType *node) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_InsertFunc);

// /* 001415e8 0000004c */ void LIST_DeleteFunc(/* a0 4 */ NodeType *node) {}
void LIST_DeleteFunc(NodeType *node)
{
    if (node->prev != NULL)
    {
        if (node->next != NULL)
        {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            goto end;
        }
    }
    else if (node->next != NULL)
    {
        node->next->prev = NULL;
        goto end;
    }

    if (node->prev != NULL)
    {
        node->prev->next = NULL;
    }

end:
    node->next = NULL;
    node->prev = NULL;
}

// /* 00141638 00000034 */ NodeType* LIST_GetFunc(/* a0 4 */ NodeType *list) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_GetFunc);

// /* 00141670 0000006c */ NodeType* LIST_LastOrdered(/* a0 4 */ NodeType *list, /* s2 18 */ ListOrderFunc *listOrderFunc) {
//     /* s1 17 */ NodeType *last;
//     /* s0 16 */ NodeType *node;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_LastOrdered);

// /* 001416e0 0000008c */ void LIST_SortFunc(/* s1 17 */ NodeType *list, /* s2 18 */ ListOrderFunc *listOrderFunc) {
//     /* s0 16 */ NodeType *last;
//     /* 0x0(sp) */ NodeType newList;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_SortFunc);

// /* 00141770 00000008 */ NodeType* LIST_HeadFunc(/* a0 4 */ NodeType *list) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_HeadFunc);

// /* 00141778 00000074 */ void LIST_Flip(/* s1 17 */ NodeType *list) {
//     /* s0 16 */ NodeType *next;
//     /* 0x0(sp) */ NodeType newList;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_Flip);

// /* 001417f0 00000024 */ int LIST_Count(/* v1 3 */ NodeType *list) {
//     /* v0 2 */ int numElements;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_Count);

// /* 00141818 00000060 */ void LIST_Concatenate(/* s2 18 */ NodeType *target, /* s1 17 */ NodeType *source) {
//     /* s0 16 */ NodeType *next;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_Concatenate);
