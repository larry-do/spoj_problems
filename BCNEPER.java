import java.util.Scanner;

public class Main {
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		String[] a = new String[n];
		for(int i = 0; i < n; i++) {
			int k = scan.nextInt();
			a[i] = scan.next();
		}
		for(int i = 0; i < n; i++) {
			System.out.println((i+1) + " " + nextPermunation(a[i]));
		}
	}
	public static String nextPermunation(String a) {
		char[] b = a.toCharArray();
		int j = b.length - 2;
		while(j >= 0 && b[j] >= b[j+1]) {j--;}
		if(j >= 0) {
			int k = b.length - 1;
			while(b[j] >= b[k]) {k--;}
			char tmp = b[j]; b[j] = b[k]; b[k] = tmp;
			int r = j+1, s = b.length - 1;
			while(r <= s) {
				tmp = b[r]; b[r] = b[s]; b[s] = tmp;
				r++; s--;
			}
		}
		else 
			return "BIGGEST";
		return String.valueOf(b);
	}

}