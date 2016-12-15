void insertion_sort (std::vector<int>& A) {
    for (int j=1; j<A.size(); ++j) {
	int key = A[j];
	int i=0;
	for (i=j-1; i>=0 && A[i]>key; --i)
	    A[i+1] = A[i];
	A[i+1] = key;
    }
}
