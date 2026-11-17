/* f_0x102a9f50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the object's buffer pointer at +0x64 is null, initialize it via FUN_102a99a0, then zero the three-dword records in that buffer for the count stored at +0x14.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a9f50(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_ebp = g->ebp;

    /* Emulate:
         push esi
         mov  esi, [esp+8]
         push edi
       so the original's later pop esi/pop edi read the saved slots, which
       may be overwritten by the callee or by the zeroing loop.
    */
    wr32(sp0 - 4u, entry_esi);
    wr32(sp0 - 8u, entry_edi);

    if (rd32(self + 0x64u) == 0u)
    {
        /* At the call site, original has:
             esp = sp0 - 8
             [sp0-4] = saved esi
             [sp0-8] = saved edi
             esi = self
             edi = 0
           and then pushes 3, 4, esi before calling.
        */
        g->esp = sp0 - 8u;
        g->esi = self;
        g->edi = 0u;

        cow_cdecl(g, COW_IMG(0x102a99a0u), 3, self, 4u, 3u);

        /* The caller pops the three arguments. */
        g->esp = sp0 - 8u;
    }

    uint32_t count = rd32(self + 0x14u);
    uint32_t base = rd32(self + 0x64u);
    uint32_t i = 0u;

    if ((int32_t)count > 0)
    {
        uint32_t p = base + 8u;

        do
        {
            wr32(p - 8u, 0u);
            wr32(p - 4u, 0u);
            wr32(p, 0u);

            /* The original reloads the count from memory each iteration. */
            count = rd32(self + 0x14u);
            ++i;
            p += 12u;
        } while ((int32_t)i < (int32_t)count);
    }

    /* Emulate:
         pop edi
         pop esi
       using the stack slots, not the entry register values, because the
       callee or the zeroing loop may have changed those slots.
    */
    g->edi = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 4u);
    g->ebx = entry_ebx;
    g->ebp = entry_ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    cow_fn_102a9f50(g, self, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
