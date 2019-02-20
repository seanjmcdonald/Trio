#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
#include <vector>


//comapre function that will make a the larger number and b the smaller
bool isSmaller(int a,int b){
return a>b;
}


//A small program to order in descending order
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;


    std::vector<int> vec;
    vec.push_back(numA);
    vec.push_back(numB);
    vec.push_back(numC);
    sort(vec.begin(),vec.end(),isSmaller);
  
  cout<<"From greatest to least, they are: ";
  
    for(int i =0;i<(int)vec.size();i++){
        cout<<vec[i]<<' ';
}   
cout<<'\n';
  return 0;
}
