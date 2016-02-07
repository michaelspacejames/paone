#include <iostream>
#include <vector>
#include <list>

using namespace std;
using std::vector;
using std::list;


int main ()
{
	int m, n;
	cout << "Enter the number of cities n: ";
	cin >> n;
	cout << "The number of cities are n: " << n << "\n";

	cout << "Ui-directional pre-existing roads: ";
	cin >> m;
	cout << "The number of uni-directional pre-existing roads of the city graph are m: " << m << "\n";

	class Edge
	{
		int d_vertex1;
		int d_vertex2;
		int w=1, v=3, u=5;

		double d_weight;
		public:
		Edge (int vertex1, int vertex2, double weight)
		: d_vertex1(vertex1), d_vertex2(vertex2), d_weight(weight)
			{}

		int vertex1() const { return d_vertex1 ;}
		int vertex2() const { return d_vertex2 ;}
		double weight() const { return d_weight ;};
	};

	vector< vector<Edge> > adjacencies(m);
	
	// ...
	adjacencies[0].push_back (Edge(u,v,w));

	
	
}
