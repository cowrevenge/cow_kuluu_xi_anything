/* f_0x10320910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Restores the SEH chain and saved registers from the frame, returns 0, and leaves edx unchanged.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10320910(Guest* g, uint32_t ebp)
{
    /* 10320910: mov esp, dword ptr [ebp - 0x18] */
    /* This read is observable if it faults; the resulting esp is dead because the
       following cmp/je always takes the jump, but the read must still happen. */
    (void)rd32(ebp - 0x18u);

    /* 10320913: xor ebx, ebx */
    /* 10320915: xor esi, esi */
    /* 10320917: or dword ptr [ebp - 4], 0xffffffff */
    wr32(ebp - 4u, 0xFFFFFFFFu);

    /* 1032091b: cmp esi, ebx */
    /* 1032091d: je 0x10320948 */
    /* esi and ebx were just zeroed, so the jump is always taken. */

    /* 10320948: xor eax, eax */
    /* 1032094a: lea esp, [ebp - 0x34] */
    /* 1032094d: mov ecx, dword ptr [ebp - 0x10] */
    /* 10320950: mov dword ptr fs:[0], ecx */
    wr32(g->fs_base, rd32(ebp - 0x10u));

    /* 10320957: pop edi */
    /* 10320958: pop esi */
    /* 10320959: pop ebx */
    const uint32_t pop_base = ebp - 0x34u;
    g->edi = rd32(pop_base);
    g->esi = rd32(pop_base + 4u);
    g->ebx = rd32(pop_base + 8u);

    /* 1032095a: leave */
    /* 1032095b: ret */
    g->ebp = rd32(ebp);

    /* rt_return will add 4 for the return address.  Original final esp is ebp + 8. */
    g->esp = ebp + 4u;

    /* edx is never written by the original, so leave g->edx alone. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ebp0 = g->ebp;

    const uint32_t result = cow_fn_10320910(g, ebp0);

    /* cow_fn has already placed g->esp where rt_return should continue from. */
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
