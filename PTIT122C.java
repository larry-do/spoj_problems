import java.util.Collections;
import java.util.Scanner;
import java.lang.StringBuilder;

public class Main {
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int[] a = new int[n];
		char[] b = new char[n];
		for(int i = 0; i < n; i++) {
			a[i] = scan.nextInt();
			b[i] = (char) (scan.nextInt() + '0');
		}
		for(int i = 0; i < n; i++) {
			int k = 0;
			String c = giaiThua(a[i]).toString();
			for(int j = 0; j < c.length(); j++) {
				if(b[i] == c.charAt(j))
					k++;
			}
			System.out.println(k);
		}
	}
	public static StringBuilder sumLargeNumber(StringBuilder a, StringBuilder b) {
		if(a.length() < b.length()) 
			a.insert(0, String.join("", Collections.nCopies(b.length() - a.length(), "0")));
		else 
			b.insert(0, String.join("", Collections.nCopies(a.length() - b.length(), "0")));
		StringBuilder c = new StringBuilder("");
		int mem = 0;
		for(int i = a.length() - 1; i >= 0; i--) {
			mem += Character.getNumericValue(a.charAt(i)) + Character.getNumericValue(b.charAt(i));
			c.insert(0, (char)('0'+mem%10));
			mem/=10;
		}
		if(mem != 0)
			c.insert(0, (char)('0' + mem));
		return c;
	}
	public static StringBuilder factoryLargeNumberWithInteger(StringBuilder a, int b) {
		StringBuilder c = new StringBuilder("");
		int mem = 0;
		for(int i = a.length() - 1; i >= 0; i--) {
			mem = Character.getNumericValue(a.charAt(i)) * b + mem;
			c.insert(0, (char)('0' + mem%10));
			mem/=10;
		}
		if(mem != 0)
			c.insert(0, (char)('0' + mem));
		return c;
	}
	public static StringBuilder factoryLargeNumber(StringBuilder a, StringBuilder b) {
		StringBuilder c = new StringBuilder("");
		for(int i = b.length() - 1; i >= 0; i--) {
			StringBuilder d = factoryLargeNumberWithInteger(a, Character.getNumericValue(b.charAt(i)));
			d.insert(d.length(), String.join("", Collections.nCopies(b.length() - 1 - i, "0")));
			c = sumLargeNumber(c, d);
		}
		return c;
	}
	public static StringBuilder giaiThua(int n) {
		StringBuilder a = new StringBuilder("1");
		for(int i = 1; i <= n; i++) {
			StringBuilder b = new StringBuilder(Integer.toString(i));
			a = factoryLargeNumber(a, b);
		}
		return a;
	}
}
