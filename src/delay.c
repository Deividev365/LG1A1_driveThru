void delay(int number_of_seconds)  { 

	int milli_seconds = 1000 * number_of_seconds; 

	int start_time = clock(); 

	while (clock() < start_time + milli_seconds);
    
} 