#include <iostream>

using namespace std;

int binSearch(const int *Array,int start,int end,int key)
{
        int left,right;
        int mid;
        left=start;
        right=end;
        while(left<=right)
             
        {
                    mid=(left+right)/2;
                    if(key==Array[mid])  return mid;
                    else if(key<Array[mid]) right=mid-1;
                    else if(key>Array[mid]) left=mid+1;
                 
        }
        return -1;
}

int main()
{

	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	cout <<binSearch(a,0,9,1)<<endl;
	
}
