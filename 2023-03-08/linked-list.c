#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
} Node;

typedef struct List {
  struct Node* head;
  struct Node* tail;
  int size;
} List;

Node* new_Node (int data) {
  Node* nnode = (Node*) malloc(sizeof(Node));
  nnode->data = data;
  return nnode;
}

List* new_List (){
  List* nlist = (List *) malloc(sizeof(List));
  nlist->size = 0;
  return nlist;
}

void prepend(List* list, int data) {
  Node* nnode = new_Node(data);
  if (size == 0) {
    list->head = new_Node(data);
    list->tail = list->head;
    return;
  }
  list->head->prev = nnode;
  nnode->next = list->head;
  list->head = list->head->prev;
}
