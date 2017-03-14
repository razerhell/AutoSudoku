#include "sodukomatrix.h"
#include "gridmatrix.h"

// 输出soduko中的数据内容
void printSodukoInt(const SodukoMatrix& sdkM)
{
	for (int i = 0; i < 9; ++i)
	{
		if ( 3 == i || 6 == i ) printf("----------------------\n");
		for (int j = 0; j < 9; ++j)
		{
			int index = i * 9 + j;
			if ( 3 == j || 6 == j) printf(" |");
			printf(" %d", sdkM.getData()[index]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(int argc, char * argv[])
{
	GridMatrix gm;
	SodukoMatrix sm;

	// 构造一个辅助计算数组


	printSodukoInt(sm);

	system("pause");
	return 0;
}