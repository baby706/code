#include <iostream>
#include <assert.h>

typedef double DyDouble;
typedef int DyInt64;

using namespace std;
DyDouble GetMaxPrecision(DyDouble db)
{
　　assert( sizeof(DyDouble ) == sizeof( DyInt64 ) );
　　DyInt64 exp  = ((*((DyInt64*)& db) >>52) & 0x7ff) - 32;
　　if( exp <=0 ) return 1e-299;
　　exp  = expDelta << 52;
　　DyDouble reErr = *((DyDouble*)&exp );
　　return reErr;
}

int main(int argc, char const *argv[])
{
	
	DyDouble a;
	GetMaxPrecision(a);
	return 0;
}