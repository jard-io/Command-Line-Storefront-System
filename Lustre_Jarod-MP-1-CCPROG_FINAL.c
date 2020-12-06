#include <stdio.h>

#define WRITING_MIN 1001
#define WRITING_MAX 1007
#define PAPER_MIN 2001
#define PAPER_MAX 2007
#define BAG_MIN 3001
#define BAG_MAX 3004
#define ENV_MIN 4001
#define ENV_MAX 4006

/*Database*/
const char *Desc(int a1){
	/*Writing Instruments*/
	if (a1 == 1001){
		return "Ballpen                    10.00            0.020";
	}
	else if (a1 == 1002){
		return "Rollerball pen             20.00            0.030";
	}
	else if (a1 == 1003){
		return "Number 1 pencil            12.00            0.010";
	}
	else if (a1 == 1004){
		return "Number 2 pencil            12.00            0.010";
	}
	else if (a1 == 1005){
		return "Number 3 pencil            12.00            0.010";
	}
	else if (a1 == 1006){
		return "Mechanical pencil          50.00            0.050";
	}
	else if (a1 == 1007){
		return "Fountain pen              100.00            0.100";
	}
	
	/*Paper*/
	else if (a1 == 2001){
		return "Short-sized Bond Papers (1 ream)           220.00            0.820";
	}
	else if (a1 == 2002){
		return "Legal-sized Bond Papers (1 ream)           220.00            0.820";
	}
	else if (a1 == 2003){
		return "A4-sized Bond Papers (1 ream)              250.00            0.800";
	}
	else if (a1 == 2004){
		return "Yellow Pads (100 sheets)                    45.00            0.450";
	}
	else if (a1 == 2005){
		return "White Pads (100 sheets)                     35.00            0.350";
	}
	else if (a1 == 2006){
		return "Legal-sized Oslo Paper (20 sheets)          50.00            0.550";
	}
	else if (a1 == 2007){
		return "Colored Papers (20 sheets)                  20.00            0.200";
	}
	
	/*Bags*/
	else if (a1 == 3001){
		return "Backpack              250.00            0.400";
	}
	else if (a1 == 3002){
		return "Tote bag              120.00            0.300";
	}
	else if (a1 == 3003){
		return "Gym bag               380.00            0.500";
	}
	else if (a1 == 3004){
		return "Messenger bag         420.00            0.750";
	}
	
	/*Envelopes*/
	else if (a1 == 4001){
		return "Short-sized Brown Envelopes (10 pcs)            50.00           0.020";
	}
	else if (a1 == 4002){
		return "Legal-sized Brown Envelopes (10 pcs)            80.00           0.030";
	}
	else if (a1 == 4003){
		return "Short-sized Plastic Envelopes (10 pcs)         120.00           0.500";
	}
	else if (a1 == 4004){
		return "Legal-sized Plastic Envelopes (10 pcs)         140.00           0.600";
	}
	else if (a1 == 4005){
		return "Short-sized Folder (10 pcs)                     80.00           0.600";
	}	
	else if (a1 == 4006){
		return "Legal-sized Folder (10 pcs)                    120.00           0.700";
	}	
}

