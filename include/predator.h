// Copyright dmitrycvetkov 2021
#ifndef _PREDATOR_H_
#define _PREDATOR_H_

#include "object.h"
#include "prey.h"

class Predator : public Prey {
 public:
    explicit Predator(std::weak_ptr<Cell> cell);

    void live() override;
    void reproduce(const std::shared_ptr<Cell>& cell) override;
    ObjType type() const override;

 private:
    std::size_t health;

    bool hunt();
};

#endif  // _PREDATOR_H_