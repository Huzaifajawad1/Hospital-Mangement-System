// HOSPITAL MANAGEMENT SYSTEM IN C LANGUAGE PROGRAMMING FUNDAMENTALS PROJECT BY USAID BIN REHAN AND HUZAIFA JAWWAD OF BS-CS 1-A FALL 2020 //

// LIBRARIES and their use //  
#include<stdio.h>     // Use for standard I/O Operation
#include<conio.h>    // Use for delay(),getch(),gotoxy()
#include<ctype.h>   // Use for toupper(), tolower()
#include<string.h> // Use for strcmp(),strcpy(),strlen()
#include<stdlib.h>
#include<windows.h> //used to add colour


// GLOBAL VARIABLES //
char ans=0; 
int ok;
int b, valid=0;
char review[100];
char FB[100];
char LKDIN[100];
char Git[100];
int profit;


// FUNCTION DECLERATION (PROTOTYPE) //
 void edit_sm(void);			  // Edit Social Media Links
void WelcomeScreen(void);    // WelcomeScreen
void Title(void);           // Title
void MainMenu(void);       // MainMenu
void LoginScreen(void);   // LoginScreen
void Add_rec(void);      // Add Record
void func_list();       // List patient details 
void Search_rec(void); // Search Records
void Edit_rec(void);  // Edit Records
void Dlt_rec(void);  // Delete Records
void ex_it(void);   // Exit
void start(void);  // Start
void info(void);  // Info


// DEFINES gotoxy() FOR ANSI C COMPILERS //
void gotoxy(short x, short y) 
{
	COORD pos = {x, y}; //sets co-ordinates in (x,y).
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


// PATIENTS' STRUCTURE for holding patient's details //
struct patient
{
	int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20]; 
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};


// GLOBAL VARIABLES OF PATIENT STRUCTURE //
struct patient p, temp_c;


// FUNCTION FOR SEEING DOCTORS' INFORMATION //
void docinfo()
{
	system("cls");
	Title();
	printf("\n----------------------HERE YOU CAN GET INFORMATION ABOUT DOCTORS WE HAVE-------------------\n");
	printf("|   NAME   |\t|   ROOM NUMBER   |\t|   CATEGORY   |\t|   SHEDULE       |\t|   FEES   |\n");
	printf("|  RIZWAN  |\t|      R-25       |\t|  RADIOLOGIST |\t|MON-FRI(1PM-7PM) |\t|   1200   |\n");
	printf("|   HAMZA  |\t|      R-27       |\t| NEURO-SURGEON|\t|MON-FRI(12PM-8PM)|\t|   1500   |\n");
	printf("|  DANIYAL |\t|      R-29       |\t| CARDIOLIGIST |\t|MON-FRI(7PM-12PM)|\t|   0800   |\n");
	printf("|    ASAD  |\t|      R-30       |\t|   DENTISTS   |\t|MON-FRI(2PM-9PM) |\t|   1400   |\n");
	printf("|   ANWAR  |\t|      R-42       |\t|  RADIOLOGIST |\t|MON-FRI(9AM-1PM) |\t|   1200   |\n");
	printf("|   UMER   |\t|      R-32       |\t|  RADIOLOGIST |\t|MON-FRI(7PM-11PM)|\t|   1200   |\n");
	printf("|   JOHN   |\t|      R-22       |\t| NEURO-SURGEON|\t|MON-FRI(12PM-8PM)|\t|   1500   |\n");
	printf("|   WAQAR  |\t|      R-20       |\t| NEURO-SURGEON|\t|MON-FRI(12PM-8PM)|\t|   1500   |\n");
	printf("|   AMJAD  |\t|      R-21       |\t| CARDIOLIGIST |\t|MON-FRI(7PM-12PM)|\t|   0800   |\n");
	printf("|   ABRAR  |\t|      R-24       |\t| CARDIOLIGIST |\t|MON-FRI(7PM-12PM)|\t|   0800   |\n");
	printf("|    UMER  |\t|      R-52       |\t|   DENTISTS   |\t|MON-FRI(2PM-9PM) |\t|   1400   |\n");
	getch();
	system("cls");
	start();
}


