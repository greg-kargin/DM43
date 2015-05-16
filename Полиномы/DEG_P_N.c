//Подружаемые модули отсутствуют
//Прототип: size_t DEG_P_N (struct POLYNOMIAL st); st - структура с массивом коэффициентов factors и старшей степенью degree
//Возвращает степень многочлена по данному набору коэффициентов
//Мясоедова, гр.4306

int DEG_P_N(struct POLYNOMIAL st)
{
	return st.degree;
}
