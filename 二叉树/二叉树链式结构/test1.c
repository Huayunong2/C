#include "Queue.h"


typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left; //左孩子指针
	struct BinaryTreeNode* right; //右孩子指针
	QDataType data;
}BTNode;

BTNode* BuyBTNode(QDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail!");
		exit(-1);
	}
	node->data = x;
	node->left = node->right = NULL;
	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyBTNode(1);
	BTNode* node2 = BuyBTNode(2);
	BTNode* node3 = BuyBTNode(3);
	BTNode* node4 = BuyBTNode(4);
	BTNode* node5 = BuyBTNode(5);
	BTNode* node6 = BuyBTNode(6);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void TailOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	TailOrder(root->left);
	TailOrder(root->right);
	printf("%d ", root->data);
}

//思想：遍历+技术
//思想2：子问题
//1.空数，最小规模子问题，节点个数返回0
//2.非空，左子树节点个数+右子树节点个数+1
//分治：把复杂的问题，分成更小规模的子问题，子问题再分成更小规模的子问题
//直到子问题不可在分割，直接能出结果
int BTreeSize(BTNode* root/*, int* pCount*/)
{
	/*if (root == NULL);
	return;
	++(*pCount);
	BTreeSize(root->left, pCount);
	BTreeSize(root->right, pCount);*/

	//后序
	return root == NULL ? 0 : BTreeSize(root->left) + 
		BTreeSize(root->right) + 1;
}

int BTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return BTreeLeafSize(root->left) + BTreeLeafSize(root->right);
}
int BTreeKLevelSize(BTNode* root, int k)
{
	assert(k >= 1);
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	else //转换成左子树k-1层节点个数 + 右子树k-1层节点个数
		return BTreeKLevelSize(root->left, k - 1) + BTreeKLevelSize(root->right, k - 1);
}

//分治:左子树高度和右子树高度，大的那个+1
int BTreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftDepth = BTreeDepth(root->left);
	int rightDepth = BTreeDepth(root->right);
	return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}
BTNode* BTreeFind(BTNode* root, QDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->data == x)
		return root;
	BTNode* ret1 = BTreeFind(root->left, x);
	if (ret1)
	{
		return ret1;
	}
	BTNode* ret2 = BTreeFind(root->right, x);
	if (ret2)
	{
		return ret2;
	}
	return NULL;
}
void LevelOreder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->data);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q,front->right);
		}
	}
	printf("\n");
	QueueDestory(&q);
}
int main()
{
	BTNode* tree = CreatBinaryTree();
	PrevOrder(tree);
	printf("\n");

	InOrder(tree);
	printf("\n");

	TailOrder(tree);
	printf("\n");

	/*int count1 = 0;
	BTreeSize(tree,&count1);
	printf("%d", count1);*/

	int count = BTreeSize(tree);
	printf("size = %d\n", count);

	int count1 = BTreeLeafSize(tree);
	printf("leaf size = %d\n", count1);

	int count2 = BTreeKLevelSize(tree, 3);
	printf("No.2 size = %d\n", count2);

	int count3 = BTreeDepth(tree);
	printf("depth = %d", count3);

	for (int i = 1; i <= 7; i++)
	{
		printf("Find:%d,%p\n",i,BTreeFind(tree, i));
	}
	BTNode* ret = BTreeFind(tree, 5);

	printf("Find:%p\n", BTreeFind(tree, 50));
	if (ret)
	{
		ret->data = 50;
	}
	printf("Find:%p\n", BTreeFind(tree, 50));

	LevelOreder(tree);
	return 0;
}