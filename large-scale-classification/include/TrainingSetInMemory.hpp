#ifndef TRAININGSETINMEMORY_H
#define TRAININGSETINMEMORY_H

#include "framework/TrainingSet.hpp"
#include "framework/config.hpp"

#include <fstream>
#include <sstream>

namespace GBDT {

  class TrainingSetInMemory : public TrainingSet {
  public:
    using TrainingSet_t = vector<TrainingSetRow_t>;

    TrainingSetInMemory(const string &file_path,size_type feature_size);
    virtual double getFeature(index_type id, index_type index) const override;

    virtual const TrainingSetRow_t &getCase(index_type id) override;

    virtual double &getLable(index_type id) override;
    virtual double getLable(index_type id) const override;
    virtual size_type getSetSize() const override;
    virtual size_type getFeatureSize() const override;

    virtual void sortSetByFeature(index_type index, vector<index_type> &ids) override;
  protected:
    TrainingSet_t m_data;
    TrainingSetCol_t m_label;

    size_type m_feature_size;
  };

}

#endif /* TRAININGSETINMEMORY_H */
