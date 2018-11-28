#include "UUCalendar.h"


//Default UUCalendar constructor
UUCalendar::UUCalendar() {
	//TODO - Add your implementation
}

//Main calendar entry functions

bool UUCalendar::AddEntry(const UUEntry& entry) {
	//This function should add the entry to the calendar if it doesn't clash with an existing entry and return true
	//If there is a clash return false and reject the entry
	
}

bool UUCalendar::RemoveEntry(const UUEntry& entry) {
	//The entry should be removed from the calendar
	//Return true if entry was found and removed otherwise false

	//TODO - Add your implementation
}

bool UUCalendar::UpdateEntry(const std::string& entryDateTime, const UUEntry& newEntryDetails) {
	//Attempt to update the entry matching the entryDateTime with the newEntryDetails
	//The entry should be rejected if it overlaps with an existing entry, leaving the existing entry in the calendar
	//Return true if entry has been updated otherwise false
	//Reject change if there is not a matching entry and return false

	//TODO - Add your implementation
}

void UUCalendar::RemoveAllEntries() {
	//Remove all entries

	//TODO - Add your implementation
}

void UUCalendar::RemoveEntriesOnDate(std::string date) {
	//Remove all entries on a given date	
	
	//TODO - Add your implementation
}

std::vector <UUEntry> UUCalendar::GetAllCalendarEntries() {
	//Return a vector of all calendar entires

	//TODO - Add your implementation
}

std::vector <UUEntry> UUCalendar::GetCalendarEntriesBetweenDates(std::string startDate, std::string endDate) {
	//Return a vector with calendar entries between two dates (including those dates)

	//TODO - Add your implementation
}

void UUCalendar::RemoveEntriesBetweenDates(std::string startDate, std::string endDate){
	//Remove all entries between two dates

	//TODO - Add your implementation
}

int UUCalendar::GetCalenderEntryCount() {
	//Remove all entries between two dates

	//TODO - Add your implementation
}

int UUCalendar::CountEntries(std::string startDate, std::string endDate) {
	//Return the number of calendar entries between two dates

	//TODO - Add your implementation
}

std::vector <UUEntry> UUCalendar::GetEntriesForGivenDay(std::string date) {
	//Return a vector containing any and all entries within the calendar for the given date
	//If there are no matching entries, return an empty vector of UUEntry
	
	//TODO - Add your implementation
}

UUEntry UUCalendar::GetEntry(int index) {
	//Return the entry in the calendar at the index if it exists
	//Otherwise return an empty entry

	//TODO - Add your implementation
}
