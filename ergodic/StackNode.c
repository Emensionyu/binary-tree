typedef StackNode* Stack;
#define STACK_SIZE 100
struct StackNode
{
    BinTree *Top;
    BinTree *Base;
    int size;
};
