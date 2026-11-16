#ifndef COMMUNITYPLATFORM_H
#define COMMUNITYPLATFORM_H

#include <iostream>
#include <string>
using namespace std;

const int MAX_USERS = 100;
const int MAX_RESOURCES = 200;
const int MAX_REQUESTS = 300;
//struct user
struct User {
    int id;
    string name;
    string username;
    string password;
    string skills;
    string interests;
};

struct Resource {
    int id;
    int ownerId;
    string title;
    string category;
    string description;
};

struct HelpRequest {
    int id;
    int requesterId;
    int resourceId;
    string message;
    string status;
};

class CommunityPlatform {
private:
    User users[MAX_USERS];
    Resource resources[MAX_RESOURCES];
    HelpRequest requests[MAX_REQUESTS];

    int userCount;
    int resourceCount;
    int requestCount;

    int nextUserId;
    int nextResourceId;
    int nextRequestId;

    int loggedInUserId;

    int findUserById(int id);
    int findResourceById(int id);
    int findRequestById(int id);

    bool containsText(string text, string keyword);
    bool isLoggedIn();

    void showResource(int index);

public:
    CommunityPlatform();


    void registerUser();
    void login();
    void viewProfile();
    void logout();

 
    void addResource();
    void listResources();

    
    void searchResources();

   
    void submitRequest();
    void viewMyRequests();
    void manageRequests();

    // Main Menu
    void run();
};

#endif
