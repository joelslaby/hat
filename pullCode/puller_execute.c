#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

void delay(int number_of_seconds);

int main()
{
	cout << "program start\n";
	while(1)
	{
		cout << "starting GPS's:\n";
		system("./start.sh");
		cout << "GPS started, writing to txt; waiting 20 seconds\n";
		delay(20);

		cout << "pulling files:\n";
		system("./puller.sh"); //NOTE: program does not continue until script is done and files are pulled
		cout << "files pulled\n";


		// FILE *fp1 = fopen("data1.txt", "r'");
		FILE *fp2 = fopen("data2.txt", "r'");
		FILE *fp3 = fopen("data3.txt", "r'");

		FILE *fp4 = fopen("data.txt", "w");
		
		char c;
		
		// while((c = fgetc(fp1)) != EOF)
		// 	printf("from hat 1:\n");
		// 	fputc(c,fp4);
		// 	printf("\n\n\n\n");
		// 	cout << "copied file 1\n";
		while((c = fgetc(fp2)) != EOF)
			printf("from hat 2:\n");
			fputc(c,fp4);
			printf("\n\n\n\n");
			cout << "copied file 2\n";
		while((c = fgetc(fp3)) != EOF)
			printf("from hat 3:\n");
			fputc(c,fp4);
			cout << "copied file 3\n";

		
		// fclose(fp1);
		fclose(fp2);
		fclose(fp3);
		fclose(fp4);

		system("./cleaner.sh");
		delay(5);
		cout << "restarting loop:\n";
	}
	return 0;
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int ticks = 1000000 * number_of_seconds; //multiplier based off of clock ticks, not milliseconds
											//aka 1 million ticks per second on 32 bit
  
    // Storing start time in terms of clock ticks
    clock_t start_t = clock();
  
    // looping till required time is not achieved
    while (clock() < start_t + ticks)
		;
}
