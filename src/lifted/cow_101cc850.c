/* f_0x101cc850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101cc850(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101cc830u), self, 0);
    t1 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0xcu);
    wr32(sp0 - 0x24u, sp0 - 0xcu);
    wr32(sp0 - 0x28u, arg1);
    g->eax = sp0 - 0xcu;
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, sp0 - 0xcu, 0xcu, 0u, 0u);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        goto L_101cc888;
    }
    return 5u;
L_101cc888: ;
    if (rd32(sp0 - 0xcu) == 0x58494452u) goto L_101cc89f;
    return 6u;
L_101cc89f: ;
    if (rd32(sp0 - 8u) < 0x64u)
    {
        eax = rd32(sp0 - 8u);
        goto L_101cc8b5;
    }
    return 6u;
L_101cc8b5: ;
    wr32(self + 0x39cu, eax);
    if (eax == 0u) goto L_101cc8f3;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x20u, eax * 8u);
    wr32(sp0 - 0x24u, self + 4u);
    wr32(sp0 - 0x28u, arg1);
    g->eax = eax;
    g->edx = self + 4u;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4790u), rd32(COW_IMG(0x10662dccu)), 5, arg1, self + 4u, eax * 8u, 0xcu, 0u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        edx = t5;
        goto L_101cc8f3;
    }
    eax = t4;
    edx = t5;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101cc830u), self, 0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 5u;
L_101cc8f3: ;
    t6 = rd32(self + 0x39cu) << 3u;
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x1cu, self + 4u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x101c8c50u), t6, g->ecx, g->edx, 1, 4, self + 4u, t6, in_edi, in_esi);
    t8 = g->edx;
    if (rd32(sp0 - 4u) == t7) goto L_101cc925;
    eax = t7;
    edx = t8;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101cc830u), self, 0);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 7u;
L_101cc925: ;
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc850(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
