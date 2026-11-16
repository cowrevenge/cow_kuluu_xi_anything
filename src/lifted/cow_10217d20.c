/* f_0x10217d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10217d20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    g->esp = sp0 - 0x14u;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0xcu, t1, g->edx, 0, 1, sp0 - 0xcu);
    t3 = g->ecx;
    t4 = rd16(sp0 - 0xcu);
    t5 = rd16(sp0 - 0xau);
    t6 = rd32(sp0 - 0xcu);
    wr16(self + 0x56u, (uint16_t)t4);
    wr16(self + 0x52u, (uint16_t)t4);
    t7 = rd32(sp0 - 8u);
    wr16(self + 0x58u, (uint16_t)t5);
    wr16(self + 0x54u, (uint16_t)t5);
    t8 = rd32(sp0 - 0xau);
    t9 = rd32(sp0 - 6u);
    wr16(self + 0x5au, (uint16_t)(t7 - t6));
    wr16(self + 0x5cu, (uint16_t)(t9 - t8 - 5u));
    wr16(self + 0x64u, 5u);
    wr16(self + 0x66u, 5u);
    wr32(sp0 - 0x18u, COW_IMG(0x1037d46cu));
    t10 = rd16(self + 0x52u);
    wr16(self + 0x60u, (uint16_t)(t10 + 5u));
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x54u) + 5u));
    wr16(self + 0x68u, (uint16_t)(t7 - t6 - 0xau));
    wr16(self + 0x6au, 0u);
    t11 = rd32(self + 8u);
    wr16(self + 0x50u, 0u);
    wr8(t11 + 0x61u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    t12 = rd32(self + 8u);
    wr8(t12 + 0x84u, 0u);
    t13 = rd32(self + 8u);
    wr8(t13 + 0x85u, 0u);
    wr8(self + 0x4au, 1u);
    g->eax = t13;
    g->edx = t12;
    t14 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1037d46cu));
    t15 = g->ecx;
    t16 = g->edx;
    wr32(self + 0x2a8u, t14);
    if (t14 == 0u)
    {
        ecx = t15;
        edx = t16;
        eax = 0u;
    }
    else
    {
        eax = t14;
        edx = t16;
        ecx = rd32(eax);
        eax = rd32(rd32(eax));
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(self + 0x2acu, eax);
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t17 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 0u);
    t18 = g->edx;
    wr32(sp0 - 0x18u, t17);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, t17);
    t20 = g->edx;
    if (t19 == 0u)
    {
        edx = t20;
        eax = 0u;
    }
    else
    {
        eax = t19;
        edx = rd32(eax);
        eax = rd32(rd32(eax) + 0x8cu);
    }
    wr32(sp0 - 0x18u, COW_IMG(0x1036ffb4u));
    wr32(self + 0x2b0u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036ffb4u));
    t22 = g->edx;
    if (t21 == 0u)
    {
        edx = t22;
        eax = 0u;
    }
    else
    {
        eax = t21;
        edx = t22;
        eax = rd32(rd32(eax) + 0x12cu);
    }
    wr32(self + 0x2b4u, eax);
    wr32(self + 0x2b8u, 0u);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10217e6e;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_10217e72;
    if (ecx == 3u) goto L_10217e72;
L_10217e6e: ;
    if (ecx == 0u) goto L_10217e8c;
L_10217e72: ;
    wr32(sp0 - 0x18u, 0x183u);
    wr32(sp0 - 0x1cu, 0x646e6977u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t23 = cow_cdecl(g, COW_IMG(0x101addc0u), 2, 0x646e6977u, 0x183u);
    t24 = g->edx;
    wr32(self + 0x2bcu, t23);
    edx = t24;
L_10217e92: ;
    wr16(self + 0x16u, 0u);
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        ebx = rd32(sp0 - 0x10u);
        esi = rd32(sp0 - 0x14u);
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        ebx = rd32(sp0 - 0x10u);
        esi = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x10u, 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t25 = cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 8u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edx = edx;
    return eax;
L_10217e8c: ;
    wr32(self + 0x2bcu, 0u);
    goto L_10217e92;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10217d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10217d20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
