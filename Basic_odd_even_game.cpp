#include<iostream>
using namespace std;

void function(){

        cout<<"Welcome to Odd Even number checker!!"<<endl;
    while (true){
    int x;
    char y;
    cout<<"Please inter the number: ";
    cin>>x;
        if (x%2==0){
            cout<<"It is an Even number"<<endl;
        }
        else{
            cout<<"It's an Odd number"<<endl;
        }
    cout<<"Do you want to play again?\nType\"Y\" for Yes and \"N\" for No"<<endl;
    cin>>y;
    if (y =='N' or y=='n')
    {
        cout<<"Thanks for Playing!!";
        break;
    }
    }

}
int main(){
    function();
return 0;
}
