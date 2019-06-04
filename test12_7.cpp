
#include<iostream>
#include<memory>
#include<string>
#include<vector>

using namespace std;

shared_ptr<vector<int>> fun()  //创建一个返回智能指针的函数，指针指向vector<int>
{
	return make_shared<vector<int>>();
}

shared_ptr<vector<int>> get_v(shared_ptr<vector<int>> sp) //函数传入一个vector<int>智能指针，从标准输入读取数据后存入指针指向对象
{
	//shared_ptr<vector<int>> p_int;
	int temp;
	while (cin >> temp)
	{
		(*sp).push_back(temp);
	}
	return sp;
}

void print_v(shared_ptr<vector<int>> sp)  //打印指针指向的对象
{
	for (int n : (*sp))
		cout << n << endl;
}


int main()
{
	print_v(get_v(fun()));

    return 0;
}

