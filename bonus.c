

double g_dNetIncome;

int PayTax (double dSalary)  
{  
	double dTax;
    double dValue;   //��ģ������ϼ�һ����������ʾ���������������  
    double dRate, dOffset;  //�ֱ��ʾ˰�ʺ�����۳���  
    int iStep;       //����ȷ����˰�ġ����Ρ�  

    // �������Ӧ�ɸ�������˰dTax��˰������dNetIncome  
    dValue = dSalary - 3500;   //������������Ͽ�����˰  
    if(dValue <= 0.0)  
        dTax = 0.0;  //����Ҫ��˰  
    else  
    {  
        //��һ��if���ȷ����˰�ĵ���  
        if(dValue <= 1500)  
            iStep = 1;  
        else if(dValue <= 4500)  
            iStep = 2;  
        else if(dValue <= 9000)  
            iStep = 3;  
        else if(dValue <= 35000)  
            iStep = 4;  
        else if(dValue <= 55000)  
            iStep = 5;  
        else if(dValue <= 80000)  
            iStep = 6;  
        else  
            iStep = 7;  
  
  
        //����ȷ���ĵ��Σ��õ�˰�ʺ�����۳���  
        switch(iStep)  
        {  
        case 1:  
            dRate = 0.03, dOffset = 0.0;  
            break;  
        case 2:  
            dRate = 0.1, dOffset = 105.0;  
            break;  
        case 3:  
            dRate = 0.2, dOffset = 555.0;  
            break;  
        case 4:  
            dRate = 0.25, dOffset = 1005.0;  
            break;  
        case 5:  
            dRate = 0.3, dOffset = 2755.0;  
            break;  
        case 6:  
            dRate = 0.35, dOffset = 5505.0;  
            break;  
        case 7:  
            dRate = 0.45, dOffset = 13505.0;  
        }  
        dTax = dValue * dRate - dOffset;  //��������˰����Ὣ��ȷ���������롰���㡱�ֿ��ĺô���˼·�������������ڼ��㹫ʽ�Ϸ����  
    }  
    g_dNetIncome = dSalary-dTax;        //����˰������  
    return dTax;
}



struct sg_st{
	int n;
	unsigned short m1;
};

struct sg_st g_st_inst1;

int func1(char* arr){
	struct sg_st *p_sg_st = 0;
	p_sg_st = (struct sg_st*)arr;

	if (p_sg_st->m1 == 100)
		return 0xaa;
	else
		return 0xaa;
}


