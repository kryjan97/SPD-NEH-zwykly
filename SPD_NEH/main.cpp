#include <iostream>
#include <vector>
using namespace std;

class zadania {
private:
	int nr_zadania;
	int nr_maszyny;
	int czas_wykonania;
	
public:
	zadania(int nr_zadania, int nr_maszyny, int czas_wykonania)
	{
		this->nr_zadania = nr_zadania;
		this->nr_zadania = nr_zadania;
		this->czas_wykonania = czas_wykonania;
	}

	int wez_zadanie() { return nr_zadania; }
	int wez_maszyne() { return nr_maszyny; }
	int wez_czas() { return czas_wykonania }
	int ustaw_zadanie(int nr_zadania) { this->nr_zadania = nr_zadania; }
	int ustaw_czas(int czas_wykonania) { this->czas_wykonania = czas_wykonania; }
	void pokaz_zadanie() {
		cout << "Nr zadania: " << nr_zadania 
			<< " czas wykonania: " << czas_wykonania 
			<< " nr maszyny: " << nr_maszyny << endl;
	}
};



int main()
{

	system("pause");
	return 0;
}


//Zasada dzia�ania NEH:
//1. Wyznaczamy w(j) (j - nr zadania), czyli sume czasow wszystkich operacji na wszystkich maszynach dla danego zadania
//   np. w(1)= 9, w(2)=10, w(3)=6, w(4)=9 
//2. Posortowac w(j) nierosn�co, tak aby zadania o najwiekszej sumie czasow wykonania byly na poczatku -> 2 1 4 3
//3. Nastepnie w w.w kolejnosci wsadzamy zadania na kazdej mozliwej pozycji, i wybieramy to o najmniejszej 
//   wartosci Cmax, zaczynaj�c od zadania o najwiekszej sumie czas�w.