
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    protected:  //using protected fixed issues for inheritance
        int width;
        int height;
    
    public:
        virtual void display() const {
            cout << width << " " << height << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        void display() const override {
            cout << (width*height) << endl;
        }
        void read_input() {
            cin >> width >> height;
        }
};