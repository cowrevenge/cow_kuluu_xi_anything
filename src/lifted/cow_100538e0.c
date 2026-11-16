/* f_0x100538e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100538e0(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x1au) >> 1u & 1u)
    {
        eax = in_eax & 0xffffff00u;
        edx = in_edx;
        loc_4 = self & 0xffffffu;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_call_regs(g, COW_IMG(0x10071e90u), in_eax & 0xffffff00u, self, g->edx, 1, 0);
        t2 = g->edx;
        if (rd32(self + 0xacu) == 0u)
        {
            eax = t1;
            edx = t2;
            goto L_1005391d;
        }
        eax = t1;
        ecx = rd32(self + 0xacu);
L_1005390c: ;
        g->eax = eax;
        g->edx = rd32(ecx);
        t3 = rd32(ecx);
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, rd32(t3 + 0x18u), ecx, 1, 1u);
        t5 = g->edx;
        if (rd32(self + 0xacu) != 0u)
        {
            eax = t4;
            ecx = rd32(self + 0xacu);
            goto L_1005390c;
        }
        eax = t4;
        edx = t5;
L_1005391d: ;
        if (rd8(self + 0x1au) >> 2u & 1u)
        {
            if (rd32(self + 0xf8u) != 0u)
            {
                eax = rd32(self + 0xf8u);
                wr32(eax + 0x164u, 0u);
                wr32(self + 0xf8u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x10071ec0u), self, 0);
                t6 = g->edx;
                edx = t6;
            }
        }
        if (arg1 == 0u)
        {
            esi = 0u;
        }
        else
        {
            esi = rd32(arg1);
        }
        if (rd32(self + 0xb0u) == 0u)
        {
            eax = arg1;
            loc_4 = self & 0xffffffu;
        }
        else
        {
            eax = arg1;
            ebp = in_ebp;
            loc_4 = self & 0xffffffu;
L_1005395c: ;
            if (esi != 0u)
            {
                g->edx = edx;
                t7 = rd16(esi + 0xd6u);
                d8 = fr(g, (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u) + (double)rdf32(COW_IMG(0x1032961cu)));
                fpush(g, d8);
                g->esp = sp0 - 0x14u;
                t9 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t10 = g->edx;
                wr16(esi + 0xd6u, (uint16_t)t9);
                wr32(esi + 0xccu, 0u);
                t11 = cow_call_regs(g, COW_IMG(0x10053370u), t9, esi, t10, 1, 0);
                t12 = rd32(self + 0xb0u);
                g->edx = t12;
                t13 = cow_call_regs(g, COW_IMG(0x100496f0u), t11, esi, g->edx, 0, 1, t12);
                t14 = g->edx;
                t15 = cow_call_regs(g, COW_IMG(0x10053890u), t13, esi, t14, 0, 1, 0u);
                t16 = g->edx;
                wr16(esi + 0xd6u, (uint16_t)t7);
                eax = t15;
                edx = t16;
                ebp = (ebp & 0xffff0000u) | t7;
                loc_4 = (loc_4 & 0xffffffu) | 0x1000000u;
            }
            if (rd32(self + 0xb0u) != 0u)
            {
                ecx = rd32(self + 0xb0u);
                g->eax = rd32(ecx);
                g->edx = edx;
                t17 = rd32(ecx);
                g->esp = sp0 - 0x14u;
                t18 = cow_thiscall(g, rd32(t17 + 0x18u), ecx, 1, 1u);
                t19 = g->edx;
                eax = t18;
                edx = t19;
            }
            if (rd32(self + 0xb0u) != 0u) goto L_1005395c;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t20 = cow_thiscall(g, COW_IMG(0x10071ec0u), self, 0);
        t21 = g->edx;
        eax = (t20 & 0xffffff00u) | loc_4 >> 0x18u;
        edx = t21;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100538e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100538e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
