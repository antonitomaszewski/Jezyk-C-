#if defined __SYSTEM_X__ // Predefiniowane w "System X"
// Tutaj nie przenośny kod
#elif defined __SYSTEM_Y__ || __SYSTEM_Z__
// inny nieprzenośny kod
#else
#error "Nierozpoznany system"
#endif
