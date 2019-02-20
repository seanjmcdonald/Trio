#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
#include <vector>


bool isSmaller(int a,int b){
return a>b;
}

//void sortDescending(int,int,int);
//void swap(int&,int&);

int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

    std::vector<int> vec;
    vec.push_back(numA);
    vec.push_back(numB);
    vec.push_back(numC);
 // sortDescending(numA, numB, numC);
    sort(vec.begin(),vec.end(),isSmaller);
  
  cout<<"From greatest to least, they are: ";
  
    for(int i =0;i<(int)vec.size();i++){
        cout<<vec[i]<<' ';
}   
cout<<'\n';
  return 0;
}
/*
void sortDescending(int first, int second, int third)
{
  if( first < third )
  {
    swap(first,third);
  }
if(second <third){
swap(second,third);
}
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
    if( first < third )
  {
    swap(second,third);
  }
}

void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
*/
