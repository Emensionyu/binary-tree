typedef struct QueueNode* Queue;
struct QueueNode
{
	BinTree Data;
	Queue next;
};
typedef struct QueueList* QList;
struct QueueList
{
	Queue rear;
	Queue front;
};
