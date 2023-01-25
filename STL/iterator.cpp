#include <bits/stdc++.h>
using namespace std;

vector<int>::iterator it = v.begin();
it++;
// {20,10,15,6,7}
// 20
cout << *(it) << "";
// you print the memeory not an element
// it print 10
it = it + 2;
cout << *(it) << "";
// it print 6

vector<int>::iterator it = v.end();
vector<int>::iterator it = rend();
vector<int>::iterator it = v.rbegin();

cout << v[0] << " " << v.at(0);
// {20,10,15,5,7} v[0] = 20 and v.at(0) = 20
cout << v.back() << "";

for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << "";
}
for (auto it = v.begin(); it != v.end(); it++)
{
    cout << *(it) << "";
}

for (auto it : v)
{
    cout << it << "";
    // {10,20,20} it will print all the elemnts
}
// auto means it will asign automatically i:e -: auto a= "raj" it will assign as a string automatically

// deletion of vector

// 1st method
// {10,20,12,23} v pointing 20 coz v.begin()+1 ..
v.erase(v.begin() + 1);

// 2nd method
// {10,20,12,23,35}
v.erase(v.begin() + 2, v.begin() + 4);
// after deletion array will look like this=  {10 20 35}

// insert funtion

vector<int> v(2, 100);          //{100,100};
v.insert(v.begin(), 300);       //{300,100,100};
v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100};

vector<int> copy(2, 50);                       //{50,50}
v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

//{10,20}
cout << v.size(); // 2

//{10,20}
v.pop_back(); //{10}

// v1-> {10,20}
// v2-> {30,40}
v1.swap(v2); // v1-> {30,40} , v2->{10,20}

v.clear(); // erases the entire vector

cout << v.empty();
