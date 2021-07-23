class ParkingSystem {
public:
    vector<int> p;
    ParkingSystem(int big, int medium, int small) {
        p = {0, big, medium, small};
    }
    bool addCar(int carType) {
        return --p[carType] >= 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */