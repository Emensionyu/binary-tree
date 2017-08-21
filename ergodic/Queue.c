QList create_queue()
{
	QList Q;
	Q = (QList)malloc(sizeof(struct QueueList));
	Queue rear;
	Queue front;
	rear = (Queue)malloc(sizeof(struct QueueList));
	rear = NULL;
	front = (Queue)malloc(sizeof(struct QueueList));
	front = NULL;
	Q->front = front;
	Q->rear = rear;
	return Q;
}
int isempty_queue(QList Q)
{
	return(Q->front == NULL);
}
void push_queue(BinTree BT, QList Q)
{
	Queue P;
	P = (Queue)malloc(sizeof(struct QueueNode));
	P->Data = BT;
	P->next = NULL;
	if (isempty_queue(Q))
	{
		Q->front = P;
		Q->rear = P;
	}
	else
	{
		Q->rear->next = P;
		Q->rear = P;
	}
}
BinTree pop_queue(QList Q)
{
	Queue P;
	BinTree BT;
	if (isempty_queue(Q))
		return 0;
	P = Q->front;
	if (Q->front == Q->rear)
		Q->front = Q->rear = NULL;
	else
		Q->front = Q->front->next;
	BT = P->Data;
	free(P);
	return BT;
}
