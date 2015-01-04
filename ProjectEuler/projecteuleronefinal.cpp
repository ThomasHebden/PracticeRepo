//projecteuleronefinal// 

*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
int num = 1;
int sum = 0;

while(num < 1000){
if ((num % 3) == 0){
sum += num;
}
else if ((num % 5) == 0){
sum += num;
}
num++;
}

cout << sum << endl;

system("PAUSE");
return EXIT_SUCCESS;
}