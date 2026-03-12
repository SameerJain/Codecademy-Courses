#include <iostream>
using namespace std;


int main () {

//houses
int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;

// answers
int answer1, answer2, answer3, answer4;

//intro
cout << "Welcome to the sorting hat quiz!\n";

// Q1
cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
cout << " 1) The Good\n 2) The Great\n";
cout << " 3) The Great\n 4) The Bold\n";

cin >> answer1;

if ( answer1 == 1) {
  hufflepuff++; 
}

else if (answer1 == 2 ) {
  slytherin++;
}

else if (answer1== 3) {
  ravenclaw++;
}

else if (answer1 == 4 ) {
  gryffindor++;
}

else {cout << "Invalid input" ;}


//Q2

cout << "Dawn or dusk?\n\n";
cout << "1) Dawn\n2) Dusk\n";

cin >> answer2;

if (answer2 == 1){
  gryffindor++; ravenclaw++;
}

else if (answer2 == 2) {
  hufflepuff++; slytherin++;
}

else {cout << " Invalid Input" ;}
  



//Q3

cout <<"Q3) Which kind of instrument most pleases your ear?\n\n";
cout << " 1) The violin\n 2) The trumpet\n";
cout << " 3) The piano\n 4) The drum\n";

cin >> answer3;

if ( answer3 == 1) {
  slytherin++; 
}

else if (answer3 == 2 ) {
  hufflepuff++;
}

else if (answer3 == 3) {
  ravenclaw++;
}

else if (answer3 == 4 ) {
  gryffindor++;
}

else {cout << "Invalid input" ;}

// Q4

cout <<"Q4) Which road tempts you most?\n";
cout << " 1) The wide, sunny grassy lane\n 2) The narrow, dark, lantern-lit alley\n";
cout << " 3) The twisting, leaf-strewn path through woods\n 4) The cobbled street lined ancient buildings\n";

cin >> answer4;

if ( answer4 == 1) {
  hufflepuff++; 
}

else if (answer4 == 2 ) {
  slytherin++;
}

else if (answer4 == 3) {
  gryffindor++;
}

else if (answer4 == 4 ) {
  ravenclaw++;
}

else {cout << "Invalid input" ;}


//sorting

int max = 0 ;
std::string house;

if (gryffindor > max) {

max = gryffindor;
house = "Gryffindor"; 

}

if (hufflepuff > max) {

max = hufflepuff;
house = "Hufflepuff"; 

}

if (ravenclaw > max) {

max = ravenclaw;
house = "Ravenclaw"; 

}

if (slytherin > max) {

max = slytherin;
house = "Slytherin"; 
}

cout << "Your house is " << house << "!\n";

return 0;
}
