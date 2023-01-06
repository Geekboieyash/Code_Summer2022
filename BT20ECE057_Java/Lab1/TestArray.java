class TestArray{  
   public static void main(String args[]){
       int b[]= {10, 20, 30, 40, 50};      //Initialization
      //Traversing array  
      for (int i=0; i < b.length; i++){    //length is the property of array  
         System.out.print(b[i]+" ");  
      }
	  System.out.println();
      // Average calculation
      float sum = 0, avg;
      for(int i=0; i < b.length;i++)    //Calculating the sum of the numbers  
         sum += b[i];  
      avg = sum/b.length;
      System.out.println("Average = " + avg);  
   }
} 