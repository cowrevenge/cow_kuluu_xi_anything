/* f_0x10107cf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 iff FUN_10107c90(param1, param2) is positive and FUN_10107d30(param1, param3) is nonzero; otherwise 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10107cf0(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3)
{
    const uint32_t saved_esi = g->esi;

    /* Original: mov eax, [esp+8] -> param2; push esi; mov esi, [esp+8] -> param1.
       Before the first call, esi = param1 and eax = param2. */
    g->esi = param1;
    g->eax = param2;

    uint32_t r1 = cow_cdecl(g, COW_IMG(0x10107c90u), 2u, param1, param2);

    /* test eax, eax / jle: signed comparison */
    if ((int32_t)r1 <= 0)
    {
        g->esi = saved_esi;
        return 0u;
    }

    /* Original: mov ecx, [esp+0x10] -> param3; push ecx; push esi.
       Before the second call, ecx = param3, esi = param1, eax still holds r1. */
    g->ecx = param3;
    g->esi = param1;
    g->eax = r1;

    uint32_t r2 = cow_cdecl(g, COW_IMG(0x10107d30u), 2u, param1, param3);

    /* test eax, eax / je */
    if (r2 == 0u)
    {
        g->esi = saved_esi;
        return 0u;
    }

    g->esi = saved_esi;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10107cf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);
    const uint32_t param3 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10107cf0(g, param1, param2, param3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
