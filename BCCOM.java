import java.util.Scanner;

public class Main {
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		long[] a = new long[n];
		for(int i = 0; i < n; i++) {
			a[i] = scan.nextLong();
		}
		for(int i = 0; i < n; i++) {
			if(a[i] % 9 == 0) 
				System.out.println(9);
			else 
				System.out.println(a[i]%9);
		}
	}
	
}
