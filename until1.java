import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws java.lang.Exception {
	    Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int count = 0;
        
        while(n!=1){
            if(n % k == 0){
                n = n/k;
                count ++;
                continue;
            }
            int target = (n/k) * k;
            count += (n-target);
            n= target;
        }
        
        System.out.println(count);
	}
}