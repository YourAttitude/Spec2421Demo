/*
* ����������Ϣ�������޹�˾ @2016
* ����:int MCDCTest(int a, int b, int c)
* ����:����MC/DC����
*
*/
int MCDCTest(int a, int b, int c){
	int result = 0;
//	if(a<=0 && b>100 && c>1000){
//		result = b+c;
//	}
	if(a<0 && (b<100 || c<100)){
		result = 2*(b+c);
	}
	return result;
}

