/* f_0x100c3a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100c3a60(Guest* g)
{
    double d10;
    double d11;
    double d16;
    double d18;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, arg1);
    wr32(self + 0x5f0u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1017ad90u), rd32(COW_IMG(0x10631f24u)), 1, arg1);
    t2 = g->edx;
    wr32(self + 0x5c4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        edx = t2;
        t3 = rd32(self + 0x5f0u);
        wr32(sp0 - 0x18u, t3);
        wr32(sp0 - 0x1cu, self + 0x5d0u);
        g->eax = t3;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_thiscall(g, COW_IMG(0x1017acd0u), rd32(COW_IMG(0x10631f24u)), 2, self + 0x5d0u, t3);
        t5 = g->edx;
        d6 = (double)rdf32(self + 0x5d0u);
        d7 = (double)rdf32(self + 0x5d4u);
        if (!(d6 < d7))
        {
            eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
            t9 = rd32(self + 0x5d4u);
            wr32(sp0 - 4u, t9);
            edx = t9;
            loc_4 = t9;
        }
        else
        {
            eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 0u);
            edx = t5;
            t8 = rd32(self + 0x5d0u);
            wr32(sp0 - 4u, t8);
            loc_4 = t8;
        }
        d10 = (double)rdf32(self + 0x5d0u);
        d11 = (double)rdf32(self + 0x5d4u);
        if (!(d10 < d11))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d10, d11, 0u);
            t13 = rd32(self + 0x5d0u);
            wr32(sp0 - 8u, t13);
            loc_8 = t13;
        }
        else
        {
            t12 = rd32(self + 0x5d4u);
            wr32(sp0 - 8u, t12);
            eax = t12;
            loc_8 = t12;
        }
        wr32(sp0 - 0x18u, in_ebp);
        wr32(sp0 - 0x1cu, loc_8);
        wr32(sp0 - 0x20u, loc_4);
        wr32(sp0 - 0x24u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t14 = cow_thiscall(g, COW_IMG(0x101710d0u), rd32(self + 0x5c4u), 3, 0u, loc_4, loc_8);
        t15 = g->edx;
        wr32(sp0 - 0x1cu, loc_8);
        wr32(sp0 - 0x20u, loc_4);
        wr32(sp0 - 0x24u, 1u);
        cow_thiscall(g, COW_IMG(0x101710d0u), rd32(self + 0x5c4u), 3, 1u, loc_4, loc_8);
        d16 = (double)(float)(double)rdf32(self + 0x5d0u);
        wrf32(sp0 - 4u, (float)d16);
        t17 = rd32(self + 0x5f0u);
        d18 = (double)rdf32(self + 0x5d0u);
        wr32(self + 0x5f8u, 0u);
        wrf32(self + 0x5ecu, (float)d18);
        wr32(sp0 - 0x1cu, cow_f2bits(d16));
        wr32(sp0 - 0x20u, t17);
        g->edx = cow_f2bits(d16);
        cow_thiscall(g, COW_IMG(0x1017ad10u), rd32(COW_IMG(0x10631f24u)), 2, t17, cow_f2bits(d16));
        t19 = g->edx;
        wr32(sp0 - 0x1cu, 4u);
        g->edx = t19;
        g->esp = sp0 - 0x1cu;
        t20 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(sp0 - 0x20u, t20 << 6u);
        g->esp = sp0 - 0x18u;
        t23 = cow_call_regs(g, COW_IMG(0x10028640u), t20 << 6u, t21, t22, 1, 2, t20 << 6u, 4u);
        t24 = g->edx;
        wr32(self + 0x5c8u, t23);
        if (t23 == 0u)
        {
            eax = t23;
        }
        else
        {
            edx = t24;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t25 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
            t26 = g->edx;
            if ((int32_t)t25 <= 0) goto L_100c3b86;
            eax = t25;
            edx = t26;
            ebx = 0u;
            edi = 0u;
L_100c3b66: ;
            t27 = ebx + rd32(self + 0x5c8u);
            wr32(sp0 - 0x18u, t27);
            wr32(sp0 - 0x1cu, edi);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x100c3c00u), self, 2, edi, t27);
            t28 = g->edx;
            g->edx = t28;
            t29 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
            t30 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)t29)
            {
                eax = t29;
                edx = t30;
                ebx = ebx + 0x40u;
                edi = edi + 1u;
                goto L_100c3b66;
            }
L_100c3b86: ;
            wr32(sp0 - 0x18u, arg1);
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, sp0 + 4u);
            g->esp = sp0 - 0x14u;
            t31 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu), 3, sp0 + 4u, 1u, arg1);
            wr32(self + 0x5f4u, arg1);
            eax = t31;
        }
    }
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c3a60(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
