import java.util.Scanner;

public class Main {
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int[] a = new int[n];
		for(int i = 0; i < n; i++) {
			int b = scan.nextInt();
			a[i] = scan.nextInt();
		}
		for(int i = 0; i < n; i++) {
			int k = 2, result = 0;
			while((a[i] / k) >= (k/2)) {
				if(((k%2 == 0) && (a[i]%k == (k/2))) || ((k%2 == 1) && (a[i]%k == 0))) {
					result++;
				}
				k++;
			}
			System.out.println((i+1) + " " + result);
		}
	}
	
}
