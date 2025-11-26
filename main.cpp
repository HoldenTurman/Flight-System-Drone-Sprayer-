#include <iostream>
#include <vector>
#include <cmath>
#include <unistd.h>
using namespace std;

// store 3d points
struct Point {
    double x;
    double y;
    double z;
};
// Determine distance from points
double distance(Point a, Point b) {
    return sqrt(
        pow(b.x - a.x, 2) +
        pow(b.y - a.y, 2) +
        pow(b.z - a.z, 2)
    );
};

void flyTo(Point p) {
    cout << "Flying to (" << p.x <<", " << p.y <<", " << p.z <<")..." << endl;
};

void spray() {
    cout << "Spraying for 3 seconds..." << endl;
}


int main() {
 // List of all points
 vector <Point> route;
 int numPoints;
 
 cout <<"How many points do you want to enter? ";
 cin >> numPoints;
 
 for (int i = 0; i < numPoints; i++) {
     double x, y, z;
     
     cout << "Enter point " << i + 1 << " X: ";
     cin >> x;
     
     cout << "Enter point " << i + 1 << " Y: ";
     cin >> y;
     
     cout << "Enter point " << i + 1 << " Z: ";
     cin >> z;
     
     Point p = {x, y, z};
     route.push_back(p);
     
     cout << "Points added: (" << x <<", " << y <<", " << z <<")" << endl << endl;
 }
 
 cout << "You have added " << route.size() << " points to the route." << endl;
 
 double battery = 100.0;
 double usePerPoint = 22.0;
 Point previous = {0, 0, 0,};

 double speed = 10.0;

 for (Point p : route) {
     //1. distance
     double dist = distance(previous, p);
     cout << " Distance to next point: " << dist << endl;

     double time = dist / speed;
     cout << "Estimated travel time: " << time << " seconds" << endl;
     
     //2. battery check before Flying
     if(battery < usePerPoint) {
         cout << "Battery too low (" << battery << "%) - returning home!" << endl;
         break;
     }
     
     flyTo(p);
     
     spray();
     
     
     battery -= usePerPoint;
     cout << "Battery remaining: " << battery << "%" << endl;
     
     cout << "Done with this point.\n" << endl;
     
     previous = p;
 }
 
 cout << "Mission complete!" << endl;
 
 return 0;
 
};