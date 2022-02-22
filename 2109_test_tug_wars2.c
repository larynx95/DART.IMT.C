#include <stdio.h>
int main(void)
{
  typedef int bool;
  enum
  {
    false,
    true
  };

  int numPlayers;
  int sum1 = 0;
  int sum2 = 0;
  bool team1 = true;

  scanf("%d", &numPlayers);
  for (int i = 0; i < numPlayers; i++)
  {
    if (team1 == true)
    {
      int player1;
      scanf("%d", &player1);
      sum1 += player1;
      team1 = false;
    }
    else
    {
      int player2;
      scanf("%d", &player2);
      sum2 += player2;
      team1 = true;
    }

    if (sum1 > sum2)
    {
      printf("Team %d has an advantage\n", 1);
      printf("Total weight for team %d: %d\n", 1, sum1);
      printf("Total weight for team %d: %d\n", 2, sum2);
    }
    else
    {
      printf("Team %d has an advantage\n", 2);
      printf("Total weight for team %d: %d\n", 1, sum1);
      printf("Total weight for team %d: %d\n", 2, sum2);
    }
  }

  return 0;
}