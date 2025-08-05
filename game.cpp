#include <stdio.h> 
#include <iostream> 
using namespace std; 
int main(){ 
int i, j; 
int n = 5; 
int score[5], score2[5]; 
int swap; 
int total =0, total2=0; 
for(i=0;i<n;i++){ 
printf("Please enter your scores"); 
scanf("%d", &score[i]); 
}  
for(i=0;i<n;i++){ 
for(j=0;j<n-i-1;j++){ 
if(score[j]>score[j+1]){ 
swap = score[j]; 
score[j] = score[j+1]; 
score[j+1] = swap; 
} 
/*else if(score[j]<score[j+1]){ 
j++; 
swap[j] = score[j]; 
score[j+1] = score[j]; 
score[j+1] = swap[j]; 
} */ 
//printf("%d\n", score[i]); 
} 
//printf("%d\n", score[i]); 
} 
for(i=0;i<n;i++){ 
printf("%d\n", score[i]); 
total = total + score[i]; 
} 
cout << "The total score for player 1 is -- " << total<<"\n"; 
 cout << "fOR THE SECOND PLAYER--\n"; 
 for(i=0;i<n;i++){ 
  printf("Please enter your scores"); 
   scanf("%d", &score2[i]); 
  } 
 for(i=0;i<n;i++){ 
  for(j=0;j<n-i-1;j++){ 
 
   if(score2[j]>score2[j+1]){ 
   swap = score2[j]; 
   score2[j] = score2[j+1]; 
   score2[j+1] = swap; 
   }} 
 for(i=0;i<n;i++){ 
  printf("%d\n", score2[i]); 
  total2 = total2 + score2[i]; 
 } 
 cout << "The total score for player 2 is -- "<<total2<<"\n"; 
  
 if(total2>total){ 
  cout << "The winnner of the match is Player 2\n"; 
  } 
 else if(total2==total){ 
  cout << "The match is tie\n"; 
  } 
 else{ 
  cout << "The winner is Player 1\n"; 
  } 
 return 0; 
  
} 
} 
