#include<stdio.h>

int main()
{
	char C;
	char T;
	char M;
	int tempChoice;
	char catagory;
	int CurrencyChoice;
	int mChoice;
	int inputF; // fahreinheit k liye
	int inputC; // celcius k liye
	int inputUSDtoEURO; // input for USD to EURO
	int inputUSDtoJPY; // input for the same
	int inputUSDtoRMB; // input for USD to RMB
	int Gram; // gram k liye
	int inputOunce; // for Ounce
	int FtoCelcius;  // stores farhreinheit to celcius
	int CtoFahreinheit; // stores C to F
	float USDToEuro; // stores value from usd to euro;
	float USDtoJPY; 
	float USDToRMB;
	float ounceToPounds; // stores ounce to pounds val
	float gramTopounds; // grams to pounds store karta hai
	
	printf("Welcome to the Unit Converter! \n");
	printf("Here is the list of conversion to choose from: \n");
	printf("Currency(C)\nMass(M)\nTemperature(T) \n");
	printf("Please enter the letter you want to convert. \n");
	scanf("%c", &catagory);
	

	if(catagory == 'C'){
		printf("Welcome to the Currency Converter! \n");
		printf("Here is the list of conversion to choose from: \n");
		printf("Enter 1 for USD to EURO. \n");
		printf("Enter 2 for USD to JPY. \n");
		printf("Enter 3 for for USD to RMB. \n");
		scanf("%d", &CurrencyChoice);
		if(CurrencyChoice == 1){
			printf("Please Enter the USD amount: \n");
			scanf("%d", &inputUSDtoEURO);
			USDToEuro = inputUSDtoEURO * 0.94;
			printf("Euro: %.2f\n", USDToEuro); // .2f gives value upto 2 dec places
		}
		else if(CurrencyChoice == 2){
			printf("Please enter the USD amount: \n");
			scanf("%d", &inputUSDtoJPY);
			USDtoJPY = inputUSDtoJPY * 136.89;
			printf("JPY: %.2f\n", USDtoJPY);
		}
		else if(CurrencyChoice == 3){
			printf("Enter the USD amount: \n");
			scanf("%d", &inputUSDtoRMB);
			USDToRMB = inputUSDtoRMB * 6.98;
			printf("RMB: %.2f\n", USDToRMB);
		}
		else{
			printf("Please enter a valid choice\n");
		}
	}
	else if(catagory == 'M'){
		printf("Welcome to the Mass Converter! \n");
		printf("Here is the list of conversion to choose from: \n");
		printf("Enter 1 for ounces to pounds. \n");
		printf("Enter 2 for gram to pounds. \n");
		scanf("%d", &mChoice);
		if(mChoice == 1){
			printf("Please Enter the ounce amount: \n");
			scanf("%d", &inputOunce);
			ounceToPounds = inputOunce * 0.0625;
			printf("Pounds: %.2f", ounceToPounds);
		}
		else if(mChoice == 2){
			printf("Please Enter the Gram amount: \n");
			scanf("%d", &Gram);
			gramTopounds = Gram * 0.00220462;
			printf("Pounds: %.2f", gramTopounds);
		}
		else{
			printf("Please Enter a valid choice \n");
		}
	}
		if(catagory == 'T'){
		printf("Welcome to the temperature converter! \n");
		printf("Here is the list of conversion to choose from: \n");
		printf("Enter 1 for fahreinheit to Celcius. \n");
		printf("Enter 2 for Celcius to Fahreinheit. \n");
		scanf("%d", &tempChoice);
		if(tempChoice == 1){
			printf("Please enter the fahreinheit degree: \n");
			scanf("%d", &inputF);
			FtoCelcius = ((inputF-32) * (5.0/9.0));
			printf("Celcius: %d", FtoCelcius);
		}
		else if(tempChoice == 2){
			printf("Enter the Celcius Degree: \n");
			scanf("%d", &inputC);
			CtoFahreinheit = ((9.0/5.0)*inputC + 32);
			printf("Fahreinheit: %d", CtoFahreinheit);
		}
		else{
			printf("Please enter a valid choice. \n");
		}
	}
	
}