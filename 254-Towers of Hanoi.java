import java.math.BigInteger;
import java.util.Scanner;

public class Main 
{
    int[] cnt = new int[4];
    BigInteger m;

    void solve(int i, int from, int to) 
    {
        if(i < 0) 
            return;
        
        int tmp = 6 - from - to;
        
        if(m.testBit(i)) 
        {
            cnt[from] -= i; 
            cnt[tmp] += i;
            --cnt[from]; 
            ++cnt[to];
        
            solve(i-1, tmp, to);
        } 
        else 
            solve(i-1, from, tmp);
    }

    void run() 
    {
        Scanner cin = new Scanner(System.in);
        while(true) 
        {
            int n = cin.nextInt();
            m = cin.nextBigInteger();
            
            if(n == 0 && m.equals(BigInteger.ZERO))
                return;
            
            cnt[1] = n; 
            cnt[2] = cnt[3] = 0;
            
            if(n % 2 == 0) 
                solve(n-1, 1, 3);
            else 
                solve(n-1, 1, 2);
            
            System.out.println(cnt[1] + " " + cnt[2] + " " + cnt[3]);
        }
    }

    public static void main(String[] args) 
    {
        new Main().run();
    }
}