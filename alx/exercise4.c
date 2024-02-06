#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct table - Strucutre to define the Evet type, Event MinimumRate and the manager
 * @event_type: The type of the event
 * @eventminimumrate: The Minimum rate of the event
 * @manger: The manager in charged of the event
*/
struct EventInfo
{
	char Event_type[50];
	double EventMininumRate;
	char manager[50];
};

/**
 * set_information - Function to set the information of the event
 * @infos: define structure to set the informations
 * @eventminimumrate: The minimum rate of the even
 * @manager: The manager in charge
*/
void set_intformation(struct EventInfo *infos, char *Event_type, double EventMinimumRate, char *manager)
{
	strcpy(infos->Event_type, Event_type);
	strcpy(infos->manager, manager);
	infos->EventMininumRate = EventMinimumRate;
}

/**
 * main - Entry point
 * Return: Alway 0 (Success)
*/

int main(void)
{
	int isvalidinput;
	char EventType[50];
	
	// Definition of the array to hold event's informations
	struct EventInfo Event[4]; 

	// Call of the set_information function to set event's informations
	set_intformation(&Event[0], "Corporate", 500.00, "Pop");
	set_intformation(&Event[1], "Private", 300.00, "Pop");
	set_intformation(&Event[2], "Non profit", 150.00, "Mom");
	set_intformation(&Event[3], "Special", 200.00, "Mom");

	// Show menu to the user to choose one option
	printf("Welcome to Caterer's Company\n       Availlable events\n\n");
	printf("1 - Corporate\n2 - Private\n3 - Non profit\n4 - Special\n");


	isvalidinput = 0; // Set flag isvalidinput to 0 (False)

	while (!isvalidinput) // Repeat the code as long as the the flag isvalidinput is false
	{
		printf("\nEnter the type of Event in title : ");
		scanf("%s", EventType);

		for (int i = 0; i < 4; i++)
		{
			if (strcmp(EventType, Event[i].Event_type) == 0) // compare the input Event type to the elemment event type of the structure
			{                              
				isvalidinput = 1; // Reset the flag to one (True) in case string compare return 0
				//Printing the informations of the event
				printf("\nEvent Informations*************\n");
				printf("Manager                    : %s\n", Event[i].manager);
				printf("Type of event Chosen       : %s\n", Event[i].Event_type);
				printf("Minimum rate to be charged : $%.2lf\n", Event[i].EventMininumRate);
				printf("**************************************\n");
				break;
			}
		}
		if (!isvalidinput) // Check if the flag isvalidinput is always false
		{
			printf("\n          Invalid type of event please\n");
		}

	}

	return (0);
}
