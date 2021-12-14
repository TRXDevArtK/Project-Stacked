
#include <fstream>
#include <iostream>
using namespace std;


main(){
//edit Maze_allMaps.dat
    ifstream in;
    in.open("Maze_allMaps.dat");
    if (!in.is_open())
    {
        return false;
    }
    
    string input;
    getline(in,input);
    in.close();
    
    filename = "Maze_Map_"+IntegerToString(StringToInteger(input)+1)+".dat";
    
    ofstream out;
    out.open("Maze_allMaps.dat", ofstream::app);
    if (!out.is_open())
    {
        return false;
    }
    out<<"Map "<<IntegerToString(StringToInteger(input)+1)<<endl;
    out<<filename<<endl;
    out.seekp(0,ios::beg);
    out<<IntegerToString(StringToInteger(input)+1);
    out.close();
}
