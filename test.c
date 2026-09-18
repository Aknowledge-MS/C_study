#include <stdio.h>
  int first_damage(int base_damage, int level) {
      return base_damage + (level * 2);
  }
  int main() {
      int base_damage = 205;
      int level = 50;
      int final_damage = first_damage(base_damage, level);
        printf("total_damage = %d \n",final_damage);
        return 0;
  }