int main(){
	int x, i;
	int firstID = WRITING_MIN;
	int lastID = ENV_MAX;
	int optionsChoice;
	char categoryChoice;
	int wRange, pRange, bRange, eRange;
	
	wRange = WRITING_MAX - WRITING_MIN + 1;
	pRange = PAPER_MAX - PAPER_MIN + 1;
	bRange = BAG_MAX - BAG_MIN + 1;
	eRange = ENV_MAX - ENV_MIN + 1;
	
	printf("Welcome to BalikEskwela System \n\n");
	printf("Select one from the following options: \n");
	printf("   1. display all categories \n");
	printf("   2. display all items within a given category \n");
	printf("   3. display an item given its unique item code \n");
	
	scanf("%d", &optionsChoice);
	printf("\n");
	
	printf("Your selection: %d \n", optionsChoice);
	printf("\n");
	
	if (optionsChoice == 1){
		printf("Category     Description              Item Code Range  \n");
		printf("W     	     Writing Instruments      %d-%d \n", WRITING_MIN, WRITING_MAX);
		printf("P            Paper    	              %d-%d \n", PAPER_MIN, PAPER_MAX);
		printf("B            Bags                     %d-%d \n", BAG_MIN, BAG_MAX);
		printf("E            Envelopes                %d-%d \n", ENV_MIN, ENV_MAX);
		printf("\n");
		printf("\n");
		printf("Good bye!");
		return 0;
	}
	
	else if (optionsChoice == 2){
		printf("Select a product category: ");
		scanf(" %c", &categoryChoice);
		printf("\n\n");
		
		if (categoryChoice == 'W' || categoryChoice == 'w'){
			printf("Category W: Writing Instruments (found %d items) \n\n", wRange);
			printf("Item Code     Description           Unit Price      Unit Weight \n");
			for (i = WRITING_MIN; i <= WRITING_MAX; i++){
				printf("%d          %s    \n", i, Desc(i));
			}
			
		}
		else if (categoryChoice == 'P' || categoryChoice == 'p' ){
			printf("Category P: Papers (found %d items) \n\n", pRange);
			printf("Item Code     Description     			     Unit Price        Unit Weight \n");
			for (i = PAPER_MIN; i <= PAPER_MAX; i++){
				printf("%d          %s    \n", i, Desc(i));
			}
			
		}	
		else if (categoryChoice == 'B' || categoryChoice == 'b'){
			printf("Category B: Bags (found %d items) \n\n", bRange);
			printf("Item Code     Description       Unit Price      Unit Weight \n");
			for (i = BAG_MIN; i <= BAG_MAX; i++){
				printf("%d          %s    \n", i, Desc(i));
			}
			
		}
		else if (categoryChoice == 'E' || categoryChoice == 'e'){
			printf("Category E: Envelopes (found %d items) \n\n", eRange);
			printf("Item Code     Description     				 Unit Price     Unit Weight \n");
			for (i = ENV_MIN; i <= ENV_MAX; i++){
				printf("%d          %s    \n", i, Desc(i));
			}	
		}
		else{
			printf("Invalid selection.");
		}	
		printf("\n\n");
		printf("Good bye!");
		return 0;
	}
	
	else if (optionsChoice == 3){
	
	printf("Enter the item code:  ");
	scanf("%d", &x);
	printf("\n\n");
	
		if (x >= firstID && x <= lastID){
			if (x >= WRITING_MIN && x <= WRITING_MAX){
				printf("Category W: Writing Instruments \n\n");
				printf("Item Code     Description           Unit Price      Unit Weight \n");
			}
			else if (x >= PAPER_MIN && x <= PAPER_MAX){
				printf("Category P: Paper \n\n");
				printf("Item Code     Description     			     Unit Price        Unit Weight \n");
			}
			else if (x >= BAG_MIN && x <= BAG_MAX){
				printf("Category B: Bags \n\n");
				printf("Item Code     Description       Unit Price      Unit Weight \n");
			}	
			else if (x >= ENV_MIN && x <= ENV_MAX){
				printf("Category E: Envelopes \n\n");
				printf("Item Code     Description     				 Unit Price     Unit Weight \n");
			}		
				
			printf("%d          %s    \n", x, Desc(x));
		}
		else{
			printf("Invalid item code.");
		}
 	}
 	
	else {
		printf("Invalid selection.");
	}
		
	printf("\n\n");
	printf("Good bye!");
	return 0;
	}



/* Program Testing (Standard format is changed to a horizontal format for
better legibility)

TEST CASE # 01 
--------------
Test Scenario: Check if program can display all categories
Test Steps: 1) Start Program 2) Enter 1 3) See list
Test Data: 1
Expected Results: User should see list of all specified categories
Actual Results: As Expected
Pass/Fail: Pass

TEST CASE # 02 
--------------
Test Scenario: Check if program can display specific category
Test Steps: 1) Start Program 2) Enter 2 3) Enter any character among W, P, B, and E 4) See items and their details based on category
Test Data: 2, w or W
Expected Results: User should see list of items from a category using a specified character AND regardless of capitalization
Actual Results: As Expected
Pass/Fail: Pass

TEST CASE # 03 
--------------
Test Scenario: Check if program can display a certain item using its item code
Test Steps: 1) Start Program 2) Enter 3 3) Enter item code 4) See item with details
Test Data: 3, 1007
Expected Results: User should see item and its details
Actual Results: As Expected
Pass/Fail: Pass

TEST CASE # 04 
--------------
Test Scenario: Check if program displays an error message when the user's input is wrong at start up
Test Steps: 1) Start Program 2) Enter K 3) See error message
Test Data: K
Expected Results: User should see 'Invalid selection. Good bye!'
Actual Results: As Expected
Pass/Fail: Pass

TEST CASE # 05 
--------------
Test Scenario: Check if program displays an error message when the user's input is wrong while choosing item category
Test Steps: 1) Start Program 2) Enter 2 3) Enter A 4) See error message
Test Data: 2, A
Expected Results: User should see 'Invalid selection. Good bye!'
Actual Results: As Expected
Pass/Fail: Pass

TEST CASE # 06 
--------------
Test Scenario: Check if program displays an error message when the user's input is wrong while entering item code
Test Steps: 1) Start Program 2) Enter 3 3) Enter 6 4) See error message
Test Data: 3, 6
Expected Results: User should see 'Invalid item code. Good bye!'
Actual Results: As Expected
Pass/Fail: Pass
*/

