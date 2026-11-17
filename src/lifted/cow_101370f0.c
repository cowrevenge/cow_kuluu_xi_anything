/* f_0x101370f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101370f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 0x30u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), in_eax, rd32(self + 8u), g->edx, 0, 1, self + 0x30u);
    t1 = (uint32_t)(int16_t)rd16(self + 0x6cu) + (uint32_t)(int16_t)rd16(self + 0x36u) - 0x12u;
    wr32(sp0 - 4u, t1);
    g->eax = (uint32_t)(int16_t)rd16(self + 0x6cu);
    g->edx = t1;
    t2 = rd16(self + 0x6cu);
    t3 = rd16(self + 0x30u);
    t4 = cow_thiscall(g, COW_IMG(0x10118220u), rd32(self + 8u), 0);
    t5 = g->edx;
    if (rd8(t4 + 0x44u) == 2u)
    {
        eax = (t4 & 0xffffff00u) | rd8(t4 + 0x44u);
        edx = t5;
        goto L_101371cd;
    }
    eax = (t4 & 0xffffff00u) | rd8(t4 + 0x44u);
    edx = t5;
    edi = (uint32_t)(int16_t)t3 + 4u;
    if ((uint8_t)eax == 1u) goto L_101371cd;
    t6 = rd32(self + 0x34u);
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(self + 0x30u);
    wr32(sp0 - 0x28u, t7);
    g->eax = t6;
    g->ecx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t8 = cow_cdecl(g, COW_IMG(0x10162010u), 2, t7, t6);
    t9 = g->ecx;
    t10 = g->edx;
    g->ebx = self + 0x30u;
    g->ecx = t9;
    cow_call_regs(g, COW_IMG(0x101620d0u), g->eax, g->ecx, t10, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd32(self + 0x68u);
    wr32(sp0 - 0x10u, t13);
    if (rd32(self + 0x68u) == 0u)
    {
        eax = t13;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = t13;
        loc_10 = t13;
        wr32(sp0 - 0xcu, self + 0x14u);
        ebp = 0u;
        loc_c = self + 0x14u;
        loc_4 = rd32(sp0 - 4u);
L_1013715e: ;
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->eax = eax;
        g->ecx = loc_c;
        g->esp = sp0 - 0x20u;
        t14 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, sp0 - 0x10u, 0, 1, sp0 - 0x10u);
        t15 = g->ecx;
        t16 = g->edx;
        if (rd16(t14 + 0x14au) == 0u)
        {
            ecx = t15;
            edx = t16;
            loc_4 = rd32(sp0 - 4u);
            goto L_101371b9;
        }
        eax = t14;
        edx = t16;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        t17 = rd32(sp0 - 4u);
        wr32(sp0 - 0x34u, t17);
        wr32(sp0 - 0x38u, edi);
        esi = eax + 0x104u;
        edi = sp0 - 0x74u;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x78u, eax + 4u);
        g->eax = eax + 4u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t18 = cow_bridge_indirect(g, COW_IMG(0x101620f0u), 0u, 23u, (const uint32_t[]){eax + 4u, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), edi, t17, 0u, 0u, 0u, 0u, rd32(sp0 - 0x20u)}, g->ecx, g->edx, g->eax, 92u);
        t19 = g->ecx;
        t20 = g->edx;
        t21 = rd32(sp0 - 4u) - 0x10u;
        wr32(sp0 - 4u, t21);
        if ((int32_t)(ebp + 1u) > 4)
        {
            eax = t18;
            ecx = t19;
            edx = t20;
            goto L_101371c1;
        }
        ecx = t19;
        edx = t20;
        ebp = ebp + 1u;
        edi = (uint32_t)(int16_t)rd16(self + 0x30u) + 4u;
        loc_4 = t21;
L_101371b9: ;
        if (rd32(sp0 - 0x10u) != 0u)
        {
            eax = rd32(sp0 - 0x10u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
            goto L_1013715e;
        }
        eax = rd32(sp0 - 0x10u);
    }
L_101371c1: ;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101620b0u), eax, ecx, edx);
L_101371cd: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101370f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101370f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
