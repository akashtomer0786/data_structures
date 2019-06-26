#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    if(s1.size()!=s2.size()){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    int n = s1.length();
	    int *cnt  = new int[n];
	    memset(cnt,0,sizeof(cnt));
	    for(int i=0;i<s1.length();i++){
	        cnt[s1[i]]++;
	        cnt[s2[i]]--;
	    }
	    for(int i=0;i<s1.length();i++){
	        if(cnt[i]!=0){
	            cout<<"NO"<<endl;
	            continue;
	        }
	    }
	    cout<<"YES"<<endl;
	    
	}
	return 0;
}
