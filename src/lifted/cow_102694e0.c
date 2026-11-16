/* f_0x102694e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102694e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10328038u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, self + 8u);
    wr32(sp0 - 0x10u, self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 8u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (arg1 == 0u)
    {
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x20u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(arg1) + 4u), ecx, 1, arg1);
        t4 = g->edx;
        edx = t4;
    }
    if (rd32(self + 0x60u) == 0u)
    {
        eax = rd32(self + 0x60u);
    }
    else
    {
        eax = rd32(self + 0x60u);
        if (rd32(self + 0x54u) != 0u)
        {
            ecx = rd32(self + 0x54u);
            wr32(sp0 - 0x20u, ecx);
            wr32(sp0 - 0x24u, eax);
            g->edx = rd32(eax);
            t5 = rd32(eax);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(t5 + 0x18u), ecx, 2, eax, ecx);
            t6 = g->edx;
            wr32(self + 0x54u, 0u);
            edx = t6;
        }
        t7 = rd32(self + 0x60u);
        wr32(sp0 - 0x20u, t7);
        g->eax = t7;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_thiscall(g, rd32(rd32(t7) + 8u), rd32(t7), 1, t7);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    wr32(self + 0x60u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t10 = cow_fastcall(g, COW_IMG(0x10269570u), self, edx, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x20u, self + 8u);
    g->edx = t12;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t11, 1, self + 8u);
    t13 = g->edx;
    t14 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t14);
    g->edx = t13;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102694e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102694e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
