import java.util.*;

class Main {
    static int getPosOfRightmostSetBit(int n){

        return (int)((Math.log10(n & -n)) / (Math.log10(2))) + 1;
    }
        
        static int setRightmostUnsetBit(int n){
            if (n == 0)
            return 1;
            
            if ((n & (n + 1)) == 0)
            
            return n;
            
            int pos = getPosOfRightmostSetBit(~n);
            
            return ((1 << (pos - 1)) | n);
        }
        
        public static void main(String arg[]) {
            int n = 21;
            System.out.print(setRightmostUnsetBit(n));
            
        }
}