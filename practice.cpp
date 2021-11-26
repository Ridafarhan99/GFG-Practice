#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> mp;
	unordered_map<int, int> :: iterator it;
	int len;
	cin >> len;
	for(int i=0;i<len;i++){
		int val;
		cin >> val;
		if(!mp[val]){
			mp[val]=1;
		}else{
			mp[val]+=1;
		}
	}
	int count=0;
	for(it=mp.begin();it!=mp.end();it++){
		if(it->second==1){
			count++;
		}
	}
	cout << count;
	return 0;
}
