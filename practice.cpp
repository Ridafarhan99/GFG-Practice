#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> mp;
	unordered_map<int, int> :: iterator it;
	
	int len;
	cin >> len;
	int arr[len]={1,1,2,2,3,3,7,6,5,4};
	for(int i=0;i<len;i++){
		int val = arr[i];
		if(!mp[val]){
			mp[val]=1;
		}else{
			mp[val]+=1;
		}
	}
	int count=0;
	for(it=mp.begin();it!=mp.end();it++){
		if(it->second==1){
			cout << it->first << " ";
		}
	}
	return 0;
}
