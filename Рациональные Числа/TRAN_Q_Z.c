integer TRAN_Q_Z(natural b)
{
	if ((b.den.a[0]==0) && noNULL(b.den.a)==1)
		return(b.num);
	else
		return NULL;
}
