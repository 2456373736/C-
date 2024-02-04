#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
struct contestant
{
	char name[40];
	int age;
	int contact;
};
int main()
{
	int h,s,m,c,choice;
	struct contestant c1;
	printf("Enter your details here :-\n");
	printf("Name: ");
	gets(c1.name);
	printf("Age: ");
	scanf("%d",&c1.age);
	printf("Contact Number: ");
	scanf("%d",&c1.contact);
	printf("\nWe have different type of quizes; input the given number of the quiz which you'd like to play! :)\n");
	printf("1. History\t2.Sports\t3.Movies\t4.Cartoon\n");
	printf("\nEnter here: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nThere are 3 levels in this quiz; starting with EASY, MEDIUM and HARD. Let's see your performance! :)\n");
			printf("Choose:- \n1)Ramayana\t 2)Mahabharata\nEnter here: ");
			scanf("%d",&h);
			if(h==1)
			history1a();
			else if(h==2)
			history2a();
			else
			printf("Enter a valid choice.");
			break;
		case 2:
			printf("\nThere are 3 levels in this quiz; starting with EASY, MEDIUM and HARD. Let's see your performance! :)\n");
			printf("Choose:- \n1)Cricket\t 2)Football\nEnter here: ");
			scanf("%d",&s);
			if(s==1)
			sports1a();
			else if(s==2)
			sports2a();
			else
			printf("Enter a valid choice.");
			break;
		case 3:
			printf("\nThere are 3 levels in this quiz; starting with EASY, MEDIUM and HARD. Let's see your performance! :)\n");
			printf("Choose:- \n1)Bollywood\t 2)Hollywood\nEnter here: ");
			scanf("%d",&m);
			if(m==1)
			movies1a();
			else if(m==2)
			movies2a();
			else
			printf("Enter a valid choice.");
			break;
		case 4:
			printf("\nThere are 3 levels in this quiz; starting with EASY, MEDIUM and HARD. Let's see your performance! :)\n");
			printf("Choose:- \n1)Doraemon\t 2)Shinchan\nEnter here: ");
			scanf("%d",&c);
			/*if(c==1)
			cartoon1a();
			else if(c==2)
			cartoon2a();
			else
			printf("Enter a valid choice.");*/
			break;
		default:
			printf("Enter a valid choice.");
			break;
		return 0;
	}
	
	
	
	
}
int history1a()
{
	int a,b,c,d,e,f,count=0;
	printf("Easy level\n");//the contestant gets 10 points on every right answer.
	printf("a. Who had composed the original Ramayana?\n1)Tulsi Das\n2)Rishi Valmiki\nEnter your option here: ");
	scanf("%d",&a);
	printf("\nb. Ravana was a devotee of who among the following God?\n1)Lord Shiv\n2)Lord Vishnu\nEnter your option here: ");
	scanf("%d",&b);
	if(a==2 && b==1)
	{
		count+=20;
		printf("You passed this level!\nYour score=%d\n",count);;
	}
	else
	{
		printf("Try again!\n");
		history1a();
	}
	int history1b()
	{
	count==20?printf("Medium Level\n"): printf("Try again mate!\n");
	printf("a. What was the name of Lord Rama's father?\n1)Duryodhana\n2)Dasaratha\nEnter your option here: ");
	scanf("%d",&c);	
	printf("b. Which city did Lord Rama rule as the king?\n1)Lanka\n2)Ayodhya\nEnter your option here: ");
	scanf("%d",&d);
	if(c==2 && d==2)
	{
		count+=20;
		printf("You passed this level too!\nYour score=%d\n",count);
	}
	else
	{
		printf("Try again!\n");
		history1b();
	}
	}
	history1b();
	int history1c()
	{
	count==40?printf("Hard Level\n"): printf("Try again mate\n!");
	printf("a. What was the name of the forest where Lord Rama, Lakshmana and Goddess Sita stayed during exile?\n1)Karanya\n2)Dandakaranya\nEnter your option here: ");
	scanf("%d",&e);
	printf("b. Who has written Bhavartha Ramayana?\n1)Eknath\n2)Krittibas\nEnter your option here: ");
	scanf("%d",&f);
	if(e==2 && f==1)
	{
		count+=20;
		printf("You passed this test! Congratulations!\nYour score= %d\n",count);
		printf("Total score= %d/60",count);
	}
	else
	{
		printf("Try again!\n");
		history1c();
	}
	}
	history1c();
}
int history2a()
{
	int a,b,c,d,e,f,count=0;
	printf("Easy level\n");//the contestant gets 10 points on every right answer.
	printf("a. Who wrote the Mahabharata?\n1)Vedavyasa\n2)Lord Ganesha\nEnter your option here: ");
	scanf("%d",&a);
	printf("\nb. What was Yudhistra's weakness?\n1)Women\n2)Gambling\nEnter your option here: ");
	scanf("%d",&b);
	if(a==2 && b==2)
	{
		count+=20;
		printf("You passed this level!\nYour score=%d\n",count);;
	}
	else
	{
		printf("Try again!\n");
		history2a();
	}
	int history2b()
	{
	count==20?printf("Medium Level\n"): printf("Try again mate!\n");
	printf("a. Which Pandava vowed to kill the evil Dushasana and drink his blood when he molested Draupadi?\n1)Arjuna\n2)Bheemasena\nEnter your option here: ");
	scanf("%d",&c);	
	printf("b. Who was the First Commander in Chief of the Kaurava Army?\n1)Bheeshma\n2)Dronacharya\nEnter your option here: ");
	scanf("%d",&d);
	if(c==2 && d==1)
	{
		count+=20;
		printf("You passed this level too!\nYour score=%d\n",count);
	}
	else
	{
		printf("Try again!\n");
		history2b();
	}
	}
	history2b();
	int history2c()
	{
	count==40?printf("Hard Level\n"): printf("Try again mate\n!");
	printf("a. Which apsara wanted marry Arjuna when he was in Indraloka?\n1)Urwashi\n2)Rambha\nEnter your option here: ");
	scanf("%d",&e);
	printf("b. Virata was one of the Maharathis in the Pandava army: who was the other?\n1)Drupada\n2)Drishtadyumna\nEnter your option here: ");
	scanf("%d",&f);
	if(e==1 && f==1)
	{
		count+=20;
		printf("You passed this test! Congratulations!\nYour score= %d\n",count);
		printf("Total score= %d/60",count);
	}
	else
	{
		printf("Try again!\n");
		history2c();
	}
	}
	history2c();
}
int sports1a()
{
	int a,b,c,d,e,f,count=0;
	printf("Easy level\n");//the contestant gets 10 points on every right answer.
	printf("a. What is the full form of ICC?\n1)International Council of Cricket\n2)International Cricket Council\nEnter your option here: ");
	scanf("%d",&a);
	printf("\nb. What is the full form of IPL?\n1)Indian Premiere League\n2)Indian Permanent League\nEnter your option here: ");
	scanf("%d",&b);
	if(a==2 && b==1)
	{
		count+=20;
		printf("You passed this level!\nYour score=%d\n",count);;
	}
	else
	{
		printf("Try again!\n");
		sports1a();
	}
	int sports1b()
	{
	count==20?printf("Medium Level\n"): printf("Try again mate!\n");
	printf("a. When did India played its first test match?\n1)25 August 1934\n2)25 June 1932\nEnter your option here: ");
	scanf("%d",&c);	
	printf("b. Who won the ICC Championship Trophy in 2013?\n1)Australia\n2)India\nEnter your option here: ");
	scanf("%d",&d);
	if(c==2 && d==2)
	{
		count+=20;
		printf("You passed this level too!\nYour score=%d\n",count);
	}
	else
	{
		printf("Try again!\n");
		sports1b();
	}
	}
	sports1b();
	int sports1c()
	{
	count==40?printf("Hard Level\n"): printf("Try again mate\n!");
	printf("a. Who is known as ''Captian Cool'?\n1)Sachin Tendulkar\n2)Mahendra Singh Dhoni\nEnter your option here: ");
	scanf("%d",&e);
	printf("b. Who is the top run scorer in 2019's World Cup'?\n1)Rohit Sharma\n2)Yuvraj Singh\nEnter your option here: ");
	scanf("%d",&f);
	if(e==2 && f==1)
	{
		count+=20;
		printf("You passed this test! Congratulations!\nYour score= %d\n",count);
		printf("Total score= %d/60",count);
	}
	else
	{
		printf("Try again!\n");
		sports1c();
	}
	}
	sports1c();
}
//Start Here
int sports2a()
{
	int a,b,c,d,e,f,count=0;
	printf("Easy level\n");//the contestant gets 10 points on every right answer.
	printf("a. What color card do refrees carry in a football match?\n1)White and Yellow\n2)Red and Yellow\nEnter your option here: ");
	scanf("%d",&a);
	printf("\nb. How many penalties are usually taken in a penalty shoot_out?\n1)5\n2)4\nEnter your option here: ");
	scanf("%d",&b);
	if(a==2 && b==1)
	{
		count+=20;
		printf("You passed this level!\nYour score=%d\n",count);;
	}
	else
	{
		printf("Try again!\n");
		sports2a();
	}
	int sports2b()
	{
	count==20?printf("Medium Level\n"): printf("Try again mate!\n");
	printf("a. What is the main color of Brazil's National team shirt'?\n1)Red\n2)Yellow\nEnter your option here: ");
	scanf("%d",&c);	
	printf("b. What is the usual length of time allowed for a half- time interval in a football match ?\n1)10 minutes\n2)15 minutes\nEnter your option here: ");
	scanf("%d",&d);
	if(c==2 && d==2)
	{
		count+=20;
		printf("You passed this level too!\nYour score=%d\n",count);
	}
	else
	{
		printf("Try again!\n");
		sports2b();
	}
	}
	sports2b();
	int sports2c()
	{
	count==40?printf("Hard Level\n"): printf("Try again mate\n!");
	printf("a. The penalty area is usually how far away from the touch line?\n1)16 yards\n2)18 yards\nEnter your option here: ");
	scanf("%d",&e);
	printf("b. Which animalis also a derogatory term used to describe a slow and?or uncreative player?\n1)Donkey\n2)Slug\nEnter your option here: ");
	scanf("%d",&f);
	if(e==2 && f==1)
	{
		count+=20;
		printf("You passed this test! Congratulations!\nYour score= %d\n",count);
		printf("Total score= %d/60",count);
	}
	else
	{
		printf("Try again!\n");
		sports2c();
	}
	}
	sports2c();
}
int movies1a()
{
	int a,b,c,d,e,f,count=0;
	printf("Easy level\n");//the contestant gets 10 points on every right answer.
	printf("a. The story of Kabhi Khushi Kabhie Gham revolves around the trials and tribulations of which family?\n1)The Malhotras\n2)The Raichands\nEnter your option here: ");
	scanf("%d",&a);
	printf("\nb. In Hera Pheri, what was Paresh Rawal's character called??\n1)Raju\n2)Baburao\nEnter your option here: ");
	scanf("%d",&b);
	if(a==2 && b==2)
	{
		count+=20;
		printf("You passed this level!\nYour score=%d\n",count);;
	}
	else
	{
		printf("Try again!\n");
		movies1a();
	}
	int movies1b()
	{
	count==20?printf("Medium Level\n"): printf("Try again mate!\n");
	printf("a. Finish the quote from Om Shanti Om: ''Ek chutki sindoor ki keemat, tum kya jaano _____?'?\n1)Mahesh Babu\n2)Ramesh Babu\nEnter your option here: ");
	scanf("%d",&c);	
	printf("b. In Jab We Met, what is the name of Geet's cousin?\n1)Roop\n2)Simran\nEnter your option here: ");
	scanf("%d",&d);
	if(c==2 && d==1)
	{
		count+=20;
		printf("You passed this level too!\nYour score=%d\n",count);
	}
	else
	{
		printf("Try again!\n");
		movies1b();
	}
	}
	movies1b();
	int movies1c()
	{
	count==40?printf("Hard Level\n"): printf("Try again mate\n!");
	printf("a. Who plays the female lead in the movie 'Chandni Chowk to China'?\n1)Deepika Padukone\n2)Priyanka Chopra\nEnter your option here: ");
	scanf("%d",&e);
	printf("b. What is the name of Ritesh Deshmukh's character in ''Dhamaal'?\n1)Roy\n2)Dharma\nEnter your option here: ");
	scanf("%d",&f);
	if(e==1 && f==1)
	{
		count+=20;
		printf("You passed this test! Congratulations!\nYour score= %d\n",count);
		printf("Total score= %d/60",count);
	}
	else
	{
		printf("Try again!\n");
		movies1c();
	}
	}
	movies1c();
}
int movies2a()
{
	int a,b,c,d,e,f,count=0;
	printf("Easy level\n");//the contestant gets 10 points on every right answer.
	printf("a. When was ''Titanic' released?\n1)2000\n2)1997\nEnter your option here: ");
	scanf("%d",&a);
	printf("\nb. Which movie is the first movie of Avengers?\n1)Iron Man\n2)Captain America: The First Avenger \nEnter your option here: ");
	scanf("%d",&b);
	if(a==2 && b==2)
	{
		count+=20;
		printf("You passed this level!\nYour score=%d\n",count);;
	}
	else
	{
		printf("Try again!\n");
		movies2a();
	}
	int movies2b()
	{
	count==20?printf("Medium Level\n"): printf("Try again mate!\n");
	printf("a. The code in The Matrix comes from what food recipes?\n1)Dumplings\n2)Sushi\nEnter your option here: ");
	scanf("%d",&c);	
	printf("b. Who actually drew the sketch of Rose in Titanic?\n1)James Cameron\n2)Leonardo Di Caprio\nEnter your option here: ");
	scanf("%d",&d);
	if(c==2 && d==1)
	{
		count+=20;
		printf("You passed this level too!\nYour score=%d\n",count);
	}
	else
	{
		printf("Try again!\n");
		movies2b();
	}
	}
	movies2b();
	int movies2c()
	{
	count==40?printf("Hard Level\n"): printf("Try again mate\n!");
	printf("a. Who sings the song ''My Heart Will Go On' in the movie 'Titanic'?\n1)Celine Dion\n2)Cindy Lauper\nEnter your option here: ");
	scanf("%d",&e);
	printf("b. What was the top-grossing movie of 2014?\n1)Guardians Of The Galaxy\n2)The Hunger Games: Mockingjay Part 1\nEnter your option here: ");
	scanf("%d",&f);
	if(e==1 && f==1)
	{
		count+=20;
		printf("You passed this test! Congratulations!\nYour score= %d\n",count);
		printf("Total score= %d/60",count);
	}
	else
	{
		printf("Try again!\n");
		movies2c();
	}
	}
	movies2c();
}



