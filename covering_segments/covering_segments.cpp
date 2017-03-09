#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
using std::vector;

struct Segment {
  int start, end;
};

vector<int> optimal_points(vector<Segment> &segments) {
    // sort the vector according to the end points
    std::sort(segments.begin(), segments.end(), [](const Segment &a, const Segment &b) -> bool {
		return a.end < b.end;
            });

    vector<int> points; // create a vector to store the common points in the segments
    int point = segments[0].end; // set the point to the first end point i-e shortest end point
	points.push_back(point);
  for (size_t i = 0; i < segments.size(); ++i) {
  if(point<segments[i].start || point>segments[i].end)
    {
	point=segments[i].end;
    points.push_back(segments[i].end);
  }
}
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i) {
    std::cout << points[i] << " ";
  }
}
