// STL ::iterators are nothing but pointers that could point to 
// Memory addreses of STL containers. We should always use them 
// Whenever we're working with containers as they are rigorously 
// tested to reduce execution time. 

#include <iostream>
#include <vector>
#include <array>

int main() {
	std::vector <int> myVec {1, 3, 5, 7, 9 }; 	
	std::vector <int> secVec {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	std::array <int, 5> myArr  {2, 4, 6, 8, 10};
	std::array <int, 5> secArr {1, 3, 5, 7, 9}; 

	std::array <int, 5>::iterator arrIt;  // an stl::array  iterator 
	std::vector <int>::iterator vecIt;	  // an stl::vector iterator 
	
	std::cout << "For the First Array" << std::endl; 
	for (arrIt = myArr.begin(); arrIt < myArr.end(); arrIt++)
		std::cout << *arrIt << std::endl; 

	std::cout << "\nFor the Second Array" << std::endl; 
	for (arrIt = secArr.begin(); arrIt < secArr.end(); arrIt++)
		std::cout << *arrIt << std::endl; 

	std::cout << "\nFor the first vector" << std::endl;  
	for (vecIt = myVec.begin(); vecIt < myVec.end(); vecIt++)
		std::cout << *vecIt << std::endl; 

	std::cout << "\nFor the Second Vector: " << std::endl; 
	for (vecIt = secVec.begin(); vecIt < secVec.end(); vecIt++)
		std::cout << *vecIt << std::endl;

	return 0; 
}