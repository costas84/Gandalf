/******************************************************************************

Exercise: create a class for an individual.
  
"Wizard Gandalf :
-2019 years of age (initialize via a constructor)
-his beard is of grey color (string, init via constructor)
-has mana (init at 100 via constructor and has accessors)
-can cast:
 -Fireball spell (30 mana)
 -Lighting spell (90 mana)
-may waits gaining 10 mana

Write a program where Gandalf:
-Casts a fireball spell
-Waits
-Casts a  Lighning spell
-Waits 
-Waits
-Casts a fireball spell

In every step of the scenario add printouts on screen describing
-What Gandalf is doing
-His mana value

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
class wizard {
public:
	wizard(int in_age, char *in_beard, int in_mana);
	void fireball();
	void lighting();
	void wait();
private:
	int age;
	char beard[80];
	int mana;
};

int main()
{
	char str[80] = "grey";
	wizard gandalf(2019, str, 100);
	gandalf.fireball();
	gandalf.wait();
	gandalf.lighting();
	gandalf.wait();
	gandalf.wait();
	gandalf.fireball();
}

wizard::wizard(int in_age, char *in_beard, int in_mana)
{
	age = in_age
		; strcpy_s(beard, in_beard);
	mana = in_mana;
}

void wizard::fireball() 
{
	if (mana >= 30)
	{
		mana -= 30;
		cout << endl << "Fireball! (mana: " << mana << ")";
	}
	else
		cout << endl << "Fireball effort *not enough mana*";
}

void wizard::lighting()
{
	if (mana >= 90)
	{
		mana -= 90;
		cout << endl << "Lightning! (mana: " << mana << ")";
	}
	else
		cout << endl << "Lightning effort *not enough mana*";
}

void wizard::wait()
{
	if (mana<=90)
	mana += 10;
	cout << endl << "...waiting! (mana: " << mana << ")";
}