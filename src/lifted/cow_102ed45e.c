/* f_0x102ed45e - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the signed dword at [self+0x10] is outside [200,210], updates the object pointed to by [self] and calls its first vtable slot with self; then returns the low byte of [ [self+0x18c]+0x11 ] merged in

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_102ed45e(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edx = g->edx;
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;
    const uint32_t sp0 = g->esp;

    uint32_t esi = self;
    uint32_t eax = rd32(esi + 0x10u);

    if ((int32_t)eax < 200 || (int32_t)eax > 210)
    {
        eax = rd32(esi);
        wr32(eax + 0x14u, 0x12u);

        eax = rd32(esi);
        uint32_t ecx = rd32(esi + 0x10u);
        wr32(eax + 0x18u, ecx);

        eax = rd32(esi);

        /* Emulate the caller's push esi before the indirect call. */
        g->esp = sp0 - 4u;
        wr32(g->esp, entry_esi);

        uint32_t target = rd32(eax);
        cow_cdecl(g, target, 1u, esi);

        /* Original does: pop ecx, loading the pushed esi value. */
        g->ecx = esi;

        /* Use the register value left by the callee, as the original would. */
        esi = g->esi;
    }

    eax = rd32(esi + 0x18cu);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)rd8(eax + 0x11u);

    /* Original pop esi restores the saved entry value. */
    g->esi = entry_esi;
    g->ebx = entry_ebx;
    g->edi = entry_edi;
    g->ebp = entry_ebp;
    g->edx = g->edx; /* preserve whatever the last call left; entry value if no call */

    (void)entry_edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed45e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_102ed45e(g, self);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
