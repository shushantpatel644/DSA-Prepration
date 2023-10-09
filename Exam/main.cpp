#include

{
for(int i=0;i<N;i++){
    work[i]-=(i+1);
}
sort(work.begin(),work.end());
int m = work[N/2];
long long count=0;
for(int i=0;i<N;i++){
    count +=abs(work[i]-m);
}
return count; 
25
}
