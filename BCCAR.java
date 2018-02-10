import java.util.Scanner;

public class Main {
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int[] a = new int[n];
		for(int i = 0; i < n; i++) {
			int k = scan.nextInt();
			int max = -1, min = 100;
			for(int j = 0; j < k; j++) {
				int b = scan.nextInt();
				if( b < min) min = b;
				if( b > max) max = b;
			}
			a[i] = (max-min)*2;
		}
		for(int i = 0; i < n; i++) {
			System.out.println(a[i]);
		}
	}
	
}