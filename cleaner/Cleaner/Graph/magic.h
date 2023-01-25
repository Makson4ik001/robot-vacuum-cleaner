#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <tuple>
namespace magic{
using Index = size_t;

struct Transit
{
  using Length = double;
  Index to;
  Length length;
};

using Adjacency = std::vector<Transit>;
using Adjacency_list = std::vector<Adjacency>;

struct Path
{
  using Indices = std::vector<Index>;
  using Length = Transit::Length;
  Indices indices;
  Index   indices_left_until_full;
  Length  length;
};

void connect(Adjacency_list & g, Index u, Index v, Transit::Length len);

Path compute_minimal_full_path(
    Adjacency_list const & graph, 
    Index start_vertex, 
    size_t paths_limit = size_t(-1));
};