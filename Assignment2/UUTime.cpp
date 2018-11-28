#include "UUTime.h"

UUTime::UUTime() {
	//TODO Add your implementation
	//Default time should be 10:00
}

UUTime::UUTime(int hours, int minutes) {
	//TODO Add your implementation
	//validate minutes and hours. If invalid arguments are supplied set to default time
}

int UUTime::GetHours() const {
	//TODO Add your implementation
}

void UUTime::SetHours(int hours) {
	//TODO Add your implementation
	//validate minutes and hours
	
}

int UUTime::GetMinutes() const {
	//TODO Add your implementation
}

void UUTime::SetMinutes(int minutes) {
	//TODO Add your implementation

}

void UUTime::SetTime(int hours, int minutes) {
	//TODO Add your implementation
	//validate minutes and hours
}

std::string UUTime::GetTime() const {
	//TODO Add your implementation
	//Time string should be formatted "hh:mm" e.g. 09:09 using 24 hour clock
}