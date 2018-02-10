import java.util.Scanner;
import java.lang.StringBuilder;
import java.math.BigInteger;

public class Main {
	
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int n = scan.nextInt();
		int[] a = new int[n];
		int[] b = new int[n];
		String[] c = new String[n];
		for(int i = 0; i < n; i++) {
			a[i] = scan.nextInt();
			b[i] = scan.nextInt();
			c[i] = scan.next();
		}
		for(int i = 0; i < n; i++) {
			BigInteger dec = new BigInteger("0");
			for(int j = 0; j < c[i].length(); j++) {
				int heSo = 0;
				if(c[i].charAt(j) >= '0' && c[i].charAt(j) <= '9') heSo = Character.getNumericValue(c[i].charAt(j));
				else if(c[i].charAt(j) >= 'A' && c[i].charAt(j) <= 'Z') heSo = (int)c[i].charAt(j) - 'A' + 10;
				else if(c[i].charAt(j) >= 'a' && c[i].charAt(j) <= 'z') heSo = (int)c[i].charAt(j) - 'a' + 36;
				BigInteger k = BigInteger.valueOf(a[i]).pow(c[i].length() - j - 1).multiply(BigInteger.valueOf(heSo));
				dec = dec.add(k);
			}
			StringBuilder result = new StringBuilder("");
			BigInteger mod = null;
			while(dec.compareTo(BigInteger.valueOf(0)) > 0) {
				mod = dec.mod(BigInteger.valueOf(b[i]));
				dec = dec.divide(BigInteger.valueOf(b[i]));
				if(mod.intValue() >= 0 && mod.intValue() <= 9) result.insert(0, mod.toString());
				else if(mod.intValue() >= 10 && mod.intValue() <= 35) result.insert(0, (char)(mod.intValue() - 10 + (int)'A'));
				else result.insert(0, (char)(mod.intValue() - 36 + (int)'a'));
			}
			if(c[i].equals("0")) result = new StringBuilder("0");
			System.out.println(a[i] + " " + c[i]);
			System.out.println(b[i] + " " + result);
			System.out.println("");
		}
	}
	
}