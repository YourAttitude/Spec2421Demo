

double g_dNetIncome;

int PayTax (double dSalary)  
{  
	double dTax;
    double dValue;   //在模板基础上加一个变量，表示超出起征点的收入  
    double dRate, dOffset;  //分别表示税率和速算扣除数  
    int iStep;       //用于确定交税的“档次”  

    // 下面求解应缴个人所和税dTax和税后收入dNetIncome  
    dValue = dSalary - 3500;   //在起征点基础上考虑纳税  
    if(dValue <= 0.0)  
        dTax = 0.0;  //不需要交税  
    else  
    {  
        //这一组if语句确定交税的档次  
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
  
  
        //根据确定的档次，得到税率和速算扣除数  
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
        dTax = dValue * dRate - dOffset;  //计算所得税，体会将“确定参数”与“计算”分开的好处：思路更明晰，不易在计算公式上犯大错  
    }  
    g_dNetIncome = dSalary-dTax;        //计算税后收入  
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


