#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Data
{
    void ReadData()
    {
        int baseAddress, elementSize;
        cin >> baseAddress >> elementSize >> numDimensions;

        vector<int> dimensionMultiplyer(numDimensions);
        vector<int> lowerBound(numDimensions);

        for (int i = 0; i < numDimensions; ++i)
        {
            int max;
            cin >> lowerBound[i] >> max;
            dimensionMultiplyer[i] = (max - lowerBound[i] + 1);
        }

        c0 = baseAddress;
        coeff.resize(numDimensions);

        int pos = numDimensions - 1;

        coeff[pos] = elementSize;

        c0 -= coeff[pos] * lowerBound[pos];
        --pos;

        for (;pos >= 0; --pos)
        {
            coeff[pos] = coeff[pos + 1] * dimensionMultiplyer[pos + 1];
            c0 -= coeff[pos] * lowerBound[pos];
        }
    }

    int c0, numDimensions;
    vector<int> coeff;
};



int main()
{
    int n, r;
    cin >> n >> r;

    map<string, Data> nameToData; // Direct association name-Data.

    string name;
    Data data;
    for (int i = 0; i < n; ++i)
    {
        cin >> name;
        data.ReadData();
        nameToData[name] = data;
    }

    for (int i = 0; i < r; ++i)
    {
        cin >> name;
        cout << name;
        const Data& usedData = nameToData[name];

        int address = usedData.c0;

        string sep = "[";
        for (int i = 0; i < usedData.numDimensions; ++i)
        {
            int value;
            cin >> value;
            cout << sep << value;
            sep = ", ";
            address += usedData.coeff[i] * value;
        }
        cout << "] = " << address << '\n';

    }
}
