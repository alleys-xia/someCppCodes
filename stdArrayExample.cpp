#include <iostream>
#include <array>
#include <algorithm>

int main() {
	std::array<int,5> myArray= {10,20,30,40,50};
	//获取大小
	std::cout<<"Size:"<<myArray.size()<<std::endl;
	try{
		std::cout<<myArray.at(2)<<std::endl;
		std::cout<<myArray.at(10)<<std::endl;
	}catch(std::out_of_range& e) {
		std::cerr<<"Error: "<<e.what()<<std::endl;
	}
	std::sort(myArray.begin(), myArray.end(), [](int a,intb){return a<b});
	for(int value:myArray) {
		std::cout<<value<<" ";
	}
	return 0;
}