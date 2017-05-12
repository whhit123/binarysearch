#include <iostream>

using namespace std;

void Quick(int* A,int start,int end) {
    if (start >= end) return;
    else {
        int i = start,j = end;
        int base = A[i];
        while (i < j) {
            while (i < j && A[j] > base) j--;
            if (i < j) {
                A[i] = A[j];
                i++;
            }
            while (i < j && A[i] < base) i++;
            if (i < j) {
                A[j] = A[i];
                j--;
            }
        }
        A[i] = base;
        Quick(A,start,i - 1);
        Quick(A,i + 1,end);
    }
}

int* quickSort(int* A, int n) {
    // write code here
    Quick(A,0,n-1);
    return A;
}

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
	int b[10] = {10,9,8,7,6,5,4,3,2,1};
	int *c = quickSort(b,10);
	cout<<binSearch(c,0,9,1);
	
	
}
