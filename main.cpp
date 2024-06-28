#include <iostream>
#include "Model/RubiksCubeBitboard.cpp"
// #include "Solver/BFSSolver.h"
// #include "Solver/DFSSolver.h"
#include "Solver/IDDFSSolver.h"
int main()
{
	//////////////////////////////////////////////
    // test 1.3
     // RubiksCubeBitboard r1,r2;
     // r1.print();
     // auto moves = r1.randomShuffleCube(3);
     // for (auto move: moves)
     // {
     //     cout << r1.getMove(move)<< " ";
     // }
	// cout<<(r1==r2)<<"\n";
     // r1.print();
	// unordered_map<RubiksCubeBitboard,bool,HashBitboard>mp1;
	// mp1[r1] = true;
	// cout<<mp1[r2]<<"\n";








		///////////////----------SOLVERS TESTING--------//////////////////////////////

	RubiksCubeBitboard r1;
	r1.print();
	auto movesToShuffle = r1.randomShuffleCube(3);
	r1.print();
	for(auto& move: movesToShuffle)cout << r1.getMove(move)<< " ";
	cout<<"\n";

	/////////////////////////////////DFS Works Cool
	// DFSSolver<RubiksCubeBitboard,HashBitboard>dfs_solver(r1,6);
	// auto movesToSovle = dfs_solver.solve();
	// dfs_solver.rubiksCube.print();
	// for(auto& move: movesToSovle)cout << r1.getMove(move)<< " ";
	// cout<<"\n";


	///////////////////////BFS Works Cool too
	// BFSSolver<RubiksCubeBitboard,HashBitboard> bfs_solver(r1);
	// auto movesToSovle = bfs_solver.solve();
	// for(auto& move: movesToSovle)cout << r1.getMove(move)<< " ";
	// cout<<"\n";
	//////////////////IDDFS works cool
	IDDFSSolver<RubiksCubeBitboard,HashBitboard> iddfs_solver(r1);
	auto movesToSovle  = iddfs_solver.solve();
	for(auto& move: movesToSovle)cout << r1.getMove(move)<< " ";
	cout<<"\n";


	return 0;
}
