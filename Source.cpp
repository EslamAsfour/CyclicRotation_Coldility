// 100% Solution
#include <vector>

std::vector<int> solution(std::vector<int> &A, int K)
{
	std::vector <int> B;
	B.resize(A.size());
	for (int i = 0, index = K; i < A.size(); i++, index = i + K)
	{
		while (index > A.size() - 1)
			index = index - A.size();

		B[index] = A[i];
	}
	return B;
}

/*
	// [ 75% ] Solution but more efficient i think

std::vector<int> solution(std::vector<int> &A, int K) 
{
	int fill = A.at(0);
	int save;
	for (int i = 0 ,index = K ; i < A.size(); i++ , index = index +K )
	{	
		while (index > A.size()-1)
			index = index - A.size();

		save = A[index];
		A[index] = fill;
		fill = save;
	}
	return A;
}
*/