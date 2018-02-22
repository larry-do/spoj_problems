import java.util.Scanner;
import java.lang.StringBuilder;
public class Main{
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args){
		int a = Integer.parseInt(new StringBuilder(scan.next()).reverse().toString());
		int b = Integer.parseInt(new StringBuilder(scan.next()).reverse().toString());
		if(a > b) System.out.print(a);
		else System.out.print(b);
	}
}