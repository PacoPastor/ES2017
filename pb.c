 #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define var1 59
#define var2 39

<<<<<<< HEAD
void checkwhiteballs(int balls[5], int control)
{
 int last = balls[control];
 for (int i = 0; i < control; i++){
 if (last == balls[i]){
 balls[control] = whiteballs_computer_generated();
 break;
 }
 }

int white_balls_computer_generated()
{
	return rand()%var1+1;
}

int powerball_computer_generated()
{
	return rand()%var2+1;
}


int balls[6];
int power_ball;
int result;

int calculate_result(int white_balls[5], int power_ball)
{
   qsort(white_balls, 5, sizeof(int), my_sort_func); 
  printf("Your sorted numbers: \
n"); 
  for (int i = 0; i < 5; i++){ 
    printf("%d ", white_balls[i]); 
  }   
  printf("The power ball: %d \
n", power_ball); 
return 0; 
 }
  
void showing_results(int white_balls[5], int power_ball)
{
 printf("Your sorted numbers: \n");
 for (int i = 0; i < 5; i++){
 printf("%d ", white_balls[i]);
 }
 printf("The power ball: %d \n", power_ball);
}

void lottery_numbers_simulation()
{
   int power_ball = balls[5];
   int result = calculate_result(balls, power_ball);
}

void lottery_numbers_simulation(int &balls)
{
	for (int i = 0; i < 5; i++)
		balls[i] = (white_balls_computer_generated() + white_balls_computer_generated())%59+1;

	balls[5] = powerball_computer_generated();

	for (int i = 0; i < 6; i++)
		printf(" %d ", balls[i])
}


int main(int argc, char * * argv) {
   
   		lottery_numbers_simulation();
 		int count_balls = 0;
 		int favorite = 0; // this should be a bool

 		for (int i=1; i<argc; i++)
		 {
		 goto usage_error;
		 }
		 // the power ball is always the last one given
<<<<<<< HEAD
		 int power_ball = balls[5];

		 lottery_numbers_simulation(balls);

		 int result = calculate_result(balls, power_ball);
=======
		 
		 //PETECANDER AJAREMORE NAO
		 
>>>>>>> Función MAGICA de simulación de numeros por el EquipoDoge
		 // calculate result can return -1 if the ball numbers
		 // are out of range

		 if (result < 0)
		 {
		 goto usage_error;
		 }

    for (int i = 1; i < argc; i++) {
      const char * arg = argv[i];

      if ('-' == arg[0]) {
        if (0 == strcmp(arg, "-favorite")) {
          favorite = 1;
        } else {
          goto usage_error;
        }
      } else {
        char * endptr = NULL;
        long val = strtol(arg, & endptr, 10);
        if ( * endptr) {
          goto usage_error;
        }
        balls[count_balls++] = (int) val;
      }
    }
    if (6 != count_balls) {
      for (int i = 0; i < 5; i++){
	balls[i] = whiteballs_computer_generated();
	checkwhiteballs(balls, i);
      }
    }
      for (int i = 0; i < 5; i++)
      {
      	balls[i] = white_balls_computer_generated();
      }

      balls[5] = powerball_computer_generated(); // Power ball

      printf("Your numbers are: ");

      for (int i = 0; i < 5; i++)
      {
      	printf("%d ", balls[i]);
      }    

      printf("\nAnd the power ball:");
      printf(" %d ", balls[i]);
  }

    int result = calculate_result(balls, power_ball);
    if (result < 0) {
      goto usage_error;
    }
    if (LUCKY_NUMBER == power_ball) {
      result = result * 2;
    }
    if (favourite) {
      result = result * 2;
    }

    showing_results(balls ,power_ball);

    printf("%d percent chance of winning\n", result);
    return 0;
    usage_error:
      fprintf(stderr, "Usage: %s [-favourite] (5 white balls)
        power_ball\n ", argv[0]);
        return -1;
      }
