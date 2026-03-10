#ifndef VOTER_H
#define VOTER_H
class Voter {
	public:
		string name;
		int age;
		bool isEligible(); 
};
bool Voter::isEligible()
{
	if (age > 18)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}; 
#endif
