import java.util.*;
class binary
{
public static void main(String args [])
{
int low=0,high=4,mid;
int arr[]={10,15,20,30,40};
int key=20;
while(low<=high)
{
mid=(low +high)/2;
if(arr[mid]==key)
{
System.out.println("element found at position"+mid);

break; 
}
else if (arr[mid]>key)
{
high=mid-1;
}
else if (arr[mid]<key)
{
low=mid+1;}

System.out.println("element not found in the array");
}}}