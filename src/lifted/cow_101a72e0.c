/* f_0x101a72e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a72e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x106627ccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x106627ccu));
        ecx = self;
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0x1cu, in_ebp);
        wr32(sp0 - 0x20u, in_esi);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x10u);
        t2 = g->edx;
        wr32(sp0 - 0x24u, sp0 - 8u);
        g->ebx = 0u;
        g->edi = self;
        cow_thiscall(g, COW_IMG(0x101a7040u), rd32(COW_IMG(0x106627ccu)), 1, sp0 - 8u);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        t3 = rd32(sp0 - 8u);
        cow_call_regs(g, COW_IMG(0x10118f70u), rd32(COW_IMG(0x106627ccu)), rd32(rd32(COW_IMG(0x106627ccu)) + 8u), g->edx, 0, 1, sp0 - 0x10u);
        t4 = g->edx;
        if ((int32_t)rd32(sp0 - 4u) <= 0)
        {
            ecx = rd32(sp0 - 4u);
            edx = t4;
            ebp = t3;
        }
        else
        {
            edx = t4;
            ebp = t3;
            ecx = 0u;
        }
        wr32(sp0 - 0x24u, ecx);
        wr32(sp0 - 0x28u, ebp);
        g->edx = edx;
        t5 = rd32(self + 8u);
        g->esp = sp0 - 0x20u;
        t6 = cow_call_regs(g, COW_IMG(0x10119110u), 0u, t5, g->edx, 0, 2, ebp, ecx);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
        ebp = rd32(sp0 - 0x1cu);
        esi = rd32(sp0 - 0x20u);
    }
    if (rd32(COW_IMG(0x106627e8u)) == 0u)
    {
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, 5u);
        g->edx = edx;
        t9 = rd32(self + 8u);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x10118b60u), t9, 2, 5u, 4u);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t12 = cow_stdcall(g, COW_IMG(0x101a7d00u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t14;
        goto L_101a739c;
    }
    ecx = t13;
    edx = t14;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t15 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_101a73a8;
    }
    eax = t15;
    edx = t16;
L_101a739c: ;
    wr32(sp0 - 0x1cu, 8u);
    wr32(sp0 - 0x20u, 5u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t17 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 8u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_101a73a8: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a72e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a72e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
