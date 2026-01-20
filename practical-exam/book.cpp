#include <iostream>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int publishedYear;
};

int main()
{

    int n;

    cout << "Enter your book number ";
    cin >> n;

    Book book[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter detail book " << i + 1 << endl;

        cout << "title  ";
        cin.ignore();
        getline(cin, book[i].title);

        cout << "Author ";
        getline(cin, book[i].author);

        cout << "publishedYear ";
        cin >> book[i].publishedYear;
    }

    cout<<"book Detail \n";

    for (int i = 0; i < n; i++)
    {
        cout<<"\nbook"<<i+1<<endl;
       cout<<"title: "<<book[i].title<<endl;
       cout<<"Author: "<<book[i].author<<endl;
       cout<<"publishedYear: "<<book[i].publishedYear<<endl;
       
    }
    



    return 0;
}