import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		BigInteger N,m;
		m = new BigInteger("11"); 
		while(input.hasNext()){
			String s = input.nextLine();
			N = new BigInteger(s); 
			if(s.equals("0")){
				break;
			}
			N = N.mod(m);
			String sm = "" + N;
			if(sm.equals("0")){
				System.out.println(s + " is a multiple of 11.");
			}else{
				System.out.println(s + " is not a multiple of 11.");
			}
		}
	}
}
