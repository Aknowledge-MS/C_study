#include <stdio.h> /*输入输出所需的头文件*/
#include <stdlib.h> /*临时修改编码所需的头文件*/

//计算最终伤害值，参数分别为：基础伤害值，等级，致命值和防御力。
float total_damage(int base_damage,int lv,int lethality,int defense){
     float base = base_damage + (lv * 2);
     float multiplier = (1.0 +lethality) / (1.0 + lethality + defense); /*这里是致命值的削减效果计算*/
     return base * multiplier; /*被致命值和防御力削减之后的最终伤害值*/

}

int main() {
    system("chcp 65001"); /*强行临时修改编码，防止因中文出现乱码*/

    //定义变量，分别为基础伤害值、等级、致命率和防御力
    int base_damage;
    int lv;
    int lethality;
    int defense;

    printf("请输入基础伤害值、等级、致命率和防御力："); /*在终端打印四个数值的提示*/
    scanf("%d %d %d %d", &base_damage, &lv, &lethality, &defense); /*四个参数的输入*/

    float final_damage = total_damage(base_damage, lv, lethality, defense); /*设置最终伤害值的参数，方便后续使用*/

    printf("最终实际伤害值为：%.2f\n", final_damage); /*打印最终伤害值*/
    return 0;     /*结束*/
}    