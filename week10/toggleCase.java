import java.util.*;

class Main {
    static int x=32;
    static String toggleCase(char[] a) {
        for (int i=0; i<a.length; i++) {
            a[i]^=32;
        }
        return new String(a);
    }
    public static void main(String[] args) {
        String str = "CheRrY";
        System.out.print("Toggle case: ");
        str = toggleCase(str.toCharArray());
        System.out.println(str);
        System.out.print("Original string: ");
        str = toggleCase(str.toCharArray());
        System.out.println(str);
    }
}