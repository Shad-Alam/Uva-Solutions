import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		BigInteger sm,n1;
		sm = new BigInteger("0");
		String s;
		while(input.hasNext()){
			s = input.nextLine();
			if(s.equals("0")){
				break;
			}
			n1 = new BigInteger(s);
			sm = sm.add(n1);
		}System.out.println(sm);
	}
}
