#include "UUEntry.h"

UUEntry::UUEntry(){
	//Default constructor should initialise the data members to the following default values
	// date time : 10:00, 01/01/2000 
	//Repeat mode: No_Repeat
	//Repeat duration 0
	//TODO Add your implementation
	//Deafult entry title should be: "YAM"
	//Default entry desription should be: "Yet another meeting"
	//Default entry repeat mode is: No_Repeat
	//Default entry duration should be 0
	
}

UUEntry::UUEntry(std::string date, int hours, int minutes, int duration, std::string title, std::string description, UUReminderType repeat, int repeat_duration) {
	//Non-default constructor should initialise the entry with arguments
	//TODO Add your implementation
}

std::string UUEntry::GetEntryDateTime() const {
	//Return the date and time of the entry as a string

	//TODO - Add your implementation
	//Function should return date time in a string in the following format
	// 10:00 - 21/10/2018
	
}

void UUEntry::SetEntryDateTime(std::string date, int hours, int minutes) {
	//Set the date and time for the entry

	//Values should be validated 
	//Invalid arguments should be ignored and object data unchanged

	//TODO - Add your implementation
	
}

std::string UUEntry::GetEntryDateString() const {
	//Return the date string 
	//TODO Add your implementation here
}

UUDate UUEntry::GetEntryDate() const {
	//Return the entry date as a UUDate
	//TODO Add your implementation here
}
void UUEntry::SetEntryDate(std::string date) {
	//Set the entry date
	//TODO Add your implementation here
}

UUTime UUEntry::GetEntryTime() const {
	//Get the entry time as a UUTime
}
std::string UUEntry::EntryTimeToString() const {
	//Retunr the entry time as a UUTime
	//TODO add your implementation here
}
void UUEntry::SetEntryTime(int hours, int minutes) {
	//Set the entry time using int as hours and minutes
	//TODO add your implementation here
}

int UUEntry::GetEntryDuration() const {
	//Return the duration in seconds of the entry as an int 
	//TODO add your implementation here
}
void UUEntry::SetEntryDuration(int duration) {
	//Set the duration in seconds of the entry
	//The duration cannot exceed 12 hours or be negative. It can be 0
	//TODO add your implementation here
}

std::string UUEntry::GetEntryTitle() const {
	//Return the title of the event
	//TODO - Add your implementation
}

void UUEntry::SetEntryTitle(std::string title) {
	//Set the event title
	//TODO - Add your implementation
}

std::string UUEntry::GetEntryDescription() const {
	//Get the entry description
	//TODO - Add your implementation
}

void UUEntry::SetEntryDescription(std::string description) {
	//Set the event description 
	//TODO - Add your implementation
}

UUReminderType UUEntry::GetEntryReminderType() const {
	//Get the entry reminder type
	//TODO - Add your implementation
}
void UUEntry::SetEntryReminderType(UUReminderType repeat_type) {
	//Set the entry reminder type
	//TODO - Add your implementation
}

int UUEntry::GetEntryRepeatDuration() const {
	//Get the entry repeat duration 
	//TODO - Add your implementation
}

void UUEntry::SetEntryRepeatDuration(int duration) {
	//Set the repeat duration
	//Valid range is [0..30]
	//Invalid value should be set to 0
	
	//TODO - Add your implementation
}