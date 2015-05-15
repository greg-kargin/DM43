int POZ_Z_D(INTEGER number){
  if((number.index == 1)&&(!(number.number[0])))
    return 0;
  return (number.sign+1);
}
