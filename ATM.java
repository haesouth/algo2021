import java.util.*;

public class Main {
	public static void main(String[] args) {
	    
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] p= new int[n];
		
		for (int i = 0; i < n; i++)
		    p[i] = sc.nextInt();
		   
		Arrays.sort(p); //짧은 순서대로 정렬
		
		int min = p[0]; //가장 빠른 순서로 초기화
		
		for (int i = 1; i < n; i++) {
			p[i] += p[i-1];
			min += p[i];
		} //정렬한 순서대로 더하기
		
		System.out.println(min);
		sc.close();
	}
}