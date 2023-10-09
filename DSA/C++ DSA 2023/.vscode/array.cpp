// #include<iostream>
// using namespace std;


// // int fun(int n){
// //     cout<< n*(n+1) /2<<endl;
// //     return 0;
// // }

// int fun2(int n){
//   int sum=0;
//     for(int i=0;i<=n;i++)
//     sum=sum+i;
//     return sum;
// }

// int main(){
//     int n=10;
//     int result = fun2(n);

// }

#include <iostream>

int fun2(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int result = fun2(num);
    std::cout << "The sum of numbers from 0 to " << num << " is: " << result << std::endl;

    return 0;
}
