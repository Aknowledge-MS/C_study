#include <stdio.h>

  int total_damage(int base_damage,int lv){

  return base_damage + (lv * 2);
}
int main() {

    int base_damage;
    int lv;

    printf("请输入基础伤害值和等级：");
    scanf("%d %d",&base_damage,&lv);

    int final_damage = total_damage(base_damage,lv);

    printf("最终实际伤害值为：%d\n",final_damage);

    return 0;    
}    