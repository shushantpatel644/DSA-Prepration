#include<bits/stdc++.h>
using namespace std;

vector<int> v;
v.push_back(1);
v.emplace_back(2); 
// it dynamically increse the size and push to in the back ..and its is faster 

vector<pair<int,int>>vec;

v.push_back({1,2});
v.emplace_back(1,2);

vector<int> v(5,100);
 //{100,100,100,100,100};

 vector<int>v(5);
//  {0,0,0,0,0};

vector<int> v1(5,20);
// {20,20,20,20,20};
vector<int>v2(v1)
// copy of v1 vector in v2 {20,20,20,20,20};
