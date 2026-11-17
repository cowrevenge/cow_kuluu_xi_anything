/* f_0x101567a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the requested count is greater than the object's limit, copy from the object's string buffer into dest using _strncpy and return count; otherwise return 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_101567a0(Guest* g, uint32_t self, uint32_t count, uint32_t sp0)
{
    const uint32_t saved_esi = g->esi;

    const uint32_t limit = rd32(self + 0x14u);

    /* cmp esi, eax / ja : unsigned comparison */
    if (count <= limit)
    {
        /* Original: xor eax,eax; pop esi; ret 8.
           edx is untouched, esi is restored to its entry value. */
        return 0u;
    }

    const uint32_t source = rd32(self + 0x10u);

    /* Original reads dest only on this path: mov ecx, dword ptr [esp + 8] */
    const uint32_t dest = rd32(sp0 + 4u);

    /* Match register state at the call site. */
    g->eax = source;
    g->ecx = dest;
    g->esi = count;

    /* Original:
         push esi   ; count
         push eax   ; source
         push ecx   ; dest
         call _strncpy
       cdecl: caller pops, arguments are (dest, source, count). */
    cow_cdecl(g, COW_IMG(0x10312090u), 3u, dest, source, count);

    /* Original after the call:
         add esp, 0xc
         mov eax, esi
         pop esi
         ret 8
       eax becomes count; esi is restored to its entry value;
       edx is whatever _strncpy left in it. */
    g->esi = saved_esi;
    g->eax = count;

    return count;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101567a0(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t self = g->ecx;

    /* Original reads the second stack argument before the branch. */
    const uint32_t count = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_101567a0(g, self, count, sp0);

    g->esp = sp0;
    rt_return(g, result, 8u);         /* ret 8 */
}
/* COW_ADAPTER END */
