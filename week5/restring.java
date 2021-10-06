import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String input = sc.nextLine();
    int size = input.length();
    
    char[] arr = new char[size];//알파벳
    int num = 0;//숫자
    
    for(int i=0;i<size;i++) {
        char tmp = input.charAt(i);
        if(tmp>=65 && tmp<=90)
        arr[i] = tmp;
        else
        num += (tmp-'0');
	}
	Arrays.sort(arr);//알바벳 정렬
	String result = new String(arr).trim();
	System.out.println(result+num);
}
}