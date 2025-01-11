# include<iostream>
using namespace std;
int bt() {
    int n, i,j;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
        cout<<" * ";
    }
    cout<<endl;
    }
  return 0;  
}
int b() {
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<"* ";
        }
        for(int k=0; k<2*(n-i)-2 ; k++){
            cout<<"  ";
        }
        for(int j=0 ; j<=i ; j++){
            cout<<"* ";
        }
        cout<<endl;
        }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=n-i-1; j++){
            cout<<"* ";
        }
        for(int k=0; k<(2*i) ; k++){
            cout<<"  ";
        }
        for(int j=0 ; j<=n-i-1 ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int ep() {
    int n,i,j,k;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<n-i;k++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
    }
  return 0;  
}
int hb() {
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
       for(int i=0 ; i<n ; i++){
        if(i<2){
        for(int j=0 ; j<=i ; j++){
            cout<<"* ";
        }
        for(int k=0; k<2*(n-i)-2 ; k++){
            cout<<"  ";
        }
        for(int j=0 ; j<=i ; j++){
            cout<<"* ";
        }
        }
        else{
            cout<<"* ";
        for(int j=0 ; j<=i-2 ; j++){
            cout<<"  ";
        }
            cout<<"* ";
        for(int k=0; k<2*(n-i)-2 ; k++){
            cout<<"  ";
        }
            cout<<"* ";
        for(int j=0 ; j<=i-2; j++){
            cout<<"  ";
        }
            cout<<"* ";
        }
        cout<<endl;
        }
    for(int i=0 ; i<n ; i++){
        if(i>n-3){
        for(int j=0 ; j<=n-i-1; j++){
            cout<<"* ";
        }
        for(int k=0; k<(2*i) ; k++){
            cout<<"  ";
        }
        for(int j=0 ; j<=n-i-1 ; j++){
            cout<<"* ";
        }
        }
        else{
            cout<<"* ";
        for(int j=0 ; j<=n-i-3 ; j++){
            cout<<"  ";
        }
            cout<<"* ";
        for(int k=0; k<2*i ; k++){
            cout<<"  ";
        }
            cout<<"* ";
        for(int j=0 ; j<=n-i-3; j++){
            cout<<"  ";
        }
            cout<<"* ";
        }
        cout<<endl;
    }
}
int hd() {
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){
for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        cout<<"* ";
        if( i !=0){
        for(int j=0;j<2*i-1;j++){
            cout<<"  ";
    } cout<<"* ";
    }
    cout<<endl;
    }
    for(int i=n-2;i>=0;i--){

    for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        cout<<"* ";
        if( i !=0){
        for(int j=2*i-1;j>0;j--){
            cout<<"  ";
    } cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}
int  hs(){
    int n;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(int i=0;i<n;i++){

        if(i==0 || i==n-1){
        for(int j=0; j<n ; j++){
            cout<<"* ";
         }
        }
        else if(0<i<n-1){
            cout<<"* ";
        for(int j=0 ; j<n-2 ; j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}
int ht() {
    int n,i,j,k;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<n-i;k++){
            cout<<"  ";
        }
        cout<<"* ";
        if( i !=0){
        for(j=0;j<2*i-1;j++){
            cout<<"  ";
    } cout<<"* ";
    }
    cout<<endl;
    if(i==n-2){
        break;
    }
    }
    cout<<"  ";
    for(i=0;i<2*n-1;i++){
        cout<<"* ";
    }
  return 0;  
}
int ip() {
    int n,i,j,k;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<=i;k++){
            cout<<"  ";
        }
        for(j=0;j<n-i;j++){
        cout<<"* ";
        }
        for(j=0;j<n-i-1;j++){
            cout<<"* ";
    }
    cout<<endl;
    }
  return 0;  
}
int ibt() {
    int n,i,j,k;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        //for spaces
        for(k=0;k<=i;k++){
            cout<<"  ";
        }
        
        for(j=0;j<n-i;j++){
        cout<<"* ";
    }
    cout<<endl;
    }
  return 0;  
}
int it() {
    int n,i,j,k;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        //for sapces
        for(k=0;k<n-i-1;k++){
            cout<<"  ";
        }
        //for stars
        for(j=0;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
    }
  return 0;  
}
int p() {
    int n,i,j,k;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(k=0;k<n-i;k++){
            cout<<"  ";
        }
        for(j=0;j<=i;j++){
        cout<<"* ";
        }
        for(j=0;j<=i-1;j++){
            cout<<"* ";
    }
    cout<<endl;
    }
  return 0;  
}
int s() {
    int n,i,j;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cout<<" * ";
    }
    cout<<endl;
    }
  return 0;  
}
int t() {
    int n,i,j;
    cout<<"enter the number of rows : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
        cout<<" * ";
    }
    cout<<endl;
    }
  return 0;  
}
int tA() {
    int n;
    char c='A';
    cout<<"enter the number of rows : ";
    cin>>n;
    for ( int i=0 ; i<n ; i++) {
        for( int j=0 ; j<=i ; j++){
        cout<<c;
        c++;
        }
        cout<<endl;
    }
    return 0;
}
    int main(){
        int n,x;
    cout<<" backward triangle pattern : 1 "<<endl;
    cout<<" butterfly pattern : 2 "<<endl;
    cout<<" easy pyramid pattern : 3"<<endl;
    cout<<" hollow butterfly pattern : 4 "<<endl;
    cout<<" hollow diamond patttern: 5"<<endl;
    cout<<" hollow square pattern : 6"<<endl;
    cout<<" hollow triangle pattern : 7"<<endl;
    cout<<" inverted pyramid pattern : 8"<<endl;
    cout<<" inward backward triangle pattern : 9"<<endl;
    cout<<" inward triangle pattern : 10"<<endl;
    cout<<" pyramid pattern : 11"<<endl;
    cout<<" square pattern : 12"<<endl;
    cout<<" triangle pattern : 13"<<endl;
    cout<<" triangle using alphabet pattern : 14"<<endl;
    cout<<"enter appropriate no. for pattern : ";
    cin>> x ;
    if(x==1){
        bt();
    }
    else if (x==2)
    {
      b();  
    }
    else if (x==3)
    {
        ep();
    }
    else if (x==4)
    {
        hb();
    }
    else if (x==5)
    {
        hd();
    }
    else if (x==6)
    {
        hs();
    }
    else if (x==7)
    {
        ht();
    }
    else if (x==8)
    {
        ip();
    }
    else if (x==9)
    {
        ibt();
    }
    else if (x==10)
    {
        it();
    }
    else if (x==11)
    {
        p();
    }
    else if (x==12)
    {
        s();
    }
    else if (x==13)
    {
    
        t();
    }
    else if (x==14)
    {
         tA();
        
    }
    else{

    cout<<"error";
    }

    return 0;
}