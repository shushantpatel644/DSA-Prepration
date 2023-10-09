// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// vector

void explainVector(){
    vector<int> v;
    
    // v.push_back(1);
    // v.emplace_back(2);
    // cout<<v[1];
    // pair of vector
    // vector<pair<int,int>> vec;
    // v.push_back({1,2});
    // v.emplace_back(1,2);
    
    // decalre with size 5 of 100 (100,100,100,100,100)
    // vector<int> v(5,100);
    
    // decalre with size 5 of 0 (0,0,0,0,0)
    // vector<int> v(5);
     
    // vector<int> v1(5,20);
    // vector<int> v2(v1); //copy of vector v1 
    
    
    // vector<int> :: iterator it = v.begin();
    // it++;
    // cout<<*(it)<<" ";
    
    // it = it+2;
    // cout<<*(it)<< " ";
    
    // vector<int>:: iterator it = v.end();
    // vector<int> :: iterator it = v.rend();
    // vector<int> :: iterator it = v.rbegin();
    
    // cout<<v[0]<<" "<<v.at(0);
    // cout<<v.back()<<" ";
    
    // for =(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    
    // for(auto it = v.begin; it!= v.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // for(auto it:v){
    //     cout<< it<<" ";
    // }
    //{10,20,12,23}
    // v.erase(v.begin()+1);
    // {10,20,12,23,35}
    // v.erase(v.begin()+2,v.begin()+4); //{10,20,35}[start,end]


    // insert funtion
    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100};
    v.insert(v.begin()+1,2,10); //{300.10,10,10,100,100}

    vector<int> copy (2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    //{10,20}
    cout<<v.size(); //2
    // {10,20}
    v.pop_back();//{10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); //v1->{30,40}, v2->{10,20}
    v.clear();//erase the entire vector
    cout<<v.empty(); 
}
// pairs
void explainPair(){
    // pair<int,int> p={1,3};
    
    // cout<<p.first<<" "<<p.second;
    
//     pair<int,pair<int,int>> p = {1,{4,3}};
// cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
    
    // pair<int,int> arr[]= {{1,2},{2,5},{5,1}};
    
    // cout<<arr[1].second;
}
// list 
void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();
    //rest funtions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int>dq;

    dp.push_back(1);
    dp.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    //rest funtions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}
void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top(); //print 5 "** st[2] is invalid **"
    st.pop(); //st looks like {3,3,2,1}
    cout<<st.top(); //3
    cout<<st.size(); //4

    cout<<st.empty(); //false

    stack<int> st1,st2;
    st1.swap(st2);
    //push pop top all operations in constant time
}

//queue
void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5 //{1,2,9}
    cout<<q.back(); //9

    cout<<q.front();//1
    q.pop();//{2,9}

    cout<<q.front(); //2
    //all operations in constant time
    }

void explainPQ(){
    // Maxium Heap(max heap)
    priority_queue<int> pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top(); //print 10

    pq.pop();//{8,5,2}
    cout<<pq.top(); //8 
    size swap empty funtion same as others

    // Minium Heap(min heap)

    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(5); //{5}
    pq.push(2); ///{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<<pq.top(); //print 2

//     push -> log(n)
//     pop -> log(n)
//     top -> o(1)
}

void explainSet(){
    set<int> st;
    st.insert(1); //{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2} 
    st.insert(4);//{1,2,4}
    st.insert(3); //{1,2,3,4}

    //Funtionality of insert in vector can be used also , that
    //only increase efficiency 

    //begin(), end() , rbegin(), rend(), size(),
    
    
    //{1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6); //it return st.end();

    //{1,4,5}
    st.erase(5);// erase 5 // takes logarithmic time

    int cnt = st.count(1); // if it is, return 1 otherwise return 0

    auto it = st.find(3);
    st.erase(it);  //it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //after erase {1,4,5} [first,last]


    //lower_bound() and upper_bound() funtion works in the same way
    // as in vector it does

    //this is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);

    // in set every operation in log(n)
}
void explainMultiSet(){
    //everthing is same as set
    //only stores duplcate emlements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);// all 1's erased

    int cnt = ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);
    //rest all funtions same as set
}
void explainUSet(){
    unordered_set<int> st;
    //lower_bound and upper_bound funtion
    //does not works, rest all funtions are smae
    // as above, it does not stores in any
    //paritcular order it has a better complexity
    // than set in most cases, except some when collision happens
}
void explainMap(){
    map<int,int> mpp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;

    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp({2,3})=10;

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it = mpp.find(5);
    //this is the syntax
    auto it mpp.lower_bound(2);

    auto it mpp.upper_bound(3);
    //erase , swap, size, ampty , are the same as above
}

void explainMultiMap(){
    // duplcate key and sorted order
    // everthing same as map  , only it can store multiple keys
    //only mapp{key} cannot be used here
}
vpid explainUmap(){
    // same as set and unordered_set is difference
    // and it cannot cantina the duplicate  and the elemnst are not in sorted order
    // o(1)
    // in  worst case it geos to o(n)
}
void explainExtra(){
    sort(a,a+n);
    sort(v.begin(),v.end());

    sort(a+2,a+4);
    // {1,3,5,2} it will sort the arrayy 5 and 2 only
    sort(a,a+n,greater<int>);
    // greater is the temperator it sort the array in descending order
    // {1,3,5,2}
    // {5,3,2,1}

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    // sort it according to second element
    //  if second elelemnt is same, then sort
    // it according to first element but in descending

    sort(a,a+n,comp) 
    //this comp is a self written compreater and this funtion is nothing but its a boolean funtion

    // {4,1},{2,1},{1,2}

    int num =6;
    int cnt = __builtin_popcount();
    // 6 it retuns no of set (1 1 0) it return 2
    // 7 it retuns no of set (1 1 1) it return 3

    ong long num = 12345678234567;
    int cnt = __builtin_popcountll();

    // permutation
    string s= "123";

    sort(s.begin(),s.end());
    do(){
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // it finds the all permutation of a perticular string 
    // sort the first then find the permutation of string

    int maxi = *max_elemnt(a,a+n);

}
// compreator funtion

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first>p2.first) return true;
    return false;
}
 


int main() {
    // Write C++ code here
    // std::cout << "Hello world!"<<endl;
    explainPair();
    // explainVector();

    return 0;
} 