// Write your MyBook class here
class MyBook : Book{
    private:
        int price;
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    public:
        MyBook(string t, string a, int p): Book(t, a), price(p){} //calls 'Book' constructor before opening brackets

        //   Function Name: display
        //   Print the title, author, and price in the specified format.
        //
        // Write your method here
        virtual void display(){
            cout << "Title: " << Book::title << endl;
            cout << "Author: " << Book::author << endl;
            cout << "Price: " << price << endl;
        }
};
// End class