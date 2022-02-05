#include<iostream>
using namespace std;
int  main(){
    int n,m;
    cout<<"enter the value of n:  "<<endl;
    cin>>n;
    cout<<"enter the value of m:  "<<endl;
    cin>>m;
    cout<<"enter the elements: "<<endl;
    int i,j;
    int arr[n][m];
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix: "<<endl;
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"   "<<arr[i][j];
        }
        cout<<"\n";
    }
 //int p,q;
   // cout<<"enter the value of n:  "<<endl;
   // cin>>p;
   // cout<<"enter the value of m:  "<<endl;
   // cin>>q;
   cout<<"enter the elements: "<<endl;
   int ar[n][m];
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>ar[i][j];
        }
    }
    cout<<"matrix: "<<endl;
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"   "<<ar[i][j];
        }
        cout<<"\n";
    }
    int sum[n][m];
    for( i=0;i<n;i++){
        
        for(j=0;j<m;j++){
           sum[i][j]=arr[i][j]+ar[i][j];
        }
    }    
 cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == m- 1)
                cout << endl;
        }

return 0;

}







