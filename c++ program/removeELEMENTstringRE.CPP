//REMOVE THE CHARACTER IN A STRING USING RECURSION
# include<bits/stdc++.h>
  using namespace std ;
  char removeindex(char str[]){
    if(str[0]=='\0'){      //BASE CASE
        return 0;
    }if(str[0]!='f'){      //IF X IS NOT PRESENT AT ZEROTH INDEX THEN
                           //CALL THE FUNCTION TO +1
     removeindex(str+1);
    }
    if (str[0]=='f'){          //IF X IS PRESENT AT ZEROTH INDEX
         int i;               // THEN SHIFT THE FIRST INDEXT TO ZEROTH
        for( i=1;str[i]!='\0';i++){//AND SO ON
            str[i-1]=str[i];
        }
        str[i-1]='\0';      
        removeindex(str);  //NOW HERE WE ARE CALLING FUNCTION AGAIN 
    }

  }
 int main(){
    
char str[100];
cin>>str;
removeindex(str);
cout<<str;
return 0;
}