// FUNCTION FOR TESTS AVAILABLE //
void test()
{
	system("cls");
	Title();
	printf("--------------THE TEST AVAILABLE HERE ARE--------------\n");
	printf("|    NAME    |\t|   ROOM NUMBER   |\t|   FEES   |\n");
	printf("|CORONA TEST |\t|       T-1       |\t|   2500   |\n");
	printf("|DENGUE TEST |\t|       T-2       |\t|   3500   |\n");
	printf("|    ECG     |\t|       T-3       |\t|   1500   |\n");
	printf("|BLOOD  TEST |\t|       T-4       |\t|   0600   |\n");
	printf("|URINE  TEST |\t|       T-5       |\t|   2000   |\n");
	printf("|TYPHOID TEST|\t|       T-6       |\t|   1200   |\n");
	printf("|SUGER TEST  |\t|       T-7       |\t|   0400   |\n");
	printf("|LIVER TEST  |\t|       T-8       |\t|   2500   |\n");
	getch();
	system("cls");
	start();
}


// FUNCTION FOR COVID-19 UPDATES //
void covid()
{
	system("cls");
	Title();
	printf("----------------COVID 19-------------\n");
	printf("\nCOVID 19 IS INCREASION AT AN ALARMING RATE.WE MUST TAKE MEASURES TO PROTECT OUR SELF AND OUR FAMILY.\nSOPS MUST TO STRICTLY FOLLOWED\n");
	printf(" AND ONLY WHEN NEEDED SHOULD ONE GO OUT SIDE IF ONE FELLS ANY SYMPTOMS HE MUST IMMEDIATELY GET TESTED AND QUARINTINE HIMSELF FOR 14 DAYS.\n");
	printf("--------------Symptoms---------------");
	printf("Most common symptoms:\nfever \ndry cought\niredness\nLess common symptoms:\naches and pains \nsore throat \ndiarrhoea\nconjunctivitis\nheadache\nloss of taste or smell\na rash on skin, or discolouration of fingers or toes\nSerious symptoms:\ndifficulty breathing or shortness of breathchest\n pain or pressure\nloss speech or movement\n");
	printf("If COVID-19 is spreading in your community, stay safe by taking some simple precautions, such as physical distancing,\n wearing a mask, keeping rooms well ventilated, avoiding crowds, cleaning your hands, and coughing into \na bent elbow or tissue. Check local advice where you live and work. Do it all!\n");
	printf("Regularly and thoroughly clean your hands with an alcohol-based hand rub or wash them with soap and water. \nThis eliminates germs including viruses that may be on your hands.\n");
	printf("Avoid touching your eyes, nose and mouth. Hands touch many surfaces and can pick up viruses. \nOnce contaminated, hands can transfer the virus to your eyes, nose or mouth. From there, the virus can enter your body and infect you\n");
	printf("Cover your mouth and nose with your bent elbow or tissue when you cough or sneeze. Then dispose of the used tissue immediately into a closed bin and wash your hands.\n By following good ‘respiratory hygiene’, you protect the people around you from viruses, which cause colds, flu and COVID-19\n");
	printf("Clean and disinfect surfaces frequently especially those which are regularly touched, such as door handles, faucets and phone screens.\n"),
	getch();
	system("cls");
	start();
}


// FUNCTION FOR ADDING REVIEWS //
void add_review(void)
{
	system("cls");
	Title();
	printf("\nThank you for choosing our service. Please tell how was your experience: \n");
	FILE *ptr;
	fflush(stdin);
	gets(review);
	
	if ( (ptr = fopen("C:\\Users\\M. Nasir\\Desktop\\Pf final project\\review.dot","a") ) == NULL )
	{
       printf("Error! opening file");
       exit(1);
    }
    
    fprintf(ptr,"%s",review);
    fprintf(ptr,"\n");
	fclose(ptr);
	getch();
	system("cls");
	start();
}


// FUNCTION FOR VIEWING OTHER REVIEWS //
void see_review(void)
{
	system("cls");
	Title();
	FILE *ptr;
	ptr = fopen("C:\\Users\\M. Nasir\\Desktop\\Pf final project\\review.dot","r");
	
	if(ptr == NULL)
	{
		printf("Unable to open file");
		exit(1);
	}
	
	while( fgets(review, sizeof(review), ptr) != NULL )
	{
		fputs(review,stdout);
		fputs("|*\n",stdout);
	}
	
    fclose(ptr);
	getch();
	system("cls");
	start();
}


