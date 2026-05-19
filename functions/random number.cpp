#include <iostream>
using namespace std;

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  int the_amazing_random_number=rand()%10;
  cout<<the_amazing_random_number;
  return 0;

  
  
}
