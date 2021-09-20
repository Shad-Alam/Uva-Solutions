import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		
		BigInteger sum,n1;
		
		while(input.hasNext()){
			int N = input.nextInt();
			int A = input.nextInt();
						
			sum = new BigInteger("0"); 
			n1 = BigInteger.valueOf(A);
			for(int i=1; i<=N; i++){
				sum = sum.add(BigInteger.valueOf(i).multiply(n1.pow(i)));
			}System.out.println(sum);
		}
	}
}
