/* f_0x100e16a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100d92a0 with the value pointed to by the third argument and a pointer to that third argument, then returns a byte-like result while preserving the upper bits of eax as the original does.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100e16a0(Guest* g, uint32_t sp0, uint32_t arg0, uint32_t arg1, uint32_t arg2)
{
    (void)arg1;

    uint32_t eax = arg2;

    if (eax == 0u)
    {
        /* xor al, al with eax already zero */
        eax &= 0xFFFFFF00u;
        return eax;
    }

    uint32_t edx = rd32(eax);
    uint32_t ecx = sp0 + 0xCu;

    /* Match the register state at the original call site. */
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;

    uint32_t call_eax = cow_cdecl(g, COW_IMG(0x100d92a0u), 2u, edx, ecx);

    /* Original: add esp, 8.  The caller pops the two arguments. */
    g->esp = sp0;

    eax = call_eax;

    if (eax != 0u)
    {
        /* xor al, al leaves the upper 24 bits of eax intact. */
        eax &= 0xFFFFFF00u;
        return eax;
    }

    eax = rd32(sp0 + 0xCu);

    if (eax == 0u)
    {
        eax = rd32(sp0 + 4u);

        uint32_t addr = eax;
        uint16_t v = rd16(addr);
        wr16(addr, (uint16_t)(v + 1u));

        /* mov al, 1 leaves the upper 24 bits of eax intact. */
        eax = (eax & 0xFFFFFF00u) | 1u;
        return eax;
    }

    /*
       Flags from test eax, eax:
         of = 0
         sf = bit 31 of eax
       jl is taken when sf != of, i.e. when eax is negative as int32_t.
    */
    if ((int32_t)eax < 0)
    {
        /* xor al, al leaves the upper 24 bits of eax intact. */
        eax &= 0xFFFFFF00u;
        return eax;
    }

    /* mov al, 1 leaves the upper 24 bits of eax intact. */
    eax = (eax & 0xFFFFFF00u) | 1u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e16a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xCu);

    const uint32_t result = cow_fn_100e16a0(g, sp0, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
