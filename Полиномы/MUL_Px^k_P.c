
int* MUL_Pxk_P(int* m,int* A,int k)
{
  int j;
  int *p=NULL;
  p=(int*)malloc((*m+k+1)*sizeof(int));    
  for(j=0;j<=*m;j++)
    p[j+k]=A[j];  
  *m=*m+k;  
  return(p);
}    
      
/*Подключаемых модулей нет
  int* MUL_Pxk_P(int* ,int* ,int ) - прототип
  int* - указатель на старшую степень исходного многочлена
  int* - указатель на массив коэффициентов исходного многочлена    
  int - cтепень X^K
  Выполнили: Кановский, Веденин 4306*/
