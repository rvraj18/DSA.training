// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool binarysearch(int a[],int s,int e,int key){
    if(s>e) return false;
   int  mid =s + (e-s)/2;
    if(a[mid]==key) return true;
    if(a[mid]>key){
        return binarysearch(a,s,mid-1,key);
    }
    else if (a[mid]<key) {
                return  binarysearch(a,mid+1,e,key);
    }

}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
  bool ans =binarysearch(a,0,n-1,key);
    if(ans) cout<<"present";
    else cout<<"not present";
    return 0;
}