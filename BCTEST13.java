///////////////////////////////////////////////////////////
import java.util.Scanner;
import java.lang.Math;
public class Main {
	static Scanner sc = new Scanner(System.in);
	static int len;
	static char[] a;
	public static void main(String[] args) {
		long n = sc.nextLong();
		long m = sc.nextLong();
		System.out.print(Find(n, m));
	}
	static long Find(long n, long m) {
		long res = 0;
		int nlen = (int)Math.log10(n) + 1;
		init(nlen);
		long p = show();
		while(n > p) {
			if(next_bit()) p = show();
			else {
				init(++len);
				p = show();
			}
		}
		if(n == m) return p;
		while(n <= m) {
			if(p <= m) {
				res += p*(p - n + 1);
				n = p + 1;
			}
			else {
				res += p*(m - n + 1);
				n = m + 1;
			}
			//System.out.println(p + " " + res + " " + n);
			if(next_bit()) p = show();
			else {
				init(++nlen);
				p = show();
			}
		}
		return res;
	}
	static void init(int k) {
		len = k;
		a = new char[len];
		for(int i = 0; i < len; i++) {
			a[i] = '4';
		}
	}
	static boolean next_bit() {
		int j = len - 1;
		while(j >= 0 && a[j] == '7') {
			a[j] = '4'; j--;
		}
		if(j >= 0) a[j] = '7';
		else return false;
		return true;
	}
	static long show() {
		return Long.parseLong(String.valueOf(a));
	}
}