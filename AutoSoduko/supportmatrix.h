#pragma once

#include "gridmatrix.h"
#include "zmatrix.h"
#include "sodukomatrix.h"
#include <set>

// 使用std::set<int> 来构造辅助矩阵
class SupportMatrix :public ZMatrix<set<int> >
{
protected:
	// 以传入的vector向量对辅助矩阵中(x, y)的集合进行收缩，返回被删减的元素数量
	int converByVector(const int &x, const int &y, const vector<int> & converMatrialVector);

	// 以传入的数字number对(x, y)上的集合进行收缩，返回被删减的元素数量
	int converSetByNumber(const int &x, const int &y, const int &number);

	// 以传入的数字number对第i行上的所有集合进行收缩，返回被收缩的集合数量
	int converRowByNumber(const int &i, const int &number);
	
public:
	// 默认构造函数，默认构造完成之后矩阵中每一个位置的集合都是全集
	SupportMatrix();

	// 使用传入的soduko矩阵对辅助矩阵进行收缩，返回被操作的集合数量
	int converBySoduko(const SodukoMatrix& sdkM);

	// 使用传入的数字对辅助矩阵进行收缩，返回被操作的集合数量
	int converByNumber(const int & x, const int & y, const int & number);

	virtual ~SupportMatrix();
};