
#include <iostream>
#include <ctime>
using namespace std;
void display();
void drawWinningNumbers(int list[], int listSize);
void printArray(int list[], int listSize);
void inputPersonsTicket(int list[], int listSize);
int seqSearch(const int list[], int listLength, int searchItem);
void areEqual2(int list1[], int list2[], int size);
int main()
{

    display();

    int const lotterySize = 5;
    int personsNumbers[lotterySize]; // array for person's number
    int winningNumbers[lotterySize]; // array for winning numbers

    inputPersonsTicket(personsNumbers, lotterySize);
    cout << "Your lottery numbers are:  \n";
    printArray(personsNumbers, lotterySize);
    cout << endl;
    drawWinningNumbers(winningNumbers, lotterySize);
    cout << "The winning numbers are: ";
    printArray(winningNumbers, lotterySize);
    cout << endl;

    //determine if it's equal or not



    areEqual2(personsNumbers, winningNumbers, lotterySize);


    return 0;
}

void display()
{
    cout << "Hello there!! \n";
    cout << "Please enter 5 digits of numbers so \n" <<
        "we can match them with the winning numbers \n";


}

void drawWinningNumbers(int list[], int listSize)
{
    srand(time(NULL));

    for (int i = 0; i < listSize; i++)
    {
        list[i] = 0 + rand() % 9;
    }



}

void printArray(int list[], int listSize)
{

    for (int i = 0; i < listSize; i++)
        cout << list[i] << " ";


}


void inputPersonsTicket(int list[], int listSize)
{

    for (int i = 0; i < listSize; i++)
    {
        cin >> list[i];
        while (list[i] << 0 && list[i] > 9)
        {
            if (list[i] << 0 && list[9])
            {
                cout << "\n";
                cout << "Invalid number, please pick from 0 to 9 \n" << endl;
                cin >> list[i];
            }

        }



        cout << endl;
    }


}

//seqSearch will return the position of the array
int seqSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;

    loc = 0;

    while (loc < listLength && !found)
    {
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;
    }

    if (found)
        return loc;
    else
        return -1;


}





void areEqual2(int list1[], int list2[], int listSize)
{
    int found = 0;
    int location;

    for (int i = 0; i < listSize; i++)
    {
        for (int j = 0; j < listSize; j++)
        {
            if (list1[i] == list2[j])
            {
                cout << endl;
                cout << "We got a matching number: " << list1[i] << endl;
                location = seqSearch(list2, listSize, list1[i]);
                cout << "The location of the founded number is at array: " << location << endl;
                found++;

                cout << endl;
            }




        }
    }
  

    if (found == 5)
        cout << "Player wins!";
    else if(found>1)
        cout << "We have number(s) that matches with lottery tickets" << endl;
    else
        cout << "there is no matching number(s)" << endl;



}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Op
