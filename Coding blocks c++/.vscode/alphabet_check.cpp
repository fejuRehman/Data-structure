//write a program which takes and character input and check whether a
//character is upper case and lower case
# include<iostream>
  using namespace std ;
 int main(){
    cout<<"enter only  character";
    char ch;
    cin>>ch;
    if (ch>=65 and ch<=90){
        cout<<" its a upper case character"<<endl;
    }
    else if(ch>90 and ch<=122){
        cout<<"its a lower case character"<<endl;
    }
    else{
        cout<<"you have entered wrong input";
    }


    //METHOD 2
if(islower(ch)){
    cout<<"lowercase";
}
else if(isupper(ch)){
    cout<<"UPPERCASE";
}


return 0;
}