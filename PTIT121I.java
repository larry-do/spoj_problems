import java.util.Scanner;
import java.util.Collections;

public class Main {
	
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int[] a = new int[n];
		StringBuilder[] b = new StringBuilder[n];
		for(int i = 0; i < n; i++) {
			int k = scan.nextInt();
			a[i] = scan.nextInt();
			b[i] = new StringBuilder(scan.next());
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < b[i].length(); j++) {
				b[i].insert(j, String.join("", Collections.nCopies(a[i] - 1, Character.toString(b[i].charAt(j)))));
				j+=(a[i]-1);
			}
			System.out.println( (i+1) + " " + b[i].toString());
		}
	}
	
	
}

