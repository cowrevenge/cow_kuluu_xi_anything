/* f_0x1021eb10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1021eb10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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

    t1 = rd8(self + 0x34u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    if ((uint8_t)t1 == 0u)
    {
        eax = 0u;
        goto L_1021ed23;
    }
    if (rd32(COW_IMG(0x10662dccu)) == 0u)
    {
        eax = 0u;
        goto L_1021ed23;
    }
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        edx = in_edx;
        goto L_1021ec14;
    }
    edx = in_edx;
    ebx = in_ebx & 0xffffff00u;
    ebp = rd32(self + 0x14u);
    edi = 0u;
L_1021eb4a: ;
    if (rd8(edi + rd32(self + 8u)) != 0u)
    {
        if (rd8(ebp + rd32(self + 0x2cu) - 1u) == 1u)
        {
            ebx = (ebx & 0xffffff00u) | 1u;
        }
        else
        {
            eax = rd32(self + 0x2cu);
            ecx = rd8(ebp + rd32(self + 0x2cu) - 1u) - 1u;
            if (ecx == 0xfeu)
            {
                if (rd8(edi + rd32(self + 0x18u)) != 0u)
                {
                    ecx = rd32(self + 0x18u);
                }
                else
                {
                    ecx = rd32(self + 0x18u);
                    if ((int32_t)eax > 512)
                    {
                        eax = 0x200u;
                    }
                    g->ecx = ecx;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x1021e870u), 2, ebp, eax - 4u);
                    t2 = g->ecx;
                    t3 = rd32(self + 0x18u);
                    wr8(edi + t3, 1u);
                    ecx = t2;
                    edx = t3;
                }
                if ((int32_t)rd32(self + 0x30u) < 0) goto L_1021ebed;
                if (rd32(edi * 4u + rd32(self + 4u)) != 0u) goto L_1021ebed;
                eax = rd32(self + 4u);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x7cu);
                if (t4 == 0u) goto L_1021ebe5;
                eax = t4;
                t5 = rd32(ebp + rd32(self + 0x30u));
                t6 = ebp + rd32(self + 0x30u) + 4u;
                t7 = rd32(edi * 4u + rd32(self + 0x10u));
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t8 = cow_thiscall(g, COW_IMG(0x10026890u), eax, 3, t7, t6, t5);
                wr32(edi * 4u + rd32(self + 4u), t8);
                wr8(edi + rd32(self + 8u), 0xffu);
            }
        }
    }
L_1021ebf8: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x24u))
    {
        edx = rd32(self + 0x2cu);
        ebp = ebp + rd32(self + 0x2cu);
        edi = edi + 1u;
        goto L_1021eb4a;
    }
    eax = rd32(self + 0x24u);
    edx = rd32(self + 0x2cu);
    if ((uint8_t)ebx == 1u) goto L_1021ed23;
L_1021ec14: ;
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = 0u;
        goto L_1021ed23;
    }
    ebp = rd32(self + 0x24u);
    edi = rd32(self + 0x1cu);
    loc_8 = 0u;
L_1021ec26: ;
    t9 = rd32(edi * 4u + rd32(self + 0xcu));
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        eax = t9;
        loc_c = edi + 1u;
        edi = edi + 1u;
        loc_4 = t9;
    }
    else
    {
        eax = t9;
        loc_4 = t9;
        edi = 0u;
        loc_c = 0u;
    }
    if (eax == 0xffffffffu) goto L_1021ec7e;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, COW_IMG(0x1021ea60u), self, 1, eax);
    t11 = g->edx;
    if (t10 != 0xffffffffu)
    {
        edx = t11;
        goto L_1021ec7e;
    }
    edx = t11;
    ebx = rd32(self + 0x10u);
    edi = 0u;
L_1021ec5d: ;
    if (rd32(ebx) == 0xffffffffu) goto L_1021ec93;
    eax = rd32(ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t12 = cow_thiscall(g, COW_IMG(0x1021eae0u), self, 2, eax, ebp);
    t13 = g->edx;
    if (t12 == 0xffffffffu) goto L_1021ec93;
    edx = t13;
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        ebx = ebx + 4u;
        edi = edi + 1u;
        goto L_1021ec5d;
    }
    edi = loc_c;
L_1021ec7e: ;
    if ((int32_t)(loc_8 + 1u) < (int32_t)ebp)
    {
        loc_8 = loc_8 + 1u;
        goto L_1021ec26;
    }
    eax = loc_8 + 1u;
    g->ebx = in_ebx;
    return eax;
L_1021ebe5: ;
    wr32(edi * 4u + rd32(self + 4u), 0u);
L_1021ebed: ;
    wr8(edi + rd32(self + 8u), 0xffu);
    goto L_1021ebf8;
L_1021ec93: ;
    t14 = rd32(self + 0x14u);
    t15 = rd32(self + 0x2cu);
    wr8(edi + rd32(self + 8u), 0u);
    wr32(edi * 4u + rd32(self + 0x10u), 0xffffffffu);
    if (rd32(edi * 4u + rd32(self + 4u)) == 0u)
    {
        ebp = t14 + t15 * edi;
    }
    else
    {
        eax = rd32(self + 4u);
        ecx = rd32(edi * 4u + rd32(self + 4u));
        ebp = t14 + t15 * edi;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(edi * 4u + rd32(self + 4u), 0u);
    }
    wr32(edi * 4u + rd32(self + 4u), 0u);
    wr8(edi + rd32(self + 0x18u), 0u);
    wr8(ebp + rd32(self + 0x2cu) - 1u, 1u);
    t16 = rd32(self + 0x2cu);
    t17 = rd32(self + 0x28u);
    g->ebx = loc_4;
    g->eax = t16;
    g->esp = sp0 - 0x1cu;
    t18 = cow_thiscall(g, COW_IMG(0x101c46d0u), rd32(COW_IMG(0x10662dccu)), 4, t17, ebp, t16, t16 * loc_4);
    if (t18 != 1u)
    {
        eax = t18;
        goto L_1021ed1b;
    }
    ebx = loc_4;
    t19 = rd32(self + 8u);
    wr8(edi + t19, 1u);
    wr32(edi * 4u + rd32(self + 0x10u), ebx);
    g->ebx = in_ebx;
    return t19;
L_1021ed1b: ;
    wr8(ebp + rd32(self + 0x2cu) - 1u, 0u);
L_1021ed23: ;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021eb10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021eb10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
