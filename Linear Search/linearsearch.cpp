#include<iostream>
using namespace std;

void build_array(int * arr,int n){ // function to initialise the array
	
	for(int i=0;i<n;i++){
		cout<<"Enter the element:";	
		cin>>arr[i];
		cout<<endl;
	}


}
void show_array(int *arr,int n){  // function to display the array whenever needed
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}

}
// Function to implement Linear Search
int lsearch(int *arr,int n,int key){
	int ans=-1;				//initialise the answer with -1;
	for(int i=0;i<n;i++){	//iterating over each element;
		if(arr[i]==key){	//comparing each element with the key;
			ans=i;			//if found storing the index
		}
	}
	return ans;				//returning the answer


}

int main(int argc, char const *argv[])
{
	
	int n=0;
	cout<<"Enter the length of the array:";
	cin>>n;
	int * arr=new int[n];
	build_array(arr,n);
	int key=0;
	cout<<"Enter the element you want to search:";
	cin>>key;
	int ans=lsearch(arr,n,key);
	if(ans==-1){
		cout<<"The element is not present.";
	}
	else{
		cout<<"The element is present at the position "<<ans+1;
	}

	return 0;
}