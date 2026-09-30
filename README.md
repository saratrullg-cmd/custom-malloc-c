# custom-malloc-c
A custom Dynamic memory allocator in C implementing malloc() and free() using POSIX System calls and a free list for block reuse

Este proyecto es un asignador de memoria dinámica construida desde cero. Este interactúa de manera directa con el núcleo del sistema operativo para gestionar el espacio. Utiliza un diseño de headers con free list, para rastrear, liberar y reciclar bloques de memoria de forma eficiente, evitando fugas.
