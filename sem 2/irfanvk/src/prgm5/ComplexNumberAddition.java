package prgm5;

import irfanvk.complexnumber;

public class ComplexNumberAddition {

	double real,img;
	ComplexNumberAddition (double r,double i){
		real=r;img=i;
	}
	public static ComplexNumberAddition (ComplexNumber  c1, ComplexNumber c2)
	{
		return new ComplexNumber(c1.real+c2.real,c1.img+c2.img);

	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("enter the real part of first complex number:");
		double real1=sc.nextDouble();
		System.out.println("enter the imaginary part of first complex number:");
		double img1=sc.nextDouble();
		
		System.out.println("enter the real part of second complex number:");
		double real2=sc.nextDouble();
		System.out.println("enter the imaginary part of second complex number:");
		double img2=sc.nextDouble();
		
		
		complexnumber c1=new complexnumber(real1,img1);
		Complexuser c2=new complexnumber(real2,img2);
		Complexuser temp=sum (c1,c2);
		System.out.printf("sum is: %.2f + %.2fi",temp.real, temp.img);
		
		sc.close();
		}
	}
