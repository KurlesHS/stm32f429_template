#if defined(DEBUG)

// The DEBUG version is not naked, but has a proper stack frame,
// to allow setting breakpoints at Reset_Handler.
void __attribute__ ((section(".after_vectors"),noreturn))
Reset_Handler (void)
{
  _start ();
}

#else

// The Release version is optimised to a quick branch to _start.
void __attribute__ ((section(".after_vectors"),naked))
Reset_Handler(void)
  {
    asm volatile
    (
        " ldr     r0,=_start \n"
        " bx      r0"
        :
        :
        :
    );
  }

#endif


void __attribute__ ((section(".after_vectors"),weak))
NMI_Handler (void)
{
  while (1)
    {
    }
}


void __attribute__ ((section(".after_vectors"),weak,naked))
HardFault_Handler (void)
{
    while (1)
      {
      }
}

void __attribute__ ((section(".after_vectors"),weak,naked))
BusFault_Handler (void)
{
    while (1)
      {
      }
}

void __attribute__ ((section(".after_vectors"),weak,naked))
UsageFault_Handler (void)
{
    while (1)
      {
      }
}

void __attribute__ ((section(".after_vectors"),weak))
SVC_Handler (void)
{
  while (1)
    {
    }
}


void __attribute__ ((section(".after_vectors"),weak))
DebugMon_Handler (void)
{
  while (1)
    {
    }
}

void __attribute__ ((section(".after_vectors"),weak))
PendSV_Handler (void)
{
  while (1)
    {
    }
}

void __attribute__ ((section(".after_vectors"),weak))
SysTick_Handler (void)
{
  // DO NOT loop, just return.
  // Useful in case someone (like STM HAL) inadvertently enables SysTick.
  ;
}

void __attribute__ ((section(".after_vectors"),weak))
MemManage_Handler (void)
{
  while (1)
    {
    }
}



