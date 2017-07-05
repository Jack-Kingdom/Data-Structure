/*
 *  COPYRIGHT: Jack<email@qiaohong.org>
 *  LICENSE: MIT
 */


typedef struct {
    // define your data type here
    // rewrite here to fit your use case
    int simple;
} DataType;

typedef struct Node {
    // node of single linked list
    DataType *data;
    struct Node *next;
} Node;

typedef struct {
    Node *head; // first node
    Node *tail; // last node
    unsigned int length;
} SinglyLinkedList;

/*
 * function: alloc a SinglyLinkedList struct and init it
 * arguments: none
 * efficiency: O(1)
 * return value: success return a ptr, else NULL on err occurred
 */
SinglyLinkedList *SinglyLinkedList_malloc();

/*
 * function: free a SinglyLinkedList and its all node and data
 * arguments:
 *     lst: SinglyLinkedList that to be free
 * efficiency: O(n), n stand lst's length
 * return value: success return 0, else -1 on err occurred
 */
int SinglyLinkedList_free(SinglyLinkedList *lst);

/*
 * function: wrap data with a new node and append it to lst tail
 * arguments:
 *     lst: operated SinglyLinkedList pointer
 *     data: DataType pointer
 * efficiency: O(1)
 * return value: success return 0, else -1 on err occurred
 */
int SinglyLinkedList_push_back(SinglyLinkedList *lst, DataType *data);

/*
 * function: pop lst's last node
 * arguments:
 *     lst: operated SinglyLinkedList pointer
 * efficiency: O(n), n stand lst's length
 * return value: success return 0, else -1 on err occurred
 */
int SinglyLinkedList_pop_back(SinglyLinkedList *lst);

/*
 * function: wrap data with a new node and insert it to lst head
 * arguments:
 *     lst: operated SinglyLinkedList pointer
 *     data: DataType pointer
 * efficiency: O(1)
 * return value: success return 0, else -1 on err occurred
 */
int SinglyLinkedList_push_front(SinglyLinkedList *lst, DataType *data);

/*
 * function: pop lst's first node
 * arguments:
 *     lst: operated SinglyLinkedList pointer
 * efficiency: O(1)
 * return value: success return 0, else -1 on err occurred
 */
int SinglyLinkedList_pop_front(SinglyLinkedList *lst);