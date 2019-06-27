class Solution {
public:
	double findMedianSortedArrays(vector<int>& b, vector<int>& a) {
		int n = b.size(), m = a.size();
		if (m > n)return findMedianSortedArrays(a, b);
		int imin = 0, imax = m;
		int mid = (m + n + 1) / 2;
		int max_of_left, min_of_right;
        int i,j;
		while (imin <= imax) {
			 i = (imin + imax) / 2; 
				 j = (m + n + 1) / 2 - i;
			if (i<m and b[j - 1]>a[i])imin = i + 1;
			else if (i > 0 and a[i - 1] > b[j])imax = i - 1;
			else {
			    
				if (i == 0)max_of_left = b[j - 1];
				else if (j == 0)max_of_left = a[i - 1];
				else max_of_left = max(a[i - 1], b[j - 1]);
				break;
			}
				
			}
            if ((m + n) % 2 == 1)
					return max_of_left;
			if (i == m)min_of_right = b[j];
			else if (j == n)min_of_right = a[i];
			else min_of_right = min(a[i], b[j]);
			return (max_of_left + min_of_right) / 2.0;
		

	}
};
