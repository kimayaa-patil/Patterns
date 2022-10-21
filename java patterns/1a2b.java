class abbbb {
    public static void main(String [] args){
        char x='a';
        int n=1;
        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++){
                if(j%2==0){
                    System.out.print(x);
                    x++;
                }
                else{
                    System.out.print(n);
                    n++;
                }
                
            }
            System.out.println();
        }
    }
    
}
