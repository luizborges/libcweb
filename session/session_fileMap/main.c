
#include <assert.h>
#include <headers/stackTracer.h>
#include <headers/memoryManager.h>
#include "session_fileMap.h"


#define _ printf("Get here...: %d\n", __LINE__);

typedef struct
{
	char *dir;
	char *fname;
	time_t life; // life session
	bool isConfig; // to check if is lost configuration
	int  maxLenMapKey; // maior tamanho da key do map - strlen(key) + 1
	
	map_t map;
} Session_o;

typedef Session_o* Session_t;

void test1();
void test2();
void test3();
//void test3(ArrayList_noSync_t list);
Session_t session;
int main(void) {
	MM_Init();
	StackTracer_Init();
	session = CWeb_Session_Init("", 300, 1800);
	test1(); 
	test2();
	test3();
	return 0;
}

void test1() {
	printf("\n*******************************************************\n");
	printf("Func: %s\n", __func__);
	printf("*******************************************************\n");
	CWeb_Session_Set("sid", "1234567890", strlen("1234567890")+1);
	int sum = 9;
	CWeb_Session_Set("sum", &sum, sizeof(int));
	int x = -1;
	char **r = session->map->Key(session->map->self, &x);
	for(int i=0; i < x; ++i) {
		printf("%s::[%d] of %d\n", __func__, i, x);
		printf("%s::key is \"%s\"\n", __func__, (char*)r[i]);
	}
	CWeb_Session_Save();
}

void test2() {
	printf("\n*******************************************************\n");
	printf("Func: %s\n", __func__);
	printf("*******************************************************\n");
	CWeb_Session_Load();
}

void test3() {
	printf("\n*******************************************************\n");
	printf("Func: %s\n", __func__);
	printf("*******************************************************\n");
	size_t s;
	char *str = CWeb_Session_Get("sid", &s);
	printf("%s::%s is \"%s\"\n", __func__, "sid", str);
	
	int *i = CWeb_Session_Get("sum", &s);
	printf("%s::%s is \"%d\"\n", __func__, "sum", *i);
}






	































