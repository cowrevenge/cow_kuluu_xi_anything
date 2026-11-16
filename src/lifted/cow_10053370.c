/* f_0x10053370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10053370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    t1 = rd8(self + 0xdcu);
    wr32(self + 0x9cu, 0u);
    wr32(self + 0xccu, 0u);
    wr32(self + 0xc8u, 0u);
    if (!(t1 & 1u)) goto L_100533b8;
    if (rd32(self + 0xa8u) != 0u)
    {
        eax = rd32(self + 0xa8u);
        wr32(eax + 0x14u, 0u);
    }
    wr8(self + 0xdcu, rd8(self + 0xdcu) & 0xfeu);
    t2 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint8_t)(rd32(self + 0xd8u) >> 8u | 8u) << 8u;
    wr32(self + 0xd8u, t2);
    return t2;
L_100533b8: ;
    wr8(self + 0xdcu, rd8(self + 0xdcu) & 0xfeu);
    t3 = (rd32(self + 0xd8u) & 0xffff00ffu) | (uint8_t)(rd32(self + 0xd8u) >> 8u | 8u) << 8u;
    wr32(self + 0xd8u, t3);
    if (rd32(self + 0xa8u) == 0u)
    {
        ecx = rd32(self + 0xa8u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0xa8u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(self + 0xa8u, 0u);
        ecx = t4;
        edx = t5;
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x3du, 4u);
    t7 = g->edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_fastcall(g, COW_IMG(0x100748f0u), t6, t7, 0);
    t9 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t6 == 0u)
    {
        eax = t8;
        edx = t9;
        edi = 0u;
    }
    else
    {
        eax = t8;
        edx = t9;
        edi = t6;
        g->esp = sp0 - 0xcu;
        t10 = cow_call_regs(g, COW_IMG(0x10074740u), eax, edi, edx, 1, 0);
        t11 = g->edx;
        wr32(edi, COW_IMG(0x1032b654u));
        wr8(edi + 0x3cu, 0u);
        eax = t10;
        edx = t11;
    }
    wr32(self + 0xa8u, edi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10074a00u), edi, 0);
    t12 = g->edx;
    t13 = rd32(self + 0x14u);
    wr32(edi + 0x34u, t13);
    t14 = rd32(self + 0x14u);
    wr32(edi + 0x38u, t14);
    t15 = rd32(self + 0x14u);
    wr32(edi + 0x18u, t15);
    wr32(edi + 0x1cu, 0x4d670000u);
    g->edx = t12;
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10053370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10053370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
