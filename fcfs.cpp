#include <iostream>
using namespace std;
void Time(int proccess[],int n ,int at [], int wt[],int bt[]){
    wt[0]=0;
    int st[n];
    st[0]=at[0];
    for(int i=0;i<n;i++){
        st[i-1]+bt[i-1];
        wt[i]=at[i]-bt[i];
    }
}
void ttime(int proccess[],int n ,int bt [], int wt[],int tt[]){
   
    for(int i=0;i<n;i++){
        tt[i]=bt[i]+wt[i];
        
    }
}




 int main(){
    int n;
    string name="amme";
    cout<<"Enter the number of process ";
    cin>>n;
    int proccess[n],at[n],bt[n],wt[n],tt[n];
    int sumWt;
    for(int i=0;i<n;i++){
        proccess[i]=i+1;
        cout<<"Enter the arrval time of Proccess"<<i+1<<":";
        cin>>at[n];
         cout<<"Enter the burst time of Proccess"<<i+1<<":";
        cin>>bt[n];
    }
    Time(proccess,n,at,wt,bt); 
    ttime(proccess,n,bt,wt,tt);
    cout<<"\n\n______________________________\n\n";

    

    cout<<"proccess"<<"\t\t"<<"Arrval time"<<"\t\t"<<"Bustr time"<<"\t\t"<<"waiting time"<<"\t\t"<<"turnaround time\n";

    for(int i=0;i<n;i++){
        cout<<proccess[i]<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i]<<endl;
    }



 }