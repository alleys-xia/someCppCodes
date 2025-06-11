#include <vector>
#include <algorithm> //include std::sort
#include <iostream>
#include <cmath>

//默认升序排列
void func1() {
	std::vector<int> v= {5,2,9,1,5,6};
	std::sort(v.begin(), v.end());
	for(int x:v) {
		std::cout<<x<<" ";
	}
}

//降序排列
void func2() {
	std::vector<int> v= {5,2,9,1,5,6};
	std::sort(v.begin(), v.end(), std::greater<int>());
	for(int x:v) {
		std::cout<<x<<" ";
	}
}

//自定义排序
bool abs_compare(int a, int b) {
	return std::abs(a)>std::abs(b)
}

void func3() {
	std::vector<int> v= {5,2,9,1,5,6};
	std::sort(v.begin(), v.end(), abs_compare);
	for(int x:v) {
		std::cout<<x<<" ";
	}
}

//标准库的比较器（如 std::greater<int>()）、自定义函数对象、函数指针、lambda 表达式都可以作为第三个参数。
