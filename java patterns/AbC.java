class AbC {
    public static void main(String []args){
        int x=1;
        char ch='A';
        char c='a';
        for(int i=1;i<=3;i++){
            for(int j=1;j<=3;j++){
                x++;
                if(x%2==0){
                    System.out.print(ch+" ");
                    ch++;
                    c++;
                }
                else{
                    System.out.print(c+" ");
                    ch++;
                    c++;
                }
            }
            System.out.println();
        }
    }
    
}
