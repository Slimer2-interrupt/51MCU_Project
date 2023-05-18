#include <STC89C5xRC.H>
void Delay(unsigned int ms)		//@12.000MHz
{
	unsigned char i, j;

	while(ms){
		ms--;
		i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	}
}

void main(){
	while(1){
		P2=0xFE;
		Delay(100);
		P2=0xFD;
		Delay(100);
		P2=0xFB;
		Delay(100);
		P2=0xF7;
		Delay(100);
		P2=0xEF;
		Delay(100);
		P2=0xDF;
		Delay(100);
		P2=0xBF;
		Delay(100);
		P2=0x7F;
		Delay(100);
	}
}