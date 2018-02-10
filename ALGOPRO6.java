import java.util.Scanner;

public class Main {
	
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int result = 0, sum = 0, a = n;
		while(a > 0) {
			sum+=a%10;
			a/=10;
		}
		if(n == 1900 || n == 2100 || n % 4 != 0) {
			result = 3584 + sum * 365;
		}
		else {
			result = 3597 + sum * 366;
		}
		System.out.print(result);
	}
	
	
}
