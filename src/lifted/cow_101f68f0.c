/* f_0x101f68f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper to fill a local 8-byte buffer, stores its first two 16-bit fields into the object, then calls another helper with zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101f68f0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;

    /* Original reads [esi + 8] before touching the local buffer. */
    const uint32_t ecx1 = rd32(self + 8u);

    /* Local buffer at sp0 - 8, 8 bytes. */
    const uint32_t buf = cow_frame(g, sp0, 8u);

    /* mov word ptr [esp + 0xc], di ... four zero words. */
    wr16(buf + 0u, 0u);
    wr16(buf + 2u, 0u);
    wr16(buf + 4u, 0u);
    wr16(buf + 6u, 0u);

    /* Prepare registers as the original has them at the first call. */
    g->esi = self;
    g->edi = 0u;
    g->eax = buf;
    /* g->edx is left as it was on entry, matching the original. */

    cow_thiscall(g, COW_IMG(0x10118f70u), ecx1, 1u, buf);

    /* After the first call, read the two 16-bit results from the buffer. */
    const uint16_t w0 = (uint16_t)rd16(buf + 0u);
    const uint16_t w1 = (uint16_t)rd16(buf + 2u);

    /* mov dx, word ptr [esp + 0xa] leaves the high half of edx unchanged. */
    g->edx = (g->edx & 0xFFFF0000u) | (uint32_t)w1;

    /* mov word ptr [esi + 0x28], cx */
    wr16(self + 0x28u, w0);

    /* Prepare registers as the original has them at the second call. */
    g->ecx = self;
    g->edi = 0u;
    g->esi = self;

    /* mov word ptr [esi + 0x2a], dx */
    wr16(self + 0x2au, w1);

    cow_thiscall(g, COW_IMG(0x101f6720u), self, 1u, 0u);

    /* Original restores esi and edi from the stack before returning. */
    g->esi = entry_esi;
    g->edi = entry_edi;

    /* eax and edx are whatever the second callee left in them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f68f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101f68f0(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
