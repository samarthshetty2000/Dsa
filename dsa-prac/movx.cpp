  #include<iostream>
  #include<string>
  using namespace std;
  string movx(string s)
  {
      if(s.length()==0){
          return "";

      }
      char ch=s[0];
      string ans=movx(s.substr(1));
      if(ch=='x'){
          return(ans + ch);
      }
      return(ch + ans);
  }

  int main(){
      string a="xxxxxa";
      cout<<movx(a);
  }