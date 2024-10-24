//
// Created by benben on 2024/10/24.
//
#include <stdio.h>
int main(){
    double RichMan_give = 0.01;
    double StrangeMan_give = 100000.00,SumRichToStrange=0.0,SumStrangeToRich=0.0;
    for (int i = 0; i < 30; i++) {
        SumStrangeToRich+=StrangeMan_give;
        SumRichToStrange += RichMan_give;
        RichMan_give *= 2;
    }
    printf("富翁给了陌生人%lf元\n",SumRichToStrange);
    printf("陌生人给了富翁%lf钱",SumStrangeToRich);

}
