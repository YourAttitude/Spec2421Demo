/*
* 北京轩宇信息技术有限公司 @2016
* 函数:int MCDCTest(int a, int b, int c)
* 作用:测试MC/DC覆盖
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

