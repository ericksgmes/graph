//
// Created by erick on 6/14/2024.
//

#include "graph.h"
#include <stdlib.h>
#include <stdio.h>


t_graph * create_adj_matrix(int vertices) {
    t_graph * graph = (t_graph *) malloc(sizeof(t_graph));
    graph->num_vertices = vertices;
    graph->adj_struct = (int **) malloc(sizeof(int *) * vertices);
    for (int i = 0; i < vertices; ++i) {
        graph->adj_struct[i] = (int *) malloc(sizeof(int) * vertices);
        for (int j = 0; j < vertices; ++j) {
            graph->adj_struct[i][j] = 0;
        }
    }
    return graph;
}

t_graph* create_adj_list(int vertices) {
    t_graph* graph = (t_graph*)malloc(sizeof(t_graph));
    graph->num_vertices = vertices;
    graph->adj_struct = (t_adj_node**)malloc(vertices * sizeof(t_adj_node*));

    for (int i = 0; i < vertices; i++) {
        graph->adj_struct[i] = 0;
    }

    return graph;
}

void insert_adj_matrix(t_graph *graph, int src, int dest) {
    graph->adj_struct[src][dest] = 1;
}

void insert_adj_list(t_graph *graph, int src, int dest) {
    t_adj_node* new_node = (t_adj_node*)malloc(sizeof(t_adj_node));
    new_node->dest = dest;
    new_node->next = graph->adj_struct[src];
    graph->adj_struct[src] = new_node;
}

char* graph_labels(int size) {
    char* letters = (char*)malloc(size * sizeof(char));

    for (int i = 0; i < size; i++) {
        letters[i] = 'A' + i % 26;
    }

    return letters;
}

void print_graph(t_graph *graph) {
    char * labels = graph_labels(graph->num_vertices);
    printf("   ");
    for (int i = 0; i < graph->num_vertices; ++i) {
        printf("%c", labels[i]);
        printf("   ");
    }
    printf("\n");

    for (int i = 0; i < graph->num_vertices; ++i) {
        printf("%c  ", labels[i]);
        for (int j = 0; j < graph->num_vertices; ++j) {
            printf("%d", graph->adj_struct[i][j]);
            printf("   ");

        }
        printf("\n");
    }
    free(labels);
}

void print_adj_list(t_graph *graph) {
    char * labels = graph_labels(graph->num_vertices);
    for (int v = 0; v < graph->num_vertices; ++v) {
        t_adj_node* temp = (t_adj_node*)graph->adj_struct[v];
        printf("%c: ", labels[v]);
        while (temp) {
            printf("%c -> ", labels[temp->dest]);
            temp = temp->next;
        }
        printf("\n");
    }
    free(labels);
}