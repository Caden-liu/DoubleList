#ifndef List_H
#define List_H

typedef struct _DOUBLE_LINK_NODE
{
    int data;
    struct _DOUBLE_LINK_NODE* prev;
    struct _DOUBLE_LINK_NODE* next;
}DOUBLE_LINK_NODE;

#define TRUE 0
#define FALSE 1

#if 1
DOUBLE_LINK_NODE* create_double_link_node(int value);
void delete_all_double_link_node(DOUBLE_LINK_NODE** pDLinkNode);
DOUBLE_LINK_NODE* find_data_in_double_link(const DOUBLE_LINK_NODE* pDLinkNode, int data);
int insert_data_into_double_link(DOUBLE_LINK_NODE** ppDLinkNode, int data);
int delete_data_from_double_link(DOUBLE_LINK_NODE** ppDLinkNode, int data);
int count_number_in_double_link(const DOUBLE_LINK_NODE* pDLinkNode);
void print_double_link_node(const DOUBLE_LINK_NODE* pDLinkNode);
#endif
#endif
