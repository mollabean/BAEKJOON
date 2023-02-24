#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* left;
	struct Node* right;
}Node;

Node* CreateNode(int value) {
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->data = value;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}

void Postorder(Node* node) {
	if (node == NULL)
		return;
	Postorder(node->left);
	Postorder(node->right);
	printf("%d", node->data);
	printf("\n");
}

Node* Insert(Node* node, int value) {
	if (node == NULL)
		return CreateNode(value);
	else if (node != NULL) {
		if (node->data >= value) {
			node->left = Insert(node->left, value);
			return node;
		}

		if (node->data < value) {
			node->right = Insert(node->right, value);
			return node;
		}
		return NULL;
	}
}

int main() {
	int data;
	Node* Temp = NULL;
	while (scanf("%d", &data) != EOF) {
		Temp = Insert(Temp, data);
	}
	Postorder(Temp);
	return 0;
}
