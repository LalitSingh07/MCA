// wap to implement the following
//class shape have a method area() and volume()
//rectangle class extends shape and have a method area() and volume()
//square class extends shape and have a method area() and volume()
//solution is main class
// implement super 
class shape {
    shape(){
        System.out.println("Shape is called");
    }
    shape(int a, int b){
        System.out.println("Shape is called");
    }
    public void area(){
        System.out.println("Area of shape");
    }
    public void volume(){
        System.out.println("Volume of shape");
    }
}

class rectangle extends shape{
    rectangle(int a, int b){
        super(a, b);
        System.out.println("Rectangle is called");
    }
  void show(){
      System.out.println("Rectangle");
  }
}

class square extends shape{
    void display(){
        System.out.println("Square");
    }

    
}


public class solution {
    public static void main(String[] args) {
        // shape s = new shape();
        // s.area();
        // s.volume();

        rectangle r = new rectangle(55, 66);
        r.area();
        r.volume();
        r.show();

        // square sq = new square();
        // sq.area();
      
    }
    
}
