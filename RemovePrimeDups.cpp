// A C++ program to implement Naive
// approach to remove duplicates.
#include <bits/stdc++.h>
using namespace std;

void removeDups(vector<int>& vect)
{
	int res_ind = 1;

	// Loop invariant: Elements from vect[0]
	// to vect[res_ind-1] are unique.
	for (int i = 1; i < vect.size(); i++) {
		int j;
		for (j = 0; j < i; j++)
			if (vect[i] == vect[j])
				break;
		if (j == i)
			vect[res_ind++] = vect[i];
	}

	// Removes elements from vect[res_ind] to
	// vect[end]
	vect.erase(vect.begin() + res_ind, vect.end());
}

// Driver code
int main()
{
	vector<int> vect{ 3, 5, 7, 2, 2, 5, 7, 7 };
	removeDups(vect);
	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	return 0;
}

