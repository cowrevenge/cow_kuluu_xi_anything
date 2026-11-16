/* f_0x100a9f40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100a9f40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 288u);

    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        eax = rd32(COW_IMG(0x104568fcu));
        edx = in_edx;
        goto L_100a9fa0;
    }
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        edx = in_edx;
        goto L_100a9fa0;
    }
    eax = rd32(self + 0x70u);
    g->edx = in_edx;
    g->esp = sp0 - 0x108u;
    t1 = cow_call_regs(g, COW_IMG(0x10096610u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_100a9fab;
    }
    eax = t1;
    edx = t2;
    if (arg1 != 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0x108u;
        t3 = cow_thiscall(g, COW_IMG(0x10082fa0u), arg1, 0);
        t4 = g->edx;
        wr32(sp0 - 0x10cu, t3);
        wr32(sp0 - 0x110u, COW_IMG(0x1035bd1cu));
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        g->ecx = sp0 - 0x100u;
        g->esp = sp0 - 0x100u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1035bd1cu), t3, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
        t5 = g->ecx;
        wr32(sp0 - 0x118u, 0u);
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0x114u;
        t6 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x100u, 0u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    wr32(sp0 - 0x10cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t8 = cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5cu, 1, arg1);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_100a9fa0: ;
    wr32(sp0 - 0x10cu, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    t10 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x10487f58u), 1, arg1);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_100a9fab: ;
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9f40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a9f40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
