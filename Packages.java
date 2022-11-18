import java.util.Scanner;

public class fifth {
        private static String numbertoword(int a){
            String word="";  
	String unitarray[] ={
	"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven",
	"Twelve","Thirteen","Fourteen","Fifteen","Sixten","Seventeen","Eighteen","Ninteen"
	};
            String tensarray[]={
	"Zero","Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty"," Ninety"
	};
            
    if(a==0)
                {
                    return "zero";
                }

                if((a/100000>0))
                {
                    word = word + numbertoword(a/100000) + "Lakh";
                    a=a%100000;
                }
                if((a/1000>0))
                {
                    word = word + numbertoword(a/1000) + "Thousand";
                    a=a%1000;
                }
                if((a/100>0))
                {
                    word = word + numbertoword(a/100) + "Hundred";
                    a=a%100;
                }
                if(a>0)
                {
                    if(a<20)
                    {
                        word = word + unitarray[a];
                    }
                    else
                    {
                        word = word + tensarray[a/10];
                    }
                }
                return word;
            }
            public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                int number = 0;
                System.out.println("Please type a number (max upto 100000)");
                number = sc.nextInt();
                if(number==0)
                {
                    System.out.println("Zero");
                }
                else if (number>100000)
                {
                    System.out.println("Number is too big");
                }
                else if (number<0)
                {
                    System.out.println("Please enter a positive number");
                }
                else
                {
                    System.out.println("Number in words :" + numbertoword(number));
                }
            }
}