// FUNCTION FOR VIEWING "ABOUT US" //
void see_aboutus(void)
{
	system("cls");
	Title();
	printf("\nThe mission of FAST Hospital is to improve quality of life in the developing world and beyond through world-class teaching, research and health-care delivery.\n");
	printf("THE HOSPITAL WAS FOUNDER BY FAST IN 1987\n");
	getch();
	system("cls");
	start();
}


// SEE SM LINKS FUNCTION //
void see_sm(void)
{
	system("cls");
	Title();
	printf("\nFacebook: ");
	puts(FB);
	printf("\nLinkedIn: ");
	puts(LKDIN);
	printf("\nGithub: ");
	puts(Git);
	getch();
	system("cls");
	start();
}


// SEE DISEASE INFORMATION FUNCTION //
void see_disease(void)
{
	system("cls");
	Title();
	int x;
	printf("\nPress 1 to view Fibrodysplasia,\n 2 to view Necrotizing Fasciitis,\n 3 to view Hellyfish/BlueBottle Sting and\n 4 to view Radioactive Exposure\n");
	scanf(" %d",&x);
	switch(x)
	{
		case 1:
			printf("\nTest: Under Research , Treatment: Not Discovered yet , Support by Hospital:None  \n");	
		case 2:
			printf("\nTest: Biopsy -> Bloodwork -> Imaging, Treatment: Intavenous anti-Biotic Therapy, Support by Hospital: Hyperbaric Oxygen Therapy\n");	
		case 3:
			printf("\nTest: none, Treatment: Hot Water Immersion, Support by Hospital: Sting Removal by Tweezers \n");	
		case 4:
			printf("\nTest: Gieger-Muller Tube, Treatment: Supportive Care, Support by Hospital: none - please do support care in home isolation\n");			
	}
	getch();
	system("cls");
	start();
}


// FUNCTION TO CALCULATE BILL //
void cal_bill(void)
{
	system("cls");
	Title();
	int doc,test,disc;float total;
	printf("\nInput the doctor's bill: ");
	scanf(" %d", &doc);
	printf("\nInput the test bill and if none then input 0: ");
	scanf(" %d", &test);
	printf("\nInput discount percentage and if none then input 0: ");
	scanf(" %d", &disc);
	total=(doc + test)*( (100 - disc)/100);
	FILE *pro;
	if ( (pro=fopen("profit.dat","r") )==NULL)
	{
       printf("Error! opening file");
       exit(4);
    }
    fscanf(pro,"%d",&profit);
    profit+=total;
    fclose(pro);
	if ( (pro=fopen("profit.dat","w") )==NULL)
	{
       printf("Error! opening file");
       exit(4);
    }
    fprintf(pro,"%d",profit);
    fclose(pro);
	printf("\nTotal Bill = %f\n", total);
	getch();
	system("cls");
	MainMenu();
}
// FUNCTION TO EDIT SOCIAL MEDIA LINKS //
void edit_sm(void)
{
	system("cls");
	Title();
	int x;char z[5];
	
	cgb: printf("\nPress the number to edit link: 1. FaceBook, 2. LinkedIn, 3. Github\n");
	scanf(" %d",&x);
	switch(x)
	{
		case 1:
		{
			printf("ENTER FACEBOOK LINK\n");
			fflush(stdin);
			gets(FB);
			break;
		}
		
		case 2:
		{
			printf("ENTER LINKEDIN LINK\n");
			fflush(stdin);
			gets(LKDIN);
			break;
		}
			
		case 3:
		{
			printf("ENTER GITHUB LINK\n");
			fflush(stdin);
			gets(Git);
			break;
		}
			
		default:
			printf("\nPlease enter a valid number\n");
	}
	printf("DO YOU WANT TO CONTINUE");
	scanf(" %s",z);
	if(strcmp(z,"yes")==0)
	{
		goto cgb;
	}
	getch();
	system("cls");
	MainMenu();
}
void show_pro()
{
	system("cls");
	Title();
	printf("THE TOTAL PROFIT EARNED UPTO NOW IS GIVEN BELOW\n");
	FILE *pro;
	if ( (pro=fopen("profit.dat","r") )==NULL)
	{
       printf("Error! opening file");
       exit(5);
    }
    fscanf(pro,"%d",&profit);
    fclose(pro);
	printf("\n\t%d\n",profit);
	printf("\nNote:This Value is the net balance and includes the salaries of doctors and other costs which can be deducted\n");
	getch();
	MainMenu();
}
void create_pm(void)
{
	system("cls");
	Title();
	printf("\nCreate Post Mortem Report\n");
	FILE *pm;
	char pinfo[100],cdeath[300];
	printf("\nENTER ALL THE PERSONAL INFORMATION ABOUT THE BODY\n");
	fflush(stdin);
	gets(pinfo);
	printf("\nENTER THE CAUSE OF DEATH\n");
	fflush(stdin);
	gets(cdeath);
	if ( (pm = fopen("postmortem.dat","a") )==NULL)
	{
       printf("Error! opening file");
       exit(3);
    }
    fprintf(pm,"-----------------------------------------------------");
    fprintf(pm,"\nPersonal Details:\n");
    fprintf(pm,"%s\n",pinfo);
     fprintf(pm,"\nCause of Death:\n");
    fprintf(pm,"%s\n",cdeath);
    fprintf(pm,"-----------------------------------------------------");
	fclose(pm);
	getch();
	system("cls");
	MainMenu();
}
void show_pm(void)
{
	system("cls");
	Title();
	char ch;
	printf("\nPost Mortem Reports\n");
	FILE *pm;
	if ( (pm=fopen("postmortem.dat","r") )==NULL)
	{
       printf("Error! opening file");
       exit(3);
    }
    ch=fgetc(pm);
    while(ch!=EOF)
    {
    	printf("%c",ch);
    	ch=fgetc(pm);
	}
	fclose(pm);
	getch();
	system("cls");
	MainMenu();
}

