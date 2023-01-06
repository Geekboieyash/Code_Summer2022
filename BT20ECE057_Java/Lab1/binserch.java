import java.util.Scanner;
class binserch
{
  public static void main(String args[])
  {
	Scanner in = new Scanner(System.in);
	System.out.println("Enter the size of array");
	int n = in.nextInt();
	int arr[] = new int[n];
	System.out.println("Enter Element in array one by one");
	for(int i = 0;i < n;i++)
	{
		arr[i] = in.nextInt();
	}
	System.out.println("Enter element to be searched");
	int target = in.nextInt();
      int lo = 0,hi = n-1;
	boolean flag = false;
	while(lo <= hi)
	{
	  int md = lo + (hi-lo)/2;
	  if(arr[md] == target)
	  {
	     System.out.println(target+" is present at index"+md);
		flag = true;
		break;
	  }
	  else if(arr[md] < target)
		lo = md+1;
	  else
		hi = md - 1;
	}
	if(!flag)
		System.out.println(target+"is not present");
	in.close();

  }
}
