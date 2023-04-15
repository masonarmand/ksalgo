#ifndef KSALGO_H
#define KSALGO_H

#include <stdbool.h>

#define SAMPLE_RATE 44100

typedef struct {
    bool active;
    int buffer_pos;
    int buffer_size;
    float *buffer;
    float decay;
} KsalgoNote;

void ksalgo_init_note(KsalgoNote *note);
void ksalgo_start_note(KsalgoNote *note, float frequency, float decay);
void ksalgo_stop_note(KsalgoNote *note);
void ksalgo_free_note(KsalgoNote* note);
float ksalgo_process_note(KsalgoNote *note);
void ksalgo_mix_audio(KsalgoNote* notes, int notes_size, float *buffer, int buffer_size);

#endif /* KSALGO_H */

