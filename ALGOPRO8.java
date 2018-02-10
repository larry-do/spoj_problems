import java.util.Scanner;

public class Main {
	
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int m = scan.nextInt();
		System.out.println(Math.min(n, m) + " " + (int)(Math.abs(n - m)/2));
	}
	
	
}

