import java.io.*;
import java.util.*;

/*
9 (배열 개수)
6 0 8 2 3 0 4 0 1 (배열)
입력하면 
6 8 2 3 4 1 0 0 0 출력

*/
class Main
{
	static void pushZero(int arr[], int n)
	{
		int count = 0;

		for (int i = 0; i < n; i++)
			if (arr[i] != 0)
				arr[count++] = arr[i];

		while (count < n)
			arr[count++] = 0;
	}

	public static void main (String[] args)
	{

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] arr= new int[n];
		
		for (int i = 0; i < n; i++)
		    arr[i] = sc.nextInt();
		
		pushZero(arr, n);
		for (int i=0; i<n; i++)
			System.out.print(arr[i]+" ");
	}
}