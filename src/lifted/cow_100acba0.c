/* f_0x100acba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100acba0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(self + 0x86cu, arg1);
    wr32(sp0 - 0x18u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x1017ad70u), rd32(COW_IMG(0x10631f24u)), 1, arg1);
    t2 = g->edx;
    wr32(self + 0x870u, t1);
    wr32(sp0 - 0x18u, 1u);
    t3 = rd32(self + 0x86cu);
    wr32(sp0 - 0x1cu, t3);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x1017ac40u), rd32(COW_IMG(0x10631f24u)), 2, t3, 1u);
    t5 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1017ad90u), rd32(COW_IMG(0x10631f24u)), 1, arg1);
    t7 = g->edx;
    wr32(self + 0x664u, t6);
    if (t6 == 0u)
    {
        edx = t7;
        goto L_100acc88;
    }
    eax = t6;
    edx = t7;
    wr32(self + 0x668u, self + 0x66cu);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t8 = cow_thiscall(g, COW_IMG(0x100ad2e0u), self, 0);
    if ((int32_t)t8 > 0)
    {
        eax = t8;
        esi = 0u;
        edi = 0u;
L_100acc0c: ;
        t9 = edi + rd32(self + 0x668u);
        wr32(sp0 - 0x18u, t9);
        wr32(sp0 - 0x1cu, esi);
        g->ebx = self;
        g->eax = eax;
        g->edx = t9;
        g->esp = sp0 - 0x14u;
        t10 = cow_thiscall(g, COW_IMG(0x100ad300u), self, 2, esi, t9);
        t11 = g->edx;
        t12 = cow_thiscall(g, COW_IMG(0x100ad2e0u), self, 0);
        if ((int32_t)(esi + 1u) < (int32_t)t12)
        {
            eax = t12;
            esi = esi + 1u;
            edi = edi + 0x40u;
            goto L_100acc0c;
        }
    }
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_100acce8;
    }
    eax = rd32(COW_IMG(0x1065cb04u));
    ecx = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 + 4u, 1u, arg1);
    t13 = g->edx;
    if (arg1 == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_100acce8;
    }
    edx = t13;
    wr32(sp0 - 0x18u, 0x6e65706fu);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->esp = sp0 - 0x14u;
    t14 = cow_call_regs(g, COW_IMG(0x100724c0u), sp0 - 4u, rd32(arg1), g->edx, 0, 3, sp0 - 4u, 7u, 0x6e65706fu);
    wr32(sp0 - 0x18u, 0x736f6c63u);
    t15 = rd32(t14);
    wr32(self + 0x884u, t15);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    t16 = cow_call_regs(g, COW_IMG(0x100724c0u), t15, rd32(arg1), g->edx, 0, 3, sp0 + 4u, 7u, 0x736f6c63u);
    eax = t16;
L_100acce0: ;
    wr32(self + 0x888u, rd32(eax));
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_100acce8: ;
    if (rd32(self + 0x870u) != 0u)
    {
        eax = rd32(self + 0x870u);
    }
    else
    {
        if (rd32(self + 0x70u) == 0u)
        {
            eax = rd32(self + 0x70u);
        }
        else
        {
            eax = rd32(self + 0x70u);
            if (rd16(eax + 0x210u) != 0u)
            {
                esi = eax + 0x214u;
            }
            else
            {
                esi = eax + 0x7cu;
            }
            edi = COW_IMG(0x1035be34u);
            ecx = 0xbu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                wr32(self + 0x874u, 1u);
            }
        }
    }
    g->ebx = loc_8;
    g->esi = loc_10;
    g->edi = loc_14;
    g->ebp = loc_c;
    return eax;
L_100acc88: ;
    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu) == 0u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_100acce8;
    }
    eax = rd32(COW_IMG(0x1065cb04u));
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t17 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(eax + 0x1acu), 3, sp0 + 4u, 1u, arg1);
    if (arg1 == 0u)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_100acce8;
    }
    eax = t17;
    wr32(sp0 - 0x18u, 0x74737665u);
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = eax;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    t18 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 - 4u, 7u, 0x74737665u);
    t19 = g->edx;
    wr32(sp0 - 0x18u, 0x64657665u);
    wr32(self + 0x884u, rd32(t18));
    wr32(sp0 - 0x1cu, 7u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    t20 = cow_thiscall(g, COW_IMG(0x10072290u), rd32(arg1), 3, sp0 + 4u, 7u, 0x64657665u);
    eax = t20;
    goto L_100acce0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100acba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100acba0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
