#include <bits/stdc++.h>
using namespace std;

bool ter(int n )
{
    while(n)
    {
        int rem = n%3;
        n=n/3;
        if(rem==2)return true;
    }
    return false;
}
void fun(set<int>&st)
{
    for(int i = 3; i <=20000 ; i++)
    {
        if(ter(i))st.insert(i);
        
    }
}

void solve(set<int>&st)
{
    int n;
    cin>>n;
    int i = n;
    int cnt = 1;
    vector<int>v;
    vector<int>anss(n , 0 );
    for( i = n ; i>=1 ; i--)
    {
        if(ter(i+1))break;
        else v.push_back(i);
        
    }
    int rem = i;
    cout<<v.size()<<endl;
    int cnt = 0;
    for(int j = rem ; j>=1 ; j--)
    {
        // cout<<j<<" ";
        anss[cnt]=j;
        cnt++;
    }
    int add = rem+1;
    
    if(v.size()==1)
    {
        int f = n-1;
        while(f>=0)
        {
            if(ter(anss[f]+add) and ter(v[0]+f+1))
            {
                int k = anss[f];
                anss[f]=v[0];
                anss[n-1]=k;
            }
        }
        
    }
    
    if(v.size()==2)
    {
        if(ter(v[0]+rem+1))
        {
            cout<<v[0]<<" "<<v[1]<<" ";
            
        }
        else
        {
            cout<<v[1]<<" "<<v[0]<<" ";
            
        }
    }
    
    
    cout<<endl;
    
    
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	set<int>st;
// 	fun(st);
	while(t--)solve(st);

}
