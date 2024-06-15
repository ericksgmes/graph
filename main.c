#include <stdio.h>
#include <stdlib.h>
#include "graph.h"


int main(void) {
    t_graph * graph = create_adj_matrix(6);
    insert_adj_matrix(graph, 0, 2);
    insert_adj_matrix(graph, 0, 1);
    insert_adj_matrix(graph, 1, 2);
    insert_adj_matrix(graph, 2, 3);
    insert_adj_matrix(graph, 1, 3);
    insert_adj_matrix(graph, 2, 4);
    insert_adj_matrix(graph, 4, 3);

    t_graph * graph2 = create_adj_list(6);
    insert_adj_list(graph2, 0, 2);
    insert_adj_list(graph2, 0, 1);
    insert_adj_list(graph2, 0, 3);
    insert_adj_list(graph2, 1, 2);
    insert_adj_list(graph2, 2, 3);
    insert_adj_list(graph2, 1, 3);
    insert_adj_list(graph2, 2, 4);
    insert_adj_list(graph2, 4, 3);

    print_graph(graph);
    printf("\n\n\n\n\n");
    print_adj_list(graph2);
    return 0;
}
