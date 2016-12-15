#include<iostream>
#include<vector>
#include"insertion_sort.cpp"

template <typename Type>
std::ostream& operator<< (std::ostream& output, const std::vector<Type>& data) {
    output << "[";
    auto iter = data.begin();
    if (iter != data.end()) {
	output << *iter;
	++iter;
	for (; iter!=data.end(); ++iter) {
	    output << ',' << *iter;
	}
    }
    output << "]";
}

int main () {
    
    std::vector<int> A{4,6,3,1,7,9,8};
    std::vector<int> B{1};
    std::vector<int> C{};

    std::cout << "A: " << A << std::endl;
    insertion_sort(A);
    std::cout << "A: " << A << std::endl;
    
    std::cout << "B: " << B << std::endl;
    insertion_sort(B);
    std::cout << "B: " << B << std::endl;

    std::cout << "C: " << C << std::endl;
    insertion_sort(C);
    std::cout << "C: " << C << std::endl;

    return 0;
}
