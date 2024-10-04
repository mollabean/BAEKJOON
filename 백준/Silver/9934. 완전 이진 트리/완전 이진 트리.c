#include <stdio.h>
#include <math.h>

int treeDepth; // K를 treeDepth로 변경
int inputArray[1025]; // arr을 inputArray로 변경
int binaryTree[11][1025] = { 0, }; // tree를 binaryTree로 변경
// binaryTree[ depth ] [ idx ]
int currentIndex = 0; // idx를 currentIndex로 변경

void buildBinaryTree(int startIndex, int endIndex, int currentDepth) // find_root을 buildBinaryTree로 변경
{
    if (currentDepth == treeDepth)
    {
        return;
    }

    int midIndex = (startIndex + endIndex) / 2;
    binaryTree[currentDepth][currentIndex] = inputArray[midIndex];
    currentIndex++;

    buildBinaryTree(startIndex, midIndex - 1, currentDepth + 1);
    buildBinaryTree(midIndex + 1, endIndex, currentDepth + 1);
}

int main(void)
{
    scanf("%d", &treeDepth);

    int totalNodes = (int)pow(2, treeDepth) - 1; // num을 totalNodes로 변경
    for (int i = 0; i < totalNodes; i++)
    {
        scanf("%d", &inputArray[i]);
    }

    buildBinaryTree(0, totalNodes - 1, 0);

    for (int i = 0; i < treeDepth; i++)
    {
        for (int j = 0; j < totalNodes; j++)
        {
            if (binaryTree[i][j] != 0)
            {
                printf("%d ", binaryTree[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
