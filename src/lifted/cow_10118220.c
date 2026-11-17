/* f_0x10118220 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Repeatedly obtains a candidate from FUN_10126500 and validates it via FUN_10126520 until a zero 16-bit word is found, returning that pointer or NULL.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10118220(Guest* g, uint32_t self)
{
    const uint32_t sp0 = g->esp;
    const uint32_t esi = self + 0x14u;
    const uint32_t local = sp0 - 4u;   /* original [esp + 4] after push ecx / push esi */

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    uint32_t result;

    /* 10118227: call 0x10126500
       Original state before call:
         ecx = esi
         esp = sp0 - 8
       No stack arguments; callee returns with bare ret.
    */
    g->esp = sp0 - 8u;
    result = cow_thiscall_cdecl(g, COW_IMG(0x10126500u), esi, 0u);

    /* 1011822c: mov dword ptr [esp + 4], eax */
    wr32(local, result);

    for (;;)
    {
        /* 10118230: mov eax, dword ptr [esp + 4] */
        result = rd32(local);

        /* 10118234: test eax, eax / 10118236: je 0x1011824d */
        if (result == 0u)
        {
            g->ebx = saved_ebx;
            g->esi = saved_esi;
            g->edi = saved_edi;
            g->ebp = saved_ebp;
            g->esp = sp0;
            return 0u;
        }

        /* 10118238: lea eax, [esp + 4]
           1011823c: mov ecx, esi
           1011823e: push eax
           1011823f: call 0x10126520
           Original state before call:
             ecx = esi
             esp = sp0 - 8
             one stack argument: local
             callee ends with ret 4
        */
        g->esp = sp0 - 8u;
        result = cow_thiscall(g, COW_IMG(0x10126520u), esi, 1u, local);

        /* 10118244: cmp word ptr [eax], 0
           10118248: jne 0x10118230
        */
        if (rd16(result) == 0u)
        {
            g->ebx = saved_ebx;
            g->esi = saved_esi;
            g->edi = saved_edi;
            g->ebp = saved_ebp;
            g->esp = sp0;
            return result;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10118220(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
