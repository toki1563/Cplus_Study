#include <iostream>

#if false

// 定数と参考条件演算子
int main()
{
	// 定数
	// 初めに設定した数字のみ使用可能
	// 後に代入は不可
	const int a = 5;

	// 参考条件演算子
	bool isChack = false;
	int a = 0;
	isChack ? a = 1 : a = 5;
	std::cout << a << std::endl;

	return 0;
}



#elif true

// 列挙型
enum class Categry
{
	Value1,
	Value2,
	Value3 = 100,
	Value4,
};

int main()
{
	Categry cat = Categry::Value3;

	std::cout << static_cast<int>(cat) << std::endl;
}

#endif