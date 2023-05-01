//shape.java
public class shape{
    public int maxwidth;
    public int maxheight;
    //getters and setters
    public shape(){}//default constr
    public shape(int a,int b){ //parameterized const
        maxwidth=a;
        maxheight=b;
    } 
    public shape( shape  y){//copy cons
        maxwidth=y.maxwidth;
        maxheight=y.maxheight;

    }
    public void setMaxwidth(int m) //setter
    {
       this.maxwidth=m;
    }
    public void setMaxheight(int h){ //setter
        this.maxheight=h;
    }
    public int getMaxwidth(){return maxwidth;}
    public int getMaxheight(){return maxheight;}
    //public int getMaxarea(){return maxheight*maxwidth;}
    public double getarea(){
        return maxheight*maxwidth;
    }
    
    
    //public class Main {

   //circel.java
   public class circle extends shape{
       protected int radius;
    //getter and setter
    public void setRadius(int r){
        this.radius=r;
}
    public int getRadius(){
        return radius;
    }
    @Override
    public double getarea(){
        return 3.14*radius*radius;
    }   
}
public class rectangle extends shape{
    protected int height;
    protected int width;
    rectangle(){}
    rectangle(int x,int y){
        this.height=x;
        this.width=y;
    }
    rectangle(rectangle k){
        height=k.height;
        width=k.width;
    }
    //getter and setter
    public void setHeight(int l ){
        this.height=l;

    }
    public void setWidth(int w){
        this.width=w;

    }
    public int getHeight(){
        return height;
    }
    public int getWidth(){
        return width;
    }
    @Override
    public double getarea(){
        return(double)height*width;

    }
}
//main.java
public class main{
    public static void main (String[] args ){
        rectangle r1=new rectangle();
        rectangle r2=new  rectangle(4,5);
        rectangle r3=new rectangle();
        rectangle r4=new rectangle(r3);
        rectangle r5=new rectangle();
        r5.setHeight(5);
        r5.setWidth(6);
        System.out.println(r5.getWidth());
        System.out.println(r5.getHeight());
        System.out.println(r5.getarea());
        
        



    }

}





 

    


    
