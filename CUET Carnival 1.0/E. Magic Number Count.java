//package JavaApplication6;
import java.util.*;

public class JavaApplication6 {

static boolean[]Array=new boolean[100000001];
     public static void countPrimes(int n) {

        Array[0]=false;
        Array[1]=false;
        for(int i=2;i<=n;i++){
            Array[i]=true;
        }
        for(int i=2;i*i<=n;i++){
            if(Array[i]){
                for(int j=i*i;j<=n;j=j+i){
                    Array[j]=false;
                }
            }
        }

    }
    public static void main(String[] args) {
        // TODO code application logic here
        countPrimes(100000000);
        Scanner xp = new Scanner(System.in);
        int a,b,c;
        a = xp.nextInt();
        for(int i=1;i<=a;i++)
        {
            b=xp.nextInt();
            c=xp.nextInt();
            int ct=0;
            for(int j=b;j<=c;j++)
            {
                if(Array[j]) ct++;
            }
            System.out.println("Case "+i+": "+ct);

        }

    }

}
