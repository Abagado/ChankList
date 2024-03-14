#include "chunk.h"
#include <iostream>

using namespace std;

int main()
{
    fefu_laboratory_two::ChunkList<int, 3> chunkList;

    for (int i = 1; i <= 10; ++i)
        chunkList.insert(i);

    cout << "ChunkList after insertions:" << endl;
    for (const auto& chunk : chunkList)
    {
        for (const auto& value : chunk.data)
            cout << value << " ";

        cout << endl;
    }

    chunkList.erase(1);
    chunkList.erase(4);
    chunkList.erase(5);
    chunkList.erase(6);

    cout << "ChunkList after erasures:" << endl;
    for (const auto& chunk : chunkList)
    {
        for (const auto& value : chunk.data)
            cout << value << " ";

        cout << endl;
    }

}
