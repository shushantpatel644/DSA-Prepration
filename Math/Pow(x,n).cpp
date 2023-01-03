// class Solution {
// public:
//     double myPow(double x, int n) {
//         //recursive
//         if(n==0) return 1;
        
//         if(n<0){
//             n=abs(n);
//             x=1/x;
//         }
//         if(n%2==0) return myPow(x*x,n/2);
//         else return x*myPow(x*x,n/2);
        
// //         long int newN = n;
// //         int isNeg = (n<0) ? (newN *= -1 ,1):0;
// //         double ans = 1.0;
         
// //         while(newN != 0){
// //             if(newN%2){
// //                 ans *= x;
// //                 newN -= 1;
// //             }
// //             else{
// //                 x*=x;
// //                 newN /= 2;
// //             }
// //         }
// //         if(isNeg){
// //             ans = 1.0/ans;
// //         }
// //         return ans;
//     }
// };