#include<iostream>
#include<vector>
#include"insertion_sort.cpp"
#include"selection_sort.cpp"

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

    void (*sortings[2]) (std::vector<int>& A);
    sortings[0] = insertion_sort;
    sortings[1] = selection_sort;

    for (auto sorting : sortings) {
	
	std::vector<int> A{4,6,3,1,7,9,8};
	std::vector<int> B{1};
	std::vector<int> C{};

	std::cout << "A: " << A << std::endl;
	sorting(A);
	std::cout << "A: " << A << std::endl;
	
	std::cout << "B: " << B << std::endl;
	sorting(B);
	std::cout << "B: " << B << std::endl;

	std::cout << "C: " << C << std::endl;
	sorting(C);
	std::cout << "C: " << C << std::endl;

    }

    return 0;
}
