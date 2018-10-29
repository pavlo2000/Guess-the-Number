#include <iostream>
 #include <time.h>
 #include <random>
 using namespace std;
 static int NumberOfGame = 10; 
 bool DoesUserWantToPlay();
 void PlayFunction(int SizeOfRandom);
 int PlayLevelCheker(); 
 int main() { 	
while(DoesUserWantToPlay()) 	
{ 		
PlayFunction(PlayLevelCheker()); 	
} 
} 
bool DoesUserWantToPlay() 
{ 	
bool result = false; 	
int PlayOrNo; 	
cout << "Do u want to play((1) - Yes, (0) - No)" << endl; 	
cin >> PlayOrNo; 	
if (PlayOrNo == 1) 	
{ 		
result = true; 	
} 	
return result; 
}  
void PlayFunction(int SizeOfRandom) 
{ 	
int UserChoise,BotChoise; 	
srand(time(NULL)); 	
BotChoise = rand() % SizeOfRandom; 	
for (int start = 0; start < NumberOfGame; start++) 	
{ 		
cout << "Input number from 0 to " << SizeOfRandom << endl; 		
cin >> UserChoise; 		
if (UserChoise >= 0 && UserChoise <= SizeOfRandom) 		
{ 			 			
if (UserChoise == BotChoise) 			
{ 				
cout << "U WIN" << endl; 				
exit(0); 			
} 			
if (UserChoise > BotChoise) 			
{ 				
cout << "Great!" << endl; 				
} 			
if (UserChoise < BotChoise) 			
{               
cout << "Lover" << endl; 			  			
} 		
} 		
else 		
{ 			
cout <<"U make misake" << endl; 		
} 	
} 
}  
int PlayLevelCheker() 
{ 	
int SizeOfRandom,PlayerLevel; 	
cout <<"Please input level.(number from 1 to 10)" << endl; 	
cin >> PlayerLevel; 	
if (PlayerLevel >= 1 && PlayerLevel <= 10) 	
{ 		
SizeOfRandom = 10*PlayerLevel; 	
} 	
else 	
{ 		
cout << "U make mistake when input number" << endl; 		
SizeOfRandom = 10; 		
cout << "U will play with defolt options size of random =" << SizeOfRandom << endl; 	
}	 	
return SizeOfRandom ; 
}
