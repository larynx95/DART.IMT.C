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
      int player;
      scanf("%d", &player);
      sum1 += player;
      team1 = false;
    }
    else
    {
      int player;
      scanf("%d", &player);
      sum2 += player;
      team1 = true;
    }

    if (sum1 > sum2)
    {
      printf("Team %d has an advantage", 1);
      printf("Total weight for team %d: %d", 1, sum1);
      printf("Total weight for team %d: %d", 2, sum2);
    }
    else
    {
      printf("Team %d has an advantage", 2);
      printf("Total weight for team %d: %d", 1, sum1);
      printf("Total weight for team %d: %d", 2, sum2);
    }
  }

  return 0;
}