/* f_0x10312190 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   MSVC-style stack probe: allocates `eax` bytes below the caller frame, touches the pages, and returns with esp moved to the new allocation.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10312190(Guest* g, uint32_t self)
{
    (void)self;

    uint32_t eax = g->eax;
    uint32_t ecx = g->ecx;
    uint32_t esp = g->esp;
    const uint32_t edx = g->edx;

    /* push ecx */
    esp -= 4u;
    wr32(esp, ecx);

    /* cmp eax, 0x1000 */
    uint32_t cf = (eax < 0x1000u);

    /* lea ecx, [esp + 8] */
    ecx = esp + 8u;

    /* jb 0x103121b0 */
    if (!cf)
    {
        /* loop at 0x1031219c */
        for (;;)
        {
            /* sub ecx, 0x1000 */
            ecx -= 0x1000u;

            /* sub eax, 0x1000 */
            eax -= 0x1000u;

            /* test dword ptr [ecx], eax */
            (void)rd32(ecx);

            /* cmp eax, 0x1000 */
            cf = (eax < 0x1000u);

            /* jae 0x1031219c */
            if (!cf)
                continue;
            break;
        }
    }

    /* 0x103121b0: sub ecx, eax */
    ecx -= eax;

    /* mov eax, esp */
    eax = esp;

    /* test dword ptr [ecx], eax */
    (void)rd32(ecx);

    /* mov esp, ecx */
    esp = ecx;

    /* mov ecx, dword ptr [eax] */
    ecx = rd32(eax);

    /* mov eax, dword ptr [eax + 4] */
    eax = rd32(eax + 4u);

    /* push eax */
    esp -= 4u;
    wr32(esp, eax);

    /* ret: pop the pushed return address and leave */
    esp += 4u;

    g->esp = esp - 4u;   /* rt_return will add 4 for the bare ret */
    g->ecx = ecx;
    g->edx = edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10312190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10312190(g, g->ecx);
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
