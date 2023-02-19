/*

//declare variables, input file stream, output file stream and a Sales_data object to hold information read in 
ifstream input(argv[1]); 
ofstream output(argv[2]); 
Sales_data total; 


//reads first input and checks whether input is valid 
if (read(input, total)) { 


	Sales_data trans;


	while (read(input, trans)) { 
	
		//consecutive inputs are same 
		if (total.isbn() == trans.isbn()) 
			total.combine(trans); 
		
		//consecutive inputs are different
		else {
			//prints input and prepare for next input 
			print(output, total) << endl; 
			total = trans; 
		}
	}

	//could add a check here to make sure no errors while reading midway 

	//prints last input 
	print(output, total) << endl; 
}

//error in reading first input  
else 
cerr << "No data?!" << endl;
*/