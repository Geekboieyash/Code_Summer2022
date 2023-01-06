class CommandLineInputTest{ 
public static void main(String args[ ] ) {
	int count;
	String aString;
	count = args.length;
		
	System.out.println( "Number of arguments ="+ count);
	
	for(int i = 0; i < count; i++) {
		aString = args[i];
		System.out.println( "args["+i+"]"+"="+ aString);
		}
	    }
	} 