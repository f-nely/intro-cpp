#include <iostream>

using namespace std;

class Propaganda
{
	private:
	
	public:
	
		void inscrever()
		{
			cout << "Se inscreva no canal do professor Douglas Maoli!\n";
		}
		
		void curta()
		{
			cout << "Curta esse vídeo e ative o sininho!\n";
		}
};

int main()
{
	Propaganda canal;
	
	canal.inscrever();
	canal.curta();
	
	return 0;
}
