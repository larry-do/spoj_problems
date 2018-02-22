import java.util.Scanner;
public class Main{
	static Scanner scan = new Scanner(System.in);
	public static void main(String[] args){
		int[] a = new int[4];
		int[] b = new int[4];
		for(int i = 0; i < 3; i++){
			a[i] = scan.nextInt();
			b[i] = scan.nextInt();
		}
		int x = 0, y = 0;
		if(a[0] == a[1]) x = a[2];
		if(a[0] == a[2]) x = a[1];
		if(a[1] == a[2]) x = a[0];
		if(b[0] == b[1]) y = b[2];
		if(b[0] == b[2]) y = b[1];
		if(b[1] == b[2]) y = b[0];
		System.out.print(x + " " + y);
	}
}