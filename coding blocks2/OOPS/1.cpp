// syntax of class to store diffrent data types

//class identifier{

    //blueprint

 //};
 //whenever we make object constructor function will form and call automatically
 #include<bits/stdc++.h>
 using namespace std;
 class car{
    public:
    string name;
    int speed;
    bool sunroof;
    char color[1000];
    void print_details(){
        cout<<endl<<endl;
    cout<<"name: "  <<name<<endl;
    cout<<"speed: " <<speed<<endl;
    cout<<"sunroof:"<<sunroof<<endl;
    cout<<"color: " <<color<<endl;
    
    } //default constructer
    car(){
        name="audi";
        speed=100;
        sunroof=true;
        //color=NULL;
        strcpy(color,"black");
        cout<<"car created"<<endl;
    }
    //constructor having argument
    car(string n,int s,bool sun,char c[]){
        name=n;
        speed=s;
        sunroof=sun;
        //color=new char[strlen(c)+1];
        strcpy(color,c);
        cout<<endl;
    }
 };
 int main(){
    car c1;
    c1.name="Audi";
    c1.speed=280;
    c1.sunroof=true;
    char red[]="red";
    strcpy(c1.color,red);   //character array me equal to operator lgaakr
                            //initialise nhi kr skta copy hi krni pdegi-
    //printing the value
    // cout<<"name: "<<c1.name<<endl;
    // cout<<"speed: "<<c1.speed<<endl;
    // cout<<"sunroof: "<<c1.sunroof<<endl;
    // cout<<"color: "<<c1.color<<endl;
  c1.print_details();
  car c2;
  c2.print_details();
  //car c3;
  char green[]="green";
  car c3("bmw",200,true,green);
  c3.print_details();


 
 return 0;
 }