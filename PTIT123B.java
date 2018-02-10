import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		ArrayList<String> arr = new ArrayList<String>();
		while(n != 0) {
			int[] a = new int[n];
			for(int i = 0; i < n; i++) {
				a[i] = scan.nextInt();
			}
			int count = 0;
			while(!check(a)) {
				int k = a[0];
				for(int i = 0; i < a.length - 1; i++) {
					a[i] = Math.abs(a[i] - a[i+1]);
				}
				a[a.length - 1] = Math.abs(a[a.length - 1] - k);
				count++;
				if(count > 1000)
					 break;
			}
			if(count > 1000) arr.add("Case " + Integer.toString(arr.size() + 1) +": not attained");
			else arr.add("Case " + Integer.toString(arr.size() + 1) +": " + Integer.toString(count) + " iterations");
			n = scan.nextInt();
		}
		for(int i = 0; i < arr.size(); i++) {
			System.out.println(arr.get(i));
		}
	}
	public static boolean check(int[] a) {
		int k = a[0];
		for(int i = 0; i < a.length; i++) {
			if(k != a[i])
				return false;
		}
		return true;
	}
	
}

