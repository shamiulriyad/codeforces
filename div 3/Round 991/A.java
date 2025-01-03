import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int length = 0;
        int test = input.nextInt();
        for(int i=1; i <= test; i++){
            int count = 0;
            int n = input.nextInt();
            int m = input.nextInt();
            for(int j = 0; j<n; j++){
                String s = input.next();
                length += s.length();
                if(length <= m) count++;
                else length+=s.length();
            }
            System.out.println(count);
 }
}
}