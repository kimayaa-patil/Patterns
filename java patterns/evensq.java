class square {
    public static void main(String []args){
        int a=1;
        int x=1;
        int y=1;
        
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
                a++;
                if(a%2==0){
                    System.out.print(y+" ");
                    y++;
                    x++;
                }
                else{
                    System.out.print(x*x+" ");
                    y++;
                    x++;
                }
            }
            System.out.println();
        }
    }
    
}
    

