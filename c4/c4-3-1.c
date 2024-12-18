//
// Created by ben on 2024/10/11.
//
#include <stdio.h>

int main()
{
    double price,total_price;
    double total_price_final1,total_price_final2;
    int count;

    printf("请输入商品单价：");
    scanf("%lf", &price);
    printf("请输入购买数量：");
    scanf("%d", &count);
    total_price = price * count;
    printf("原总价：%.2f元\n", total_price);

    //先折扣后满减
    if (count==2)
    {
        total_price_final1 = total_price * 0.85;
    }else if (count>=3)
    {
        total_price_final1 = total_price * 0.7;
    }else
    {
        total_price_final1 = total_price;
    }
    double r1=(int)(total_price_final1/300)*30;
    total_price_final1 = total_price_final1 - r1;
    printf("先折扣后满减，折扣后的总价为%.2f，客户已经享受的优惠%.2f\n",total_price_final1,total_price-total_price_final1);


    //先满减后折扣
    double r2=(int)(total_price/300)*30;
    total_price_final2 = total_price - r2;

    if (count==2)
    {
        total_price_final2 = total_price * 0.85;
    }else if (count>=3)
    {
        total_price_final2 = total_price * 0.7;
    }
    printf("先满减后折扣，折扣后的总价为%.2f，客户已经享受的优惠%.2f\n",total_price_final2,total_price-total_price_final2);
    if (total_price_final1>total_price_final2)
    {
        printf("最优方案是方案2");
    }else
    {
        printf("最优方案是方案1");
    }

    return 0;
}