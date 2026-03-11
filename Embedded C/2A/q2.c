/* Q2 : Impliment income tax calculator by considering best possible parameters (gender, senior citizen benifits, exemption for  investment and other possible consideration).Make use of if-else ladder.*/
 #include <stdio.h> // pre processor directory

int main() //main function 
{
    float income, taxable_income, investment, tax = 0;
    int age;
    char gender;
    
    printf("--- Income Tax Calculator ---\n");
    printf("Enter Age: ");
    scanf("%d", &age); // get input from user 
    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);  // get input from user 
    printf("Enter Total Annual Income: ");
    scanf("%f", &income);  // get input from user 
    printf("Enter Total Investments (e.g., 80C, Insurance): ");
    scanf("%f", &investment);  // get input from user 

  
    if (investment > 150000)
     {
        investment = 150000;
    }
    taxable_income = income - investment; // taxable income formula 

    
    float exemption_limit = 250000; 
    if (age >= 60) 
    {
        exemption_limit = 300000; 
    } else if (gender == 'F' || gender == 'f') 
    {
        exemption_limit = 280000;
    }

    
    if (taxable_income <= exemption_limit) 
    {
        tax = 0;
    } 
    else if (taxable_income > exemption_limit && taxable_income <= 500000)
     {
        tax = (taxable_income - exemption_limit) * 0.05; 
    } 
    else if (taxable_income > 500000 && taxable_income <= 1000000) 
    {
        tax = (500000 - exemption_limit) * 0.05 + (taxable_income - 500000) * 0.20; 
    } 
    else 
    {
        tax = (500000 - exemption_limit) * 0.05 + (500000 * 0.20) + (taxable_income - 1000000) * 0.30; // 30% Tax
    }

    
    printf("\n--- Tax Summary ---");
    printf("\nTotal Income:    %.2f", income);  //output printing 
    printf("\nTaxable Income:  %.2f", taxable_income);//output printing 
    printf("\nTotal Tax Due:   %.2f\n", tax);//output printing 

    return 0; // return value to the function
}// end of the function 
