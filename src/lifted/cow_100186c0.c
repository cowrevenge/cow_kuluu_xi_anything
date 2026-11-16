/* f_0x100186c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100186c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x10329fbcu));
    wr32(self + 0x120u, 0u);
    wr32(self + 0x124u, 0u);
    wr32(COW_IMG(0x10456d20u), 0u);
    wr32(self + 0x108u, 0u);
    wr32(self + 0x110u, 0u);
    if (rd8(rd32(COW_IMG(0x1045666cu)) + 0x915u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x1045666cu));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x100170d0u), eax + 0x1f4u, 3, self + 0x114u, self + 0x118u, self + 0x11cu);
        g->edx = rd32(COW_IMG(0x1045666cu));
        t2 = rd32(COW_IMG(0x1045666cu));
        cow_thiscall(g, COW_IMG(0x100170a0u), t2 + 0x1f4u, 3, 0x3f800000u, 0x3f800000u, 0x3f800000u);
        t3 = g->edx;
        edx = t3;
    }
    g->ecx = self + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg1, g->ecx, g->edx, 1, 3, self + 4u, arg1, 0x103u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x14u, self + 4u, arg1);
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
        eax = 0u;
    }
    else
    {
        eax = t6;
        if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
        {
            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        }
        else
        {
            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            if (edx == 2u) goto L_10018771;
            if (edx != 3u) goto L_10018776;
L_10018771: ;
            edx = 1u;
        }
L_10018776: ;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, COW_IMG(0x10018a50u), eax, 1, edx);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    wr32(self + 0x120u, eax);
    if (eax != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10018b30u), eax, 0);
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        g->esp = sp0;
        t12 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x3cu, in_esi, in_ebx);
        t13 = g->edx;
        if (t12 == 0u)
        {
            edx = t13;
            eax = 0u;
        }
        else
        {
            eax = t12;
            edx = t13;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t14 = cow_thiscall(g, COW_IMG(0x10018c50u), eax, 0);
            t15 = g->edx;
            eax = t14;
            edx = t15;
        }
        wr32(self + 0x124u, eax);
        if (eax != 0u)
        {
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10018ce0u), eax, 0);
        }
    }
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100186c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100186c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
