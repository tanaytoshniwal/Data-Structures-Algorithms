class TestClass {
    static double calc(int[] x,int[] y){
        double res,a,b,c;
        a=Math.pow((y[0]-x[0]),2);
        b=Math.pow((y[1]-x[1]),2);
        c=Math.pow((y[2]-x[2]),2);
        res=Math.sqrt(a+b+c);
        return res;
    }
    public static void main(String args[] ) throws Exception {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int x[]=new int[3];
        int xv[]=new int[3];
        int y[]=new int[3];
        int yv[]=new int[3];
        for(int i=0;i<3;i++)
            x[i]=sc.nextInt();
        for(int i=0;i<3;i++)
            xv[i]=sc.nextInt();
        for(int i=0;i<3;i++)
            y[i]=sc.nextInt();
        for(int i=0;i<3;i++)
            yv[i]=sc.nextInt();
        double dist = 99999999.0;
        while(t-->0){
            double q=calc(x,y);
            if(q<dist)
                dist=q;
            
            for(int i=0;i<3;i++)
                x[i]+=xv[i];
            for(int i=0;i<3;i++)
                y[i]+=yv[i];
        }
        System.out.printf("%.6f",dist);
        sc.close();
    }
}
