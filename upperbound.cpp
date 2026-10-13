#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> &arr, int target) { 	
	int lo = 0, hi = arr.size() - 1; 
    int res = arr.size();
  	
  	while(lo <= hi) {
      	int mid = lo + (hi - lo)/2;
      	
        // If arr[mid] > target, then arr[mid] can be
        // the upper bound so store mid in result and
        // search in left half, i.e. arr[lo...mid-1]
      	if(arr[mid] > target) {
          	res = mid;
            hi = mid - 1;
        }
        
        // If arr[mid] <= target, then upper bound 
        // cannot lie in the range [lo...mid], so 
        // search in right half, i.e. arr[mid+1...hi]
      	else
            lo = mid + 1;
    }
  	return res;
}

int main() {
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int target = 11;
  	
    cout << upperBound(arr, target);
    return 0;
}