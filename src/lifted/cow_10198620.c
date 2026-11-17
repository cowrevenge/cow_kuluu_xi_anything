/* f_0x10198620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10198620(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    uint32_t t19;
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
    const uint32_t in_edi = g->edi;

    t1 = rd32(self + 0x14u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x101986f0u), 1, t1);
    t3 = g->edx;
    t4 = rd32(self + 8u);
    wr32(self + 0x18u, t2);
    wr32(self + 0x1cu, 0u);
    g->ebx = 0u;
    g->edx = t3;
    t5 = cow_call_regs(g, COW_IMG(0x10118db0u), t2, t4, g->edx, 0, 2, 1u, 0u);
    t6 = g->edx;
    g->edi = t4;
    cow_thiscall(g, COW_IMG(0x101186a0u), t4, 0);
    t7 = rd32(self + 0x1cu);
    t8 = rd32(COW_IMG(0x10662734u));
    wr32(t8 + 0x24u, t7);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        edx = t8;
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10118f70u), self + 0x20u, ecx, g->edx, 0, 1, self + 0x20u);
    }
    t9 = rd32(self + 8u);
    wr8(t9 + 0x85u, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x28u, 0u);
    ecx = t9;
    ebx = 1u;
    edi = 0u;
L_1019867f: ;
    t10 = rd32(edi + rd32(self + 0x18u));
    g->eax = t10;
    g->edx = rd32(self + 0x18u);
    t11 = rd32(self + 0x18u);
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t10);
    t13 = g->edx;
    if (t12 != 0u)
    {
        eax = t12;
        ecx = rd32(self + 8u);
        edx = t13;
        loc_10 = ebx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 0xbu, loc_10);
        t15 = g->ecx;
        eax = rd32(edi + rd32(self + 0x18u));
        ecx = t15;
        edx = rd32(self + 0x18u);
    }
    else
    {
        eax = t12;
        ecx = rd32(self + 8u);
        edx = t13;
        loc_10 = ebx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 0xfu, loc_10);
        t14 = g->edx;
        eax = rd32(edi + rd32(self + 0x18u));
        ecx = rd32(self + 0x18u);
        edx = t14;
    }
    if (eax != 0xffffffffu)
    {
        wr32(self + 0x2cu, rd32(self + 0x2cu) + 1u);
    }
    if ((int32_t)ebx < 14)
    {
        ebx = ebx + 1u;
        edi = edi + 0x10u;
        goto L_1019867f;
    }
    eax = ebx;
    t16 = (ecx & 0xffff0000u) | rd16(self + 0x2cu);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x10118530u), rd32(self + 8u), edx, 2, t16, 0xbu);
    t17 = rd32(self + 0x28u);
    t18 = rd32(rd32(self + 8u) + 0x88u);
    t19 = rd32(self + 8u);
    wr32(t18 + 0x14u, t17);
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10198620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10198620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
