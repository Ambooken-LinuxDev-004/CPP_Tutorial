#include<iostream>

int main()
{
  //Declare and Initialize the variables
  double speed = 0.5; //Speed of robot in meters per second
  double time = 10.0; //Time travelled in seconds

  /*Calculate Distance travelled
  distance = speed * time*/

  double distance = speed * time;
  std::cout << "The Robot travelled " << distance << " meters." << std::endl;

  return 0;

}