import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;
 
public class Main {
 
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int m = scan.nextInt();
		int n = scan.nextInt();
		ArrayList<Integer> ls = new ArrayList();
		while(n != 0 && m != 0) {
			int [][] arr = new int[n][m];
			for(int i = 0; i < n; i++) {
				for(int j = 0; j < m; j++) {
					arr[i][j] = scan.nextInt();
				}
			}
			BigInteger[] multiple = new BigInteger[m];
			for(int i = 0; i < m; i++) {
				multiple[i] = new BigInteger("1");
				for(int j = 0; j < n; j++) {
					multiple[i] = multiple[i].multiply(new BigInteger(Integer.toString(arr[j][i])));
				}
			}
			int idx = 0;
			for(int i = 0; i < m; i++) {
				if(multiple[idx].compareTo(multiple[i]) != 1) idx = i;
			}
			ls.add(idx + 1);
			m = scan.nextInt();
			n = scan.nextInt();
		}
		for(int i = 0; i < ls.size(); i++) {
			System.out.println(ls.get(i));
		}
	}
 
}