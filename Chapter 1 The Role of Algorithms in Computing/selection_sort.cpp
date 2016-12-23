void selection_sort (std::vector<int>& A) {
    std::cout<<A.size()<<std::endl;
    for (int j=0; j<A.size()-1; ++j) {
	int small = j;
	std::cout<<(j<A.size()-1)<<std::endl;
	std::cout<<j<<std::endl;
	std::cout<<(A.size())<<std::endl;
	std::cout<<(A.size()-1)<<std::endl;
    return;
	for (int i=j+1; i<A.size(); ++i)
	    if (A[i]<A[small])
		small = i;
	int value = A[small];
	A[small] = A[j];
	A[j] = value;
    }
}
