using namespace std;
int a[10000];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int flag=0;
        for(int i=1;i<=n;i++){
            int k = x - a[i];
            int left = i+1;
            int right = n;
            while(left<right){
                if(a[left]+a[right]>k)
                    right--;
                else if(a[left]+a[right]<k)
                    left++;
                else{
                    flag=1;
                    break;
                }

            }
            if(flag){
                break;
            }
        }
        if(flag)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
       // return 0;
    }
}
