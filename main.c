#include <stdio.h>
#include <stdlib.h>
#include "graph.h"


int main(void) {
    t_graph * graph = create_graph(6);
    insert_edge(graph, 0, 2);
    insert_edge(graph, 0, 1);
    insert_edge(graph, 1, 2);
    insert_edge(graph, 2, 3);
    insert_edge(graph, 1, 3);
    insert_edge(graph, 2, 4);
    insert_edge(graph, 4, 3);

    print_graph(graph);
    return 0;
}
