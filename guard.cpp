#include <iostream>
using namespace std;

enum Door {
    EXIT,
    TRAP,
    RETURN
};

class GuardSystem {
public:
    Door decideDoor(bool isSafe, bool isTrapDetected, bool isVisitedBefore) {
        
        // Priority 1: Avoid trap at all cost
        if (isTrapDetected) {
            return RETURN;
        }

        // Priority 2: If safe path exists → take exit
        if (isSafe && !isVisitedBefore) {
            return EXIT;
        }

        // Priority 3: If already visited → avoid looping
        if (isVisitedBefore) {
            return RETURN;
        }

        // Default case → cautious fallback
        return RETURN;
    }

    void displayDecision(Door choice) {
        switch(choice) {
            case EXIT:
                cout << "Choose EXIT door (Safe path)\n";
                break;
            case TRAP:
                cout << "Trap detected! Avoid this door.\n";
                break;
            case RETURN:
                cout << "Go back to starting point.\n";
                break;
        }
    }
};

int main() {
    GuardSystem system;

    // Example scenario
    bool isSafe = true;
    bool isTrapDetected = false;
    bool isVisitedBefore = false;

    Door decision = system.decideDoor(isSafe, isTrapDetected, isVisitedBefore);
    system.displayDecision(decision);

    return 0;
}