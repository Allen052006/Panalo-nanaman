#ifndef FUNCTIONDECLARATIONS_H_INCLUDED
#define FUNCTIONDECLARATIONS_H_INCLUDED
#include <fstream>
#include <string>
#include<vector>

#include <thread>
#include <atomic>

#include <filesystem>

using namespace std;

struct FlashCard {
    string question;
    string answer;
};

class VirtualPet {
private:
    string name;
    vector<string> pettingResponses;
    vector<string> feedingResponses;
    vector<string> barkingResponses;

public:
    VirtualPet(string petName);
    void introduce();
    void pet();
    void feed();
    void bark();
};

void virtualPetMenu(VirtualPet& byte);

void title();
void desc();

bool isValidPassword(const string& password);
void saveSession(const string& username);
bool isUserLoggedIn(string& username);
void logout();
void mainMenu(const string& username);
void createAccount();
bool verifyLogin(const string& username, const string& password);
void login();
void saveNotesToFile();
void TakeNotes();
//void TaskReminder();
void DigitalDetoxTimer();
void MakeFlashCard(const string& username);
void GradeCalculatorOption();
void GradeCalculator();

void EnterFlashCards();
void ViewFlashCards();
void StudyNow();

struct Schedule {
    time_t toTimeT() const;
    int year, month, day, hour, minute;
    string event_name;

    string toString() const;
    static Schedule fromString(const string &line);
    bool isPastDeadline() const;
};

string getMonthName(int month);
bool isValidDate(int year, int month, int day);
bool isValidTime(int hour, int minute);

class ScheduleManager {
private:
    vector<Schedule> events;
    string username;
    const string filename = "schedule.txt";

    void loadEvents();
    void saveEvents();

public:
    ScheduleManager(const string& user);
    void addEvent();
    void displayEvents();
    void deleteEvent();
    void editEvent();
    void showMenu();

    bool hasPastEvent() const;
    bool hasUpcomingSoonEvent() const;
};

void startDetoxTimer();
void detoxTimerThread(int minutes);

#endif // FUNCTIONDECLARATIONS_H_INCLUDED
