#include"List.h"
#include<stdio.h>

int main(void)
{
    int num;
    DOUBLE_LINK_NODE * GClist = NULL;
    insert_data_into_double_link(&GClist,5);
    num =  count_number_in_double_link(GClist);
    printf("list cnt:%d\n",num);

    insert_data_into_double_link(&GClist,6);
    insert_data_into_double_link(&GClist,7);
    insert_data_into_double_link(&GClist,8);
    num =  count_number_in_double_link(GClist);
    printf("list cnt:%d\n",num);
    print_double_link_node(GClist);

    delete_data_from_double_link(&GClist,8);
    num =  count_number_in_double_link(GClist);
    printf("list cnt:%d\n",num);
    print_double_link_node(GClist);

    return 0;
}
