#include<bits/stdc++.h>
#include <map> 
// #include<string>
// #include<vector>
#include <algorithm> 
#include<map>
#define ll long long
#define vl vector<ll>
#define vpl vector<pair<ll,ll>>
#define f(i,a,b) for (ll i=a;i<b;i++)
#define rf(i,b,a) for(ll i=b;i>=a;i--)
#define pb emplace_back
#define all(C) C.begin(), C.end()
#define pl pair<ll,ll>
#define F first
#define S second
#define seea(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define show(a,n) f(i,0,n) cout<<a[i]<<" "; cout<<endl;
#define tk1(a) ll a; cin>>a;
#define tk2(a,b) ll a,b; cin>>a>>b;
#define tk3(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define tk4(a,b,c,d) ll a,b,c,d; cin>>a>>b>>c>>d;
#define py cout<<"YES"<<endl;
#define pn cout<<"NO"<<endl;
#define nl cout<<'\n';
#define endl '\n'
#define mod 1000000007

#define MAXN 100001
using namespace std;
bool heapify(vector<ll>&heap,ll i,ll heapsize){
    ll leftchild = 2*i+1;
    ll rightchild = 2*i+2;
    ll largest=i;
    if(leftchild<heapsize and heap[leftchild]>heap[i]){
        largest=leftchild;
    }
    if(rightchild<heapsize and heap[rightchild]>heap[i]){
        largest=rightchild;
    }
    if(largest!=i){
        swap(heap[largest],heap[i]);
        heapify(heap,largest,heapsize);
    }
    return true;
}
bool increase_key(vector<ll>&heap,ll i,ll key){
    if(heap[i]>key){
        return false;
    }
    heap[i]=key;
    while(i>0 and heap[(i-1)/2]<heap[i]){
        swap(heap[(i-1)/2],heap[i]);
        i=(i-1)/2;
    }
}
bool decrease_key(vector<ll>&heap,ll i,ll key){
    if(heap[i]<key){
        return false;
    }
    heap[i]=key;
    heapify(heap,i,heap.size());
    return true;
}
bool build_heap(vector<ll>&heap){
    ll n = heap.size();
    for(ll i=n/2-1;i>=0;i--){
        heapify(heap,i,n);
    }
}
ll extract_max(vector<ll>heap){
    if(heap.size()==0)return -1;
    ll ans=heap[0];
    swap(heap[0],heap[heap.size()-1]);
    heap.pop_back();
    heapify(heap,0,heap.size());
    return ans;
}
void heap_sort(vector<ll>&heap){
    ll n = heap.size();
    build_heap(heap);//O(n);
    for(ll i=n-1;i>0;i--){
        swap(heap[0],heap[i]);
        heapify(heap,0,i);
    }
    return;
}
void push_elt(vector<ll>&heap,ll elt){
    if(heap.size()==0){
        heap.pb(elt);
        return;
    }
    heap.pb(elt);
    ll i=heap.size()-1;
    while(i>0 and heap[(i-1)/2]<heap[i]){
        swap(heap[(i-1)/2],heap[i]);
        i=(i-1)/2;
    }
}
void pop_elt(vector<ll>&heap){
    if(heap.size()==0){
        return;
    }
    heap.pop_back();
}
int main(){
    ll n,m,j,k,x,y,z,df,sum,l,h,w,mid,s1,s2,i,p,q,r,d,f,count,u;
    //for max heap;
    vector<ll>heap;
    ll heapsize=0;

 return 0;
}