main(void)
{
    WelcomeScreen();
	start();
}


// FUNCTION FOR MAIN SCREEN OF PATIENTS' ACCOUNT //
void info(void)
{
    int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1.DOCTOR INFORMATION\n");
	printf("\n\t\t\t\t2. TEST INFORMATION\n");
	printf("\n\t\t\t\t3. COVID INFORMATION\n");
	printf("\n\t\t\t\t4. ENTER REVIEW\n");
	printf("\n\t\t\t\t5. SEE REVIEW\n");
	printf("\n\t\t\t\t6. ABOUT US\n");
	printf("\n\t\t\t\t7. SEE SOCIAL MEDIA LINKS\n");
	printf("\n\t\t\t\t8. SEE DISEASES INFORMATION\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 8:"); 
	scanf("%i", &choose);
	
	switch(choose)
	{
	case 1:
		docinfo();
    	break;
    case 2:
    	test();
    	break;
	case 3:
	    covid();
    	break;
	case 4:
		add_review();
		break;
	case 5:
		see_review();
		break;
	case 6:
		see_aboutus();
    	break;
    case 7:
    	see_sm();
    	
    case 8:
		see_disease();
	default:
			system("cls");
	        start();
	       
		
	}	
}


// START SCREEN DISPLAY //
void start(void)
{
	system("cls");
	Title();
	int x;
	printf("\n\nENTER 1 IF YOU ARE THE ADMIN AND 2 IF YOU ARE THE PATIENT\n");
	scanf("\n%d",&x);
		
		if(x ==1 || x == 2)
  {
		if(x == 1)
	{
		system("cls");
		LoginScreen();
	}
	
	else if(x == 2)
	{
		system("cls");
		info();
	}
  }
		else
		{
		 start();
       }
}


// FUNCTION FOR WELCOME SCREEN //
void WelcomeScreen(void)
{
	Title();
	printf("\n\n\n\n\n\n\n\t\t\t\t#########################################");
	printf("\n\t\t\t\t#\t\t WELCOME TO\t\t#");
	printf("\n\t\t\t\t#   FAST HOSPITAL MANAGEMENT SYSTEM     #");
	printf("\n\t\t\t\t#########################################");
	printf("\n\n\n\n\n Press any key to continue......\n");
	getch();//Use to holds screen for some seconds
	system("cls");//Use to clear screen
	
}


// FUNCTION FOR TITLE SCREEN DISPLAY //
void Title(void)//function for title screen
{
	int i;
	do
	{
		i=rand() % 10;
	}
	while(i==0||i==1);//i
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t       Fast HOSPITAL         ");
	printf("\n\t\t----------------------------------------------------------------------------------\n");
}


