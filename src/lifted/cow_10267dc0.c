/* f_0x10267dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10267dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(self + 0x48u) != 1u) goto L_10267dd8;
    return 0x80004005u;
L_10267dd8: ;
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, self);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x2cu), sp0 - 8u, 2, self, sp0 - 8u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        ebx = t2;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = t2;
        wr32(sp0 - 0x14u, in_edi);
        wr32(sp0 - 0x18u, self + 0x1cu);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x1cu);   /* kernel32.dll!EnterCriticalSection */
        t5 = g->edx;
        wr32(sp0 - 0x18u, self + 0x1cu);
        t6 = rd32(sp0 - 8u);
        t7 = rd32(sp0 - 4u);
        wr32(self + 0x40u, t6);
        wr32(self + 0x44u, t7);
        wr32(self + 0x38u, t6);
        wr32(self + 0x3cu, t7);
        cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x1cu);   /* kernel32.dll!LeaveCriticalSection */
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10267dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10267dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
