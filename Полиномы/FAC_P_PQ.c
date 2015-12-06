/*FAC_P_PQ
Описание:
	Вынесение из многочлена НОК знаменателей коэффициентов и НОД числителей
Подключаемые модули:
	TRANS_N_Z
	LCM_NN_N
	GCF_NN_N
	DIV_ZZ_Z
Описание переменных:
	polinom - исходный многочлен
        newpolinom - новый многочлен
Авторы:        
        Вовк Кирилл
        Эмомов Голибджон
Группа:
        4305
*/
#include "../build/main.h"
struct POLYNOMIAL FAC_P_PQ(struct POLYNOMIAL polinom)
{
	struct POLYNOMIAL newpolinom = polinom;
    struct NATURAL nok = polinom.factors[0].denominator;
    struct NATURAL nod = polinom.factors[0].numerator;
    for(int i = 1;i < polinom.degree;i++)
    {
       nok = LCM_NN_N(nok,polinom.factors[i].denominator); // НОК знаменателей
       nod = GCF_NN_N(nod,polinom.factors[i].numerator); // НОД числетелей
    }
    for(int i = 0;i < polinom.degree;i++)
    {
        //newpolinom.factors[i].denominator = 1;
		//newpolinom.factors[i].numerator = DIV_ZZ_Z(TRANS_N_Z(nok),polinom.factors[i].denominator) * DIV_ZZ_Z(TRANS_N_Z(polinom.factors[i].numerator,nod); // подсчет коэффициентов нового многочлена
    }
    return newpolinom;
}
