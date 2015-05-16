
struct POLYNOMIAL MUL_Pxk_P(struct POLYNOMIAL polynom, int k)
  {
  struct POLYNOMIAL result;
  result.degree = polynom.degree + k;
  result.factors = (struct POLYNOMIAL*)malloc( (result.degree + 1) * sizeof(struct POLYNOMIAL) );
  int i;
  for (i = result.degree; i >= k; --i)
    result.factors[i] = polynom.factors[i - k];
  for (i = 0; i < k; ++i)
    {
    polynom.factors[i].denominator = SUB_QQ_Q (polynom.factors[i].denominator, polynom.factors[i].denominator);
    }

  return polynom;
  }
      
/*Подключаемых модулей нет
  int* MUL_Pxk_P(int* ,int* ,int ) - прототип
  int* - указатель на старшую степень исходного многочлена
  int* - указатель на массив коэффициентов исходного многочлена    
  int - cтепень X^K
  Выполнили: Кановский, Веденин 4306*/
