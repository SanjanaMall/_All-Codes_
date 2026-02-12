class Area{
    int length;
    int width;
    void insert(int l, int w){
        length = l;
        width = w;
    }
    void getvalue(){
        int area1;
        area1 = length*width;
        System.out.println("Area of the rectangle is : " + area1);
    }
}
class entry{
    public static void main(String[] args){
        Area a1 = new Area();
        a1.length = 10;
        a1.width = 20;
        a1.getvalue();
        Area a2 = new Area();
        a2.insert(20,30);
        a2.getvalue();
    }
}
