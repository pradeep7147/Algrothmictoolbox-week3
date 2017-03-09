import java.util.*;

public class LargestNumber {
    private static String largestNumber(String[] a) {
        String b;
		a = a.toString() + b.toString();
        b = b.toString() + a.toString();
        compare(a,b);
        String result = "";
        for (int i = 0; i < a.length; i++) {
            result += a[i];
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String[] a = new String[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.next();
        }
        System.out.println(largestNumber(a));
    }
}

