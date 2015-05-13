POLYNOMIAL DER_P_P(POLYNOMIAL polinom)
{
for(int i = polinom.degree;i > 0;i--)
polinom.factors[i].numerator *= i;
polinom.degree —;
return polinom;

}