// FUNCTION FOR MAIN MENU DISPLAY //
void MainMenu(void)
{
	system("cls");
	int choose;
	Title();
	printf("\n\n\n\n\n\t\t\t\t1. Add Patients Record\n");
	printf("\n\t\t\t\t2. List Patients Record\n");
	printf("\n\t\t\t\t3. Search Patients Record\n");
	printf("\n\t\t\t\t4. Edit Patients Record\n");
	printf("\n\t\t\t\t5. Delete Patients Record\n");
	printf("\n\t\t\t\t6. Edit Social Media Links\n");
	printf("\n\t\t\t\t7. CALCULATE BILL \n");
	printf("\n\t\t\t\t8. SEE TOTAL PROFIT\n");
	printf("\n\t\t\t\t9. CREATE POST MORTEM\n");
	printf("\n\t\t\t\t10. SHOW POST MORTEM\n");
	printf("\n\t\t\t\t11. RETURN TO START\n");
	printf("\n\t\t\t\t12. Exit\n");
    printf("\n\n\n \n\t\t\t\tChoose from 1 to 12:"); 
	scanf(" %d", &choose);
	switch(choose)
	{
	
	case 1:
		Add_rec();
    	break;
    	
    case 2:
    	func_list();
    	break;
    	
	case 3:
	Search_rec();
    	break;
    	
	case 4:
		Edit_rec();
		break;
		
	case 5:
		Dlt_rec();
		break;
		
	case 6:
		{
		edit_sm();
		break;
	}
	case 7:
		cal_bill();
     	break;
    case 8:
    	show_pro();
    	break;
    case 9:
    	create_pm();
    	break;
    case 10:
    	show_pm();
    	break;
	case 11:
	    system("cls");
	    start();
	case 12:
		ex_it();
    	break;
     	
	default:
		{
		
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();
	system("cls");
	start();
        }    
	}
}


// FUNCTION FOR EXIT SCREEN //
void ex_it(void)
{
	system("cls");
	Title();
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
	getch();
	start();
}


// FUNCTION FOR LOGIN SCREEN //
void LoginScreen(void)
{
	Title();
	int e = 0;
	char Username[15];
	char Password[15];
	char original_Username[25]="huzaifa";
	char original_Password[15]="123";

	do
	{
		printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
		printf("\n\n\n\t\t\t\t\tUSERNAME:");
		scanf("%s",&Username);
		printf("\n\n\t\t\t\t\tPASSWORD:");
		scanf("%s",&Password);
	
		if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
		{
			printf("\n\n\n\t\t\t\t\t...Login Successfull...");
			getch();
			MainMenu();
			break;
		}
		
		else
		{
			printf("\n\t\t\tUserName or Password is incorrect:( Try Again :)");
			e++;
			getch();
		}
	}
	while(e <= 2);
	
	if(e > 2)
	{
		printf("You have cross the limit. You cannot login. :( :(");
		getch();
    	ex_it();
	}
	
	system("cls");
}


