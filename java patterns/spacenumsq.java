public class spacenumsq {
        public static void main(String [] args){
            
            for(int i=1;i<=4;i++){
                int x =1;
                
                for(int j=3;j>=i;j--){
                    System.out.print("- ");
                }
                for(int j=1;j<=i;j++){
                   
                    System.out.print(x*x+" ");
                    x++;
                }
               System.out.println();
            }
        }
    }
        
    

