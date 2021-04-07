#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool order(pair<int,int> &a1, pair<int,int> &a2){
    if(a1.first==a2.first) return (a1.second<a2.second);
    else return (a1.first>a2.first);
}

int main() {
	//code
	int n,k;
	cin>>n;
	for(int it = 0;it<n;it++){
	    cin>>k;
	    unordered_map<int,int> m;
	    int x;
	    for(int i=0;i<k;i++){
	        cin>>x;
	        if(m.find(x)==m.end()) m[x] = 1;
	        else {
	            m[x] = m[x]+1;
	        }
	    }
	    vector<pair<int,int>> s;
	    unordered_map<int,int>::iterator mi = m.begin();
	    for(;mi!=m.end();mi++){
	        s.push_back(make_pair(mi->second,mi->first));
	    }
	    sort(s.begin(),s.end(),order);
	    for(int i=0;i<s.size();i++){
	        while(s[i].first>0) {
	            cout<<s[i].second<<" ";
	            s[i].first--;
	        }
	    }
	    cout<<endl;
	}
	
	return 0;
}