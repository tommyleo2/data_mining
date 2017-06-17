#ifndef DECISIONTREEINMEMORY_H
#define DECISIONTREEINMEMORY_H

#include "framework/DecisionTree.hpp"
#include "framework/Tree.hpp"

namespace GBDT {

  class DecisionTreeInMemory : public DecisionTree {
  public:
    using SplitPoint = tuple<size_type, size_type>;

  public:
    DecisionTreeInMemory(const shared_ptr<TrainingSet> &training_set,
                         const shared_ptr<LossFunction> &loss_function);
    virtual void buildNewTree(vector<double> &residual) override;
    virtual double predict(const TrainingSet::TrainingSetRow_t &test_case) override;

  protected:

    vector< vector<size_type> > order_cache;
    vector<Tree> m_trees;
  };

}  // GBDT

#endif /* DECISIONTREEINMEMORY_H */