import java.util.*;
public class linearsearch{
	public static int lsearch(int [] arr,int n,int key){
		int ans=-1;
		for(int i=0;i<n;i++){
			if(arr[i]==key)
				ans=i;
		}

		return ans;

	}
	public static void main(String[] args) {
		int n,key;
		Scanner s=new Scanner(System.in);
		System.out.print("Enter the number of elements you want in the array:");
		n=s.nextInt();
		System.out.println();
		int [] a=new int[n];
		for(int i=0;i<n;i++){
			System.out.print("Enter the element:");
			a[i]=s.nextInt();
			System.out.println();
		}

		System.out.print("Enter the element you want to search:");
		key=s.nextInt();

		int result=lsearch(a,n,key);
		if(result==-1){
			System.out.print("element is not present");
		}
		else
		System.out.print("element is present at position "+(result+1));

	}
}