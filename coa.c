#include <windows.h>

// Function to play a musical note (frequency in Hz and duration in ms)
void playNote(int frequency, int duration) {
    Beep(frequency, duration);
    Sleep(100); // Add a brief pause between notes
}

int main() {
    // Define frequencies for musical notes
    int C4 = 261;  // Middle C
    int D4 = 293;  // D
    int E4 = 329;  // E
    int F4 = 349;  // F
    int G4 = 392;  // G
    int A4 = 440;  // A
    int B4 = 493;  // B

    // Play "Happy Birthday" melody (approximately 1 minute)
    for (int i = 0; i < 15; i++) {
        playNote(C4, 400);
        playNote(C4, 400);
        playNote(D4, 400);
        playNote(C4, 400);
        playNote(F4, 400);
        playNote(E4, 400);

        playNote(C4, 400);
        playNote(C4, 400);
        playNote(D4, 400);
        playNote(C4, 400);
        playNote(G4, 400);
        playNote(F4, 400);

        playNote(C4, 400);
        playNote(C4, 400);
        playNote(C4, 400);
        playNote(A4, 400);
        playNote(F4, 400);
        playNote(E4, 400);
        playNote(D4, 400);
        playNote(B4, 400);

        playNote(C4, 400);
        playNote(C4, 400);
        playNote(D4, 400);
        playNote(C4, 400);
        playNote(F4, 400);
        playNote(E4, 400);
    }

    return 0;
}