// ADD RECORD FUNCTION //
void Add_rec(void)
{
	system("cls");
	Title();
	char ans;
	FILE *ek;
	ek = fopen("Record2.dat", "a");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
	
	// FIRST NAME //
	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",p.First_Name);
	p.First_Name[0] = toupper( p.First_Name[0] );
	
	if( strlen(p.First_Name) > 20 || strlen(p.First_Name) < 2 )
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	
	else
	{
		for (b = 0 ; b < strlen(p.First_Name) ; b++)
		{
			if( isalpha( p.First_Name[b] ) )
			{
				valid = 1;
			}
			
			else
			{
				valid = 0;
				break;
			}
		}
		
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
	
	// LAST NAME //
	B:
	printf("\n\t\t\tLast Name: ");
    scanf("%s",p.Last_Name);
    p.Last_Name[0] = toupper( p.Last_Name[0] );
    if( strlen(p.Last_Name) > 20 || strlen(p.Last_Name) < 2)
	{
		printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
		goto B;
	}
	else
	{
		for (b = 0 ; b < strlen(p.Last_Name) ; b++)
		{
			if( isalpha( p.Last_Name[b] ) )
			{
				valid = 1;
			}
			
			else
			{
				valid = 0;
				break;
			}
		}
		
		if(!valid)
		{
			printf("\n\t\t Last name contain Invalid character :(  Enter again :)");
			goto B;
		}
	}

	// GENDER // 
	do
	{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&p.Gender);
		if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
		{
			ok = 1;
		}
		
		else 
		{
			ok = 0;
		}
		
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	}
	while(!ok);
	
	// AGE //
    printf("\n\t\t\tAge:");
    scanf(" %i",&p.age);
  
	// ADDRESS //
    do
    {
    C:
    printf("\n\t\t\tAddress: ");
    scanf("%s",p.Address);
    p.Address[0]=toupper(p.Address[0]);
    	if(strlen(p.Address)>20||strlen(p.Address)<4)
		{
			printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
			goto C;
		}
	}
	while(!valid);

	// CONTACT NUMBER //
	do
	{
		D:
    	printf("\n\t\t\tContact no: ");
    	scanf("%s",p.Contact_no);
    	if(strlen(p.Contact_no)!=11)
		{
			printf("\n\t Sorry :( Invalid. Contact no. must contain 11 numbers. Enter again :)");
			goto D;
		}
	
		else
		{
			for (b=0;b<strlen(p.Contact_no);b++)
			{
				if (!isalpha(p.Contact_no[b]))//CHECK IF THERE IS NO OTHER CHARACTER 
				{
					valid=1;
				}
			
				else
				{
					valid=0;
					break;
				}
			}
		
			if(!valid)
			{
				printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
				goto D;
			}
		}
	}
	while(!valid);

	// EMAIL //
	do
	{
    	printf("\n\t\t\tEmail: ");
    	scanf("%s",p.Email);
    
    	if (strlen(p.Email)>30||strlen(p.Email)<8)
    	{	
    		printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");	
		}
	}
	while(strlen(p.Email) > 30 || strlen(p.Email) < 8);

	// PROBLEM //
    E:
    printf("\n\t\t\tProblem: ");
    scanf("%s",p.Problem);
    p.Problem[0] = toupper(p.Problem[0]);
    
    if(strlen(p.Problem) > 15 || strlen(p.Problem) < 3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 15 and min range is 3 :)");
		goto E;
	}
	
	else
	{
		for (b=0;b<strlen(p.Problem);b++)
		{
			if (isalpha(p.Problem[b]))
			{
				valid=1;
			}
			
			else
			{
				valid=0;
				break;
			}
		}
		
		if(!valid)
		{
			printf("\n\t\t Problem contain Invalid character :(  Enter again :)");
			goto E;
		}
	}

	// PRESCRIBED DOCTOR //
	F:
    printf("\n\t\t\tPrescribed Doctor:");
    scanf("%s",p.Doctor);
    p.Doctor[0]=toupper(p.Doctor[0]);
    if(strlen(p.Doctor)>30||strlen(p.Doctor)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 30 and min range is 3 :)");
		goto F;
	}
	
	else
	{
		for (b=0;b<strlen(p.Doctor);b++)
		{
			if (isalpha(p.Doctor[b]))
			{
				valid=1;
			}
			
			else
			{
				valid=0;
				break;
			}
		}
		
		if(!valid)
		{
			printf("\n\t\t Doctor name contain Invalid character :(  Enter again :)");
			goto F;
		}
	}
    
    fprintf(ek," %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    
    if (toupper(ans) == 'Y')
	{
    	Add_rec();
	}
	
    else if(toupper(ans) == 'N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
	
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}


// FUNCTION TO VIEW RECORDS //
void func_list()
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Patients Record !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("Full Name");
		gotoxy(20,15);
		printf("Gender");
		gotoxy(32,15);
		printf("Age");
		gotoxy(37,15);
		printf("Address");
		gotoxy(49,15);
		printf("Contact No.");
		gotoxy(64,15);
		printf("Email");
		gotoxy(88,15);
		printf("Problem");
		gotoxy(98,15);
		printf("Prescribed Doctor\n");
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, 
					&p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
			gotoxy(1,row);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(20,row);
			printf("%c",p.Gender);
			gotoxy(32,row);
			printf("%i",p.age);
			gotoxy(37,row);
			printf("%s",p.Address);
			gotoxy(49,row);
			printf("%s",p.Contact_no);
			gotoxy(64,row);
			printf("%s",p.Email);
			gotoxy(88,row);
			printf("%s",p.Problem);
			gotoxy(98,row);
			printf("%s",p.Doctor);
			row++;
		}
		fclose(ek);
		getch();
		MainMenu();
}


