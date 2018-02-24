class BadLengthException {
    private: 
        int n;
    public:
        BadLengthException(int badnumber) {
            n = badnumber;
        }
        int what() {
            return n;
        }
};