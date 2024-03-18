package com.lalit;
import java.util.*;

interface shapes{
	public void getinput();
	public void area();
	public void display();
	
}

class rectangle implements shapes{
	int l , b ,ans;
	public void getinput() {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the one side");
		l = sc.nextInt();
		System.out.println("enter the Second side");
		b = sc.nextInt();
	}
	public void area() {
		ans = l*b;
	}
	public void display() {
		System.out.println("area of rectangle is "+ans);	
	}

}
class square implements shapes{
	int l  ,ans;
	public void getinput() {
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the one side");
		l = sc.nextInt();
		
	}
	public void area() {
		ans = l*l;
	}
	public void display() {
		System.out.println("area of square is "+ ans);	
	}

}


 class Shape {

	public static void main(String[] args) {
		rectangle rc = new rectangle();
		rc.getinput();
		rc. area();
		rc.display() ;
		square sq = new square();
		sq.getinput();
		sq. area();
		sq.display() ;
	
	
	
		
	}

}
