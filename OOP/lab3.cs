using System;

public class A{
    public int a;
    public int b;

    public A(int a, int b){
        this.a = a;
        this.b = b;
    }

    public int c{
        get{return a*=b;}
    }
}

public class B: A{
    public int d;
    int f = 0;
    public int[] array;

    public B(int a, int b, int d) : base(a, b){
        this.d = d;
        array = new int[a];
        
        c2 = c2;
        
        int i = 0;
            
        while(i<a){
            
            array[i] = i * f;
            
            i++;
        
        }
    }

    public int c2{
        set{
            int i =0;
            while(i<=10){
                f = a+b+d+i;
                i++;
            }
            
        }
        get{return f;}
    }
}

public class Program{
    static void Main(){
        A Obj = new A(9,5);
        System.Console.WriteLine(Obj.c);
        B BObj = new B(9,5,1);
        System.Console.WriteLine(BObj.c2);
        foreach(int i in BObj.array){
            
            System.Console.Write(i + "\t");
        
        }
    }
} 