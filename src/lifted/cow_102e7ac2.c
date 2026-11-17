/* f_0x102e7ac2 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the 4-dword value at param_2 matches either of two fixed 4-dword image constants, stores param_1 into *param_3 and calls the second function in param_1's vtable with param_1; otherwise returns E_NO

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
static uint32_t cow_cmp4(uint32_t src, uint32_t dst)
{
    uint32_t i;
    for (i = 0u; i < 4u; ++i)
    {
        uint32_t a = rd32(src + i * 4u);
        uint32_t b = rd32(dst + i * 4u);
        if (a != b)
            return 0u;
    }
    return 1u;
}

uint32_t cow_fn_102e7ac2(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2, uint32_t param3)
{
    const uint32_t entry_ebp = g->ebp;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_edx = g->edx;

    if (!cow_cmp4(param2, COW_IMG(0x103485c0u)))
    {
        if (!cow_cmp4(param2, COW_IMG(0x1034a128u)))
        {
            g->edx = entry_edx;
            return 0x80004002u;
        }
    }

    wr32(param3, param1);

    const uint32_t vtable = rd32(param1);
    const uint32_t target = rd32(vtable + 4u);

    /*
     * Original register/stack state at 102e7af4:
     *   eax = param1
     *   ecx = vtable
     *   edx = unchanged from entry
     *   esi = param2 + 16
     *   edi = one of the two image constants + 16
     *   ebp = sp0 - 4
     *   esp = sp0 - 12, then push eax makes sp0 - 16 before call.
     */
    g->eax = param1;
    g->ecx = vtable;
    g->edx = entry_edx;
    g->esi = param2 + 16u;
    g->edi = COW_IMG(0x103485c0u) + 16u;
    g->ebp = sp0 - 4u;
    g->esp = sp0 - 12u;

    (void)cow_stdcall(g, target, 1u, param1);

    /* The original restores esi, edi, and ebp from its own saved frame. */
    g->esi = entry_esi;
    g->edi = entry_edi;
    g->ebp = entry_ebp;

    /* edx is whatever the callee left; eax is explicitly zeroed by xor eax,eax. */
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7ac2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_102e7ac2(g, sp0, param1, param2, param3);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
