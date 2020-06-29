// Given a list of airline tickets represented by pairs of departure and arrival airports [from, to], reconstruct the itinerary in order. All of the tickets belong to a man who departs from JFK. Thus, the itinerary must begin with JFK.

// Note:

// If there are multiple valid itineraries, you should return the itinerary that has the smallest lexical order when read as a single string. For example, the itinerary ["JFK", "LGA"] has a smaller lexical order than ["JFK", "LGB"].
// All airports are represented by three capital letters (IATA code).
// You may assume all tickets form at least one valid itinerary.
// One must use all the tickets once and only once.
// Example 1:

// Input: [["MUC", "LHR"], ["JFK", "MUC"], ["SFO", "SJC"], ["LHR", "SFO"]]
// Output: ["JFK", "MUC", "LHR", "SFO", "SJC"]
// Example 2:

// Input: [["JFK","SFO"],["JFK","ATL"],["SFO","ATL"],["ATL","JFK"],["ATL","SFO"]]
// Output: ["JFK","ATL","JFK","SFO","ATL","SFO"]
// Explanation: Another possible reconstruction is ["JFK","SFO","ATL","JFK","ATL","SFO"].
//              But it is larger in lexical order.

#include <unordered_map>
#include <queue>
#include <vector>

using namespace std;

using graph = unordered_map<string, priority_queue<string, vector<string>, greater<>>>;

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        graph flights;
        for (const auto& ticket : tickets) {
            // build the graph. note there we're using
            // a min heap so the destinations will be
            // sorted in lexicographical order
            flights[ticket[0]].emplace(ticket[1]);
        }
        vector<string> itinerary;
        buildItinerary("JFK", &flights, &itinerary);
        reverse(itinerary.begin(), itinerary.end());
        return itinerary;
    }
private:
    
    void buildItinerary(const string& airport, graph* flights_ptr, vector<string>* itinerary_ptr) {
        auto& flights = *flights_ptr;
		// the point that we got stuck would be the last airport that we visit
        while (!empty(flights[airport])) {
            auto destination = flights[airport].top();
            flights[airport].pop();
            buildItinerary(destination, flights_ptr, itinerary_ptr);
        }
        itinerary_ptr->emplace_back(airport);
    }
};