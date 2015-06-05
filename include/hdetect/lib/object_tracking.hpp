#ifndef OBJECTDETECTION_HPP
#define OBJECTDETECTION_HPP

#include <newmat/newmat.h>
#include <stdio.h>
#include <string>
#include <deque>
#include <map>

#include <hdetect/lib/header.hpp>
#include <hdetect/lib/human.hpp>
#include <hdetect/lib/observation.hpp>
#include <hdetect/lib/detector.hpp>

namespace ObjectTracking
{
    void loadCfg(detectorParameters params);
    void loadCfg(std::string cfg);

    void eliminate(deque<Human> &humans);
    void predict(deque<Human> &humans);
    void pair(deque<Human> &humans, deque<Observation> &observations, map<int, int> &pairs);
    void update(deque<Human> &humans, deque<Observation> &observations, map<int, int> &pairs);

    float calculateMahDis(Observation &observation, Human &human);
    float calculateEucDis(Observation &observation, Human &human);
}

#endif // OBJECTDETECTION_HPP
