#pragma once

#include <enums/uber_state.h>
#include <functional>

namespace uber_states {
    class UberState {
    public:
        UberState();
        UberState(int group, int state);
        UberState(UberStateGroup group, int state);
        UberState(UberStateGroup group, app::AbilityType__Enum state);

        UberState(app::IUberState* state);
        UberState(app::SerializedBooleanUberState* state) :
                UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedByteUberState* state) :
                UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedIntUberState* state) :
                UberState(reinterpret_cast<app::IUberState*>(state)) {}
        UberState(app::SerializedFloatUberState* state) :
                UberState(reinterpret_cast<app::IUberState*>(state)) {}

        bool valid() const;

        void set(double value, bool ignore_intercept = false, bool ignore_notify = false);
        double get() const;

        template <typename T>
        T get() const { return static_cast<T>(get()); }
        template <>
        bool get() const { return get() > 0.5; }

        UberStateGroup group() const { return m_group; }
        int state() const { return m_state; }

        std::string group_name() const;
        std::string state_name() const;

        template <typename T>
        T* ptr() const { return reinterpret_cast<T*>(ptr()); }

        void apply() const;
        app::IUberState* ptr() const;
        void notify_changed(double prev) const;

    private:
        UberStateGroup m_group;
        int m_state;
    };

    struct UberStateCondition {
    public:
        enum class Operator {
            Equals,
            LessOrEquals,
            MoreOrEquals,
            Less,
            More
        };

        UberState state;
        Operator op;
        double value;

        bool resolve() const;
        bool resolve(double state_value) const;
        bool resolve(UberState compared_state, double state_value) const;
    };

    using value_notify = void (*)(UberState state, double previous_value);
    using value_intercept = bool (*)(UberState state, double value);

    void apply_all();
    void clear();

    void register_value_notify(value_notify notify);
    void register_value_intercept(value_intercept intercept);

    bool operator==(UberState const& a, UberState const& b);
    bool operator==(UberStateCondition const& a, UberStateCondition const& b);
} // namespace uber_states

template<>
struct std::hash<uber_states::UberState>
{
    std::size_t operator()(const uber_states::UberState& s) const
    {
        return hash<UberStateGroup>()(s.group())
            ^ (hash<int>()(s.state()) << 1);
    }
};

template <>
struct std::hash<uber_states::UberStateCondition> {
    std::size_t operator()(const uber_states::UberStateCondition& s) const {
        return hash<uber_states::UberState>()(s.state)
            ^ (hash<double>()(s.value) << 1)
            ^ (hash<int>()(static_cast<int>(s.op)) << 2);
    }
};
