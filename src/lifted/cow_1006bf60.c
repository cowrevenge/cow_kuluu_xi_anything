/* f_0x1006bf60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   returns param_1 modulo the unsigned value returned by FUN_1006be20, or 0 when param_1 is null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_1006bf60(Guest* g, uint32_t param)
{
    REGS_DECL;
    REGS_LOAD;

    /* push esi */
    esp -= 4u;
    wr32(esp, esi);

    /* mov esi, dword ptr [esp + 8] */
    esi = param;

    /* test esi, esi / jne */
    if (esi == 0u)
    {
        /* xor eax, eax */
        eax = 0u;

        /* pop esi */
        esi = rd32(esp);
        esp += 4u;

        /* ret */
        REGS_STORE;
        return eax;
    }

    /*
       call 0x1006be20

       At this point the original stack layout is:
         [esp]     = saved esi
         [esp + 4] = return address for this function
         [esp + 8] = param
       cow_cdecl will push the callee return address and execute the callee.
       Synchronize the local esp with g->esp around the call.
    */
    g->esi = esi;
    g->esp = esp;

    eax = cow_cdecl(g, COW_IMG(0x1006be20u), 0u);

    esp = g->esp;
    esi = g->esi;

    /* xor edx, edx */
    edx = 0u;

    /* div esi */
    {
        uint32_t d = esi;
        if (d == 0u)
        {
            RT_DIVIDE(COW_IMG(0x1006bf74u));
        }

        {
            uint64_t n = ((uint64_t)edx << 32) | (uint64_t)eax;
            if (n / (uint64_t)d > 0xFFFFFFFFull)
            {
                RT_DIVIDE(COW_IMG(0x1006bf74u));
            }

            eax = (uint32_t)(n / (uint64_t)d);
            edx = (uint32_t)(n % (uint64_t)d);
        }
    }

    /* pop esi */
    esi = rd32(esp);
    esp += 4u;

    /* mov eax, edx */
    eax = edx;

    /* ret */
    REGS_STORE;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006bf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_1006bf60(g, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
