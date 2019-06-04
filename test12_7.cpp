
#include<iostream>
#include<memory>
#include<string>
#include<vector>

using namespace std;

shared_ptr<vector<int>> fun()
{
	return make_shared<vector<int>>();
}

shared_ptr<vector<int>> get_v(shared_ptr<vector<int>> sp)
{
	//shared_ptr<vector<int>> p_int;
	int temp;
	while (cin >> temp)
	{
		(*sp).push_back(temp);
	}
	return sp;
}

void print_v(shared_ptr<vector<int>> sp)
{
	for (int n : (*sp))
		cout << n << endl;
}


int main()
{
	print_v(get_v(fun()));

    return 0;
}

