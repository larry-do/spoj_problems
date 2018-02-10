import java.util.Scanner;

public class Main {
	
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		long[] a = new long[6];
		long max = -1;
		for(int i = 0; i < a.length; i++) {
			a[i] = scan.nextLong();
			max = Math.max(max, a[i]);
		}
		long square = a[0]*a[1] + a[2]*a[3] + a[4]*a[5];
		if(square == Math.pow(max, 2)) {
			System.out.println(max);
		}
		else {
			System.out.println(0);
		}
	}
	
	
}
