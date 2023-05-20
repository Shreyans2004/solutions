                        //shree ganeshaay namah//
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
# define ll long long int
# define scan(arr,v,w) for(int i=v;i<w;i++) cin>>arr[i];
# define print(arr,v,w) for(int i=v;i<w;i++) cout<<arr[i]<<" ";
# define tc ll t;cin>>t;  while(t--)
# define fast ios::sync_with_stdio(0);cin.tie(0);
# define endl "\n"
#define all(x) x.begin(), x.end()
#define mod  1000000007
#define dsort(a)  sort(a,a+n,greater<int>());

 int gcd (int a, int b) {
    while (b) {
        a = a % b;
        swap(a, b);
    }
    return a;
}
bool isPalindrome(string s){

	string p=s;
	reverse(p.begin(),p.end());
	if(s == p||s.length()==1){
		return true;
	}else{
		return false;
	}
}

int fact(int n){
	ll fact=1;
	for(int i=1;i<=n;i++){
		fact=(fact*i)%mod;
	}
	return fact;
}
//string c=s.substr(i,2); it takes from position i to 2 positions i.e i and i+1 

int main(){
	fast;

//***********************************************************************************************************************************************************************************************
//dry run is necessary
//see corner cases
tc{
	string s;
cin>>s;
set<char>setc;
for(int i=0;i<s.length();i++){

		setc.insert(s[i]);
	
}
if(setc.size()==1){
	cout<<"-1"<<endl;
}else{
		cout<<s.length()-1<<endl;
}
}
//***********************************************************************************************************************************************************************************************
		return 0;	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
