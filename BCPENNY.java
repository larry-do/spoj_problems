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
			int[] b = pennyGame(a[i]);
			System.out.print(i+1 + " ");
			for(int j = 0; j < 8; j++) {
				System.out.print(b[j] + " ");
			}
			System.out.println();
		}
	}
	public static int[] pennyGame(String str) {
		int[] b = new int[8];
		for(int i = 0; i < str.length() - 2; i++) {
			if(str.substring(i, i+3).equals("TTT")) b[0]++;
			if(str.substring(i, i+3).equals("TTH")) b[1]++;
			if(str.substring(i, i+3).equals("THT")) b[2]++;
			if(str.substring(i, i+3).equals("THH")) b[3]++;
			if(str.substring(i, i+3).equals("HTT")) b[4]++;
			if(str.substring(i, i+3).equals("HTH")) b[5]++;
			if(str.substring(i, i+3).equals("HHT")) b[6]++;
			if(str.substring(i, i+3).equals("HHH")) b[7]++;
		}
		return b;
	}
}