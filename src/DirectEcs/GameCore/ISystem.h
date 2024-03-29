#pragma once

namespace DirectEcs
{
class ISystem
{
public:
    virtual ~ISystem() = default;
    virtual void Update(double deltaSecond) = 0;
    [[nodiscard]] bool IsEnable() const;
    void SetIsEnable(bool isEnable);

private:
    bool m_IsEnable = true;
};
}
