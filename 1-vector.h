class Vector {
    public:
        Vector(int i);
        double& operator[](int i);
        int size();
    private:
        double* elem;
        int sz;
};