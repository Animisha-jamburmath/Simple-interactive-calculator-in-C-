#include <iostream>
#include <algorithm> 
#include <string>    
using namespace std;
int x, y;
string a, op;
int main()
{
    cout<<" hey there, I am your simple caluclator "<<endl;
    cin>>a;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    if (a=="hi" ){
        cout<<" give me two values "<<endl;
        cin>>x>>y;
        cout<<" what operation do you want to perform ? "<<endl;
        cin>>op;
        transform(op.begin(),op.end(),op.begin(),::tolower);
        if (op==op){
            if(op=="add"){
                cout<<"result is"<<x+y;

            }
            else if(op=="sub"){
                cout<<"result is"<<x-y;

            }
           else if(op=="mul"){
                cout<<"result is"<<x*y;

            }
            else if(op=="div"){
                cout<<"result is"<<x/y;
            }
            else{
                cout<<"invalid operation ,please try operation keywords like add ,sub,mul,div"<<endl;
            }
        }
    }
}
