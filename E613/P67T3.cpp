#include <iostream>
using namespace std;
class Time
{
	private:
	 int hour;
	 int minute;
	 int sec;
	public: 
	 inline void set_time();
	 inline void show_time();
};

Time t;

inline void Time::set_time()
{
	cin >> hour;
	cin >> minute;
    cin >> sec;
}
inline void Time::show_time()
{
    cout << hour << ":" << minute << ":" << sec << endl;
}

int main()
{
	t.set_time();
	t.show_time();
	return 0;
}
