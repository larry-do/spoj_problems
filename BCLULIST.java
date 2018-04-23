import java.util.Scanner;
public class Main{
	static Scanner sc = new Scanner(System.in);
	static int n = 0, m = 0;
	static long[][] res = new long[2001][11];
	public static void main(String args[]){
		CreateDPTable();
		int test = sc.nextInt();
		int t = 1;
		while(test-- != 0){
			n = sc.nextInt();
			m = sc.nextInt();
			System.out.println("Data set " + (t++) + ": " + n + " " + m + " " + res[m][n]);
		}
	}
	static void CreateDPTable(){
		for(int i = 1; i <= 2000; i++){
			res[i][1] = i;
		}
		for(int i = 2; i <= 2000; i++){
			res[i][2] = res[i-1][2] + (i / 2);
		}
		for(int i = 3; i <= 10; i++){
			for(int j = (1<<(i-1)); j <= 2000; j++){
				res[j][i] = res[j-1][i] + res[j / 2][i-1];
			}
		}
		/*
		for(int i = 0; i <= 20; i++){
			for(int j = 0; j <= 4; j++){
				System.out.printf("%3d", res[i][j]);
			}
			System.out.println();
		}
		*/
	}
}