#ifndef UF_H
#define UH_H

typedef struct uf {
    int n;
    int* items;
} uf_t;

uf_t* create_uf(int n);

void delete_uf(uf_t* uf)

void union_items(uf_t* uf, int p, int q);

int connected(uf_t* uf, int p, int q);

int find_connected_component(uf_t* uf, int p);

int count_connected_components(uf_t* uf);

#endif