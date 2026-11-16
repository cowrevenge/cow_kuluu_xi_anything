/* f_0x1014bdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014bdb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    g->esi = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = rd32(self + 0x54u);
    wr32(self + 0x3cu, 0u);
    wr8(self + 0x44u, 0x20u);
    wr8(self + 0x45u, 0x18u);
    if (t3 == 0u)
    {
        eax = t3;
        ecx = t1;
        edx = t2;
    }
    else
    {
        eax = t3;
        ecx = t1;
        edx = t2;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(self + 0x54u, 0u);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (rd32(self + 0x54u) != 0u) goto L_1014be27;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x540u, in_ebp, in_edi);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
        goto L_1014be21;
    }
    eax = t7;
    edx = t8;
    ebp = t7;
    ebx = 0x10u;
    edi = ebp;
L_1014bdfe: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
    t10 = g->edx;
    if (ebx != 1u)
    {
        eax = t9;
        edx = t10;
        ebx = ebx - 1u;
        edi = edi + 0x54u;
        goto L_1014bdfe;
    }
    edx = t10;
    wr16(self + 0x58u, 0u);
    wr32(self + 0x54u, ebp);
    eax = ebp;
L_1014be40: ;
    if (rd32(COW_IMG(0x10578448u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578448u));
        if (rd8(self + 0x50u) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0x50u);
            g->edx = edx;
            g->esp = sp0 - 0x24u;
            t11 = cow_thiscall(g, COW_IMG(0x10161770u), ecx, 1, eax);
            t12 = g->edx;
            if (t11 != 0u)
            {
                eax = t11;
                edx = t12;
                wr16(self + 0x58u, 0u);
                ebx = in_ebx;
                ebp = 0x80404040u;
                esi = in_esi;
                loc_c = 0x10u;
                loc_14 = 0x80404040u;
                loc_18 = 0x80404040u;
                loc_1c = eax + 4u;
                eax = eax + 4u;
L_1014be92: ;
                if (rd16(eax) == 0u)
                {
                    ebx = (ebx & 0xffff0000u) | rd16(eax);
                }
                else
                {
                    ebx = (ebx & 0xffff0000u) | rd16(eax);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t13 = cow_thiscall(g, COW_IMG(0x10161760u), rd32(COW_IMG(0x10578448u)), 1, (uint16_t)ebx);
                    t14 = g->edx;
                    if (t13 == 0u)
                    {
                        edx = t14;
                        esi = (uint16_t)ebx;
                    }
                    else
                    {
                        edx = t14;
                        esi = (uint16_t)ebx;
                        loc_4 = t13;
                        loc_10 = (uint16_t)ebx;
                        g->ecx = rd32(COW_IMG(0x10578448u));
                        g->edx = edx;
                        t15 = rd32(COW_IMG(0x10578448u));
                        g->esp = sp0 - 0x2cu;
                        t16 = cow_stdcall(g, COW_IMG(0x101617a0u), 0);
                        t17 = g->ecx;
                        t18 = g->edx;
                        if (t16 == 0u)
                        {
                            edx = t18;
                        }
                        else
                        {
                            eax = t16;
                            ecx = t17;
                            edx = t18;
                            loc_8 = t16;
                            if (rd8(self + 0x5bu) == 0u) goto L_1014bf1f;
                            ecx = (ecx & 0xffffff00u) | rd8(self + 0x5bu);
                            g->edx = edx;
                            g->esp = sp0 - 0x2cu;
                            t19 = cow_cdecl(g, COW_IMG(0x1014b650u), 1, eax);
                            t20 = g->edx;
                            if ((uint8_t)t19 == 0u) goto L_1014bf1f;
                            edx = t20;
                            g->edx = edx;
                            g->esp = sp0 - 0x2cu;
                            t21 = cow_stdcall(g, COW_IMG(0x101617b0u), 1, ebx);
                            t22 = g->edx;
                            g->edx = t22;
                            t23 = cow_stdcall(g, COW_IMG(0x1014c020u), 1, esi);
                            t24 = g->edx;
                            if ((uint8_t)t23 == 0u)
                            {
                                edx = t24;
                                ebx = ((ebx & 0xffff0000u) | (uint16_t)t21) + 1u;
                                goto L_1014bff0;
                            }
                            ebp = 0x802060a0u;
                            loc_14 = 0x80808080u;
                            loc_18 = 0x80808080u;
L_1014bf1f: ;
                            ebx = 0u;
L_1014bf21: ;
                            t26 = rd16(self + 0x58u) * 0x54u + rd32(self + 0x54u);
                            g->esp = sp0 - 0x2cu;
                            cow_fastcall(g, COW_IMG(0x101f4b20u), t26, loc_1c, 4, 1u, 0x49u, rd16(loc_1c), loc_14);
                            t27 = rd8(loc_10 + loc_8 + 4u) + 1u;
                            cow_fastcall(g, COW_IMG(0x101f4b20u), t26, loc_8, 4, 2u, 0x4au, t27, ebp);
                            t28 = g->edx;
                            t29 = rd8(loc_4 + 3u) + 1u;
                            g->eax = t29;
                            t30 = cow_fastcall(g, COW_IMG(0x101f4b20u), t26, t28, 4, 3u, 0x4bu, t29, ebp);
                            cow_fastcall(g, COW_IMG(0x101f4b20u), t26, loc_18, 4, 4u, 0x4cu, (uint16_t)ebx, loc_18);
                            t31 = g->edx;
                            wr32(t26 + 0x48u, rd16(loc_1c));
                            wr16(self + 0x58u, (uint16_t)(rd16(self + 0x58u) + 1u));
                            edx = t31;
                            ebx = (uint16_t)ebx;
                            esi = t26;
                        }
                    }
                }
                if (loc_c != 1u)
                {
                    eax = loc_1c + 2u;
                    loc_c = loc_c - 1u;
                    loc_1c = loc_1c + 2u;
                    goto L_1014be92;
                }
                t32 = (edx & 0xffff0000u) | rd16(self + 0x58u);
                t33 = rd32(self + 0x54u);
                g->esi = esi;
                g->eax = t33;
                g->edx = t32;
                g->esp = sp0 - 0x2cu;
                t34 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t33, t32, 1u);
                t35 = g->edx;
                t36 = rd8(self + 0x5au);
                cow_call_regs(g, COW_IMG(0x101f7080u), t34, self, g->edx, 0, 2, t36, 0u);
            }
        }
    }
    g->esi = in_esi;
    return;
L_1014be21: ;
    wr32(self + 0x54u, 0u);
    eax = 0u;
L_1014be27: ;
    wr16(self + 0x58u, 0u);
    goto L_1014be40;
L_1014bff0: ;
    g->esp = sp0 - 0x2cu;
    t25 = cow_stdcall(g, COW_IMG(0x1014c070u), 1, loc_10);
    if ((uint8_t)t25 != 0u)
    {
        ebp = 0x80808080u;
        loc_14 = 0x80808080u;
        loc_18 = 0x80808080u;
    }
    else
    {
        ebp = 0x80808080u;
        loc_14 = 0x80808080u;
        loc_18 = 0x80404040u;
    }
    goto L_1014bf21;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014bdb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014bdb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
