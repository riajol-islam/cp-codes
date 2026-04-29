 #include<bits/stdc++.h>
using namespace std;
int bsearch(std::vector<int>arr,int st,int end,int target){
	if(st>end) {
		return -1;
	}
	int mid= (st+end)/2;
	if(arr[mid]==target){
		return mid;
	}else if(arr[mid]>target){
		return bsearch(arr,0,mid-1,target);
	}
	else{
		return bsearch(arr,mid+1,end,target);
	}
}
int main(){
	vector<int>arr={1,3,4,6,7,9,11,12,14,14};
	int target=9;
	cout<<bsearch(arr,0,arr.size()-1,target);
}