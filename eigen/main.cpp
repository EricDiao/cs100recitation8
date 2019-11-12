#include <Eigen/Core>
#include <Eigen/Dense>
#include <chrono>
#include <iostream>

using namespace Eigen;
using namespace std;

int main()
{
    chrono::steady_clock sc;
    int n;
    cin >> n;
    auto start = sc.now();
    MatrixXd m = MatrixXd::Random(n, n);
    VectorXd b = VectorXd::Random(n);
    VectorXd x = m.lu().solve(b);
    auto end = sc.now();
    // measure time span between start & end
    auto time_span = static_cast<chrono::duration<double>>(end - start);
    cout << "Operation took: " << time_span.count() << " seconds !!!";
}