// FUNCTION TO SEARCH RECORDS //
void Search_rec(void)
{
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Patients Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Patient Name to be viewed:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
	{
		if(strcmp(p.First_Name,name)==0)
		{
			gotoxy(1,15);
			printf("Full Name");
			gotoxy(25,15);
			printf("Gender");
			gotoxy(32,15);
			printf("Age");
			gotoxy(37,15);
			printf("Address");
			gotoxy(52,15);
			printf("Contact No.");
			gotoxy(64,15);
			printf("Email");
			gotoxy(80,15);
			printf("Problem");
			gotoxy(95,15);
			printf("Prescribed Doctor\n");
			printf("=================================================================================================================");
			gotoxy(1,18);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(25,18);
			printf("%c",p.Gender);
			gotoxy(32,18);
			printf("%i",p.age);
			gotoxy(37,18);
			printf("%s",p.Address);
			gotoxy(52,18);
			printf("%s",p.Contact_no);
			gotoxy(64,18);
			printf("%s",p.Email);
			gotoxy(80,18);
			printf("%s",p.Problem);
			gotoxy(95,18);
			printf("%s",p.Doctor);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Search_rec();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		MainMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}


// EDIT RECORD FUNCTION //
void Edit_rec(void)
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();
 	   ft = fopen("temp2.dat","w+");
	   ek=fopen("Record2.dat","r");
	   if(ek == NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		MainMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Patients Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the First Name of the Patient : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0] = toupper( name[0] );
		gotoxy(12,15);
		
		if(ft == NULL)
		{
			printf("\n Can not open file");
			getch();
			MainMenu();
		}
		
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
			if( strcmp(p.First_Name, name) == 0 )
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
				gotoxy(12,22);	
				printf("Enter New First Name: ");
				scanf("%s",p.First_Name);    
				gotoxy(12,24);
				printf("Enter Last Name: ");
				scanf("%s",p.Last_Name);
				gotoxy(12,26);
				printf("Enter Gender: ");
				scanf(" %c",&p.Gender);
				p.Gender=toupper(p.Gender);
				gotoxy(12,28);
				printf("Enter age: ");
				scanf(" %i",&p.age);
				gotoxy(12,30);
				printf("Enter Address: ");
				scanf("%s",p.Address);
				p.Address[0]=toupper(p.Address[0]);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",p.Contact_no);
				gotoxy(12,34);
				printf("Enter New email: ");
				scanf("%s",p.Email);
			    gotoxy(12,36);
				printf("Enter Problem: ");
				scanf("%s",p.Problem);
				p.Problem[0]=toupper(p.Problem[0]);
			    gotoxy(12,38);
				printf("Enter Doctor: ");
			    scanf("%s",p.Doctor);
			    p.Doctor[0]=toupper(p.Doctor[0]);
			    printf("\nPress U charecter for the Updating operation : ");
				ch = getche();
				
				if(ch == 'u' || ch == 'U')
				{
					fprintf(ft,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
					printf("\n\n\t\t\tPatient record updated successfully...");
				}					
			}
			
			else
			{
				fprintf(ft,"%s %s %c %i %s %s %s %s %s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);	
			}
		 }
		 
		if(!valid) 
		{
			printf("\n\t\tNO RECORD FOUND...");
        }
        
	    fclose(ft);
	    fclose(ek);
	    remove("Record2.dat");
   	    rename("temp2.dat","Record2.dat");
		getch();
		MainMenu();		
}


// DELETE RECORD FUNCTION //
void Dlt_rec()
{
	char name[20];
	int found = 0;
	system("cls");
	Title();
	FILE *ek, *ft;
	ft = fopen("temp_file2.dat","w+");
	ek = fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Patients Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\nEnter Patient Name to delete: ");
	fflush(stdin);
	gets(name);
	name[0] = toupper(  name[0] );
	
	while (fscanf(ek, "%s %s %c %i %s %s %s %s %s", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor) != EOF)
	{
		if (strcmp(p.First_Name,name)!=0)
		fprintf(ft,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
		else 
		{
			printf("%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
			found = 1;
		}
	}
	
	if(found == 0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		MainMenu();
	}
	
	else
	{
		fclose(ek);
		fclose(ft);
		remove("Record2.dat");
		rename("temp_file2.dat","Record2.dat");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		MainMenu();
	}
} 






