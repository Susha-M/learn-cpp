#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

  /*Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".
  There are a few simple rules for translating text to whale language:
  There are no consonants. Only vowels excluding the letter y.
  The u‘s and e‘s are extra long, so we must double them. */

  string word;
  //cin>>word;
  word="turpentine and turtles";
  cout<<"\n";
  vector <char> whale;
  for (char a :word){
      cout<<a<<endl;
      if (a=='a' || a=='i' || a=='o'){
            whale.push_back(a); }
      else if (a=='u' || a=='e'){
            whale.push_back(a);
      whale.push_back(a); }
  }

  for (char a: whale){
        cout<<a;

  }


}
