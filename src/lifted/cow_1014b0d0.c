/* f_0x1014b0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014b0d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
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
    const uint32_t in_ebp = g->ebp;

    if (rd8(sp0 + 4u) != 0u)
    {
        eax = rd8(sp0 + 4u) | 0x80404000u;
        g->esi = 0u;
        g->edi = self;
        g->esp = sp0 - 0x24u;
        cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        t3 = rd32(self + 0x50u);
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
            g->esp = sp0 - 0x24u;
            t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t5 = g->ecx;
            t6 = g->edx;
            wr32(self + 0x50u, 0u);
            eax = t4;
            ecx = t5;
            edx = t6;
        }
        if (rd32(self + 0x50u) != 0u)
        {
            ebp = in_ebp;
            esi = 0u;
        }
        else
        {
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x5400u, in_edi, in_esi);
            t8 = g->edx;
            if (t7 == 0u)
            {
                edx = t8;
                eax = 0u;
                ebp = in_ebp;
                esi = 0u;
            }
            else
            {
                eax = t7;
                edx = t8;
                ebx = t7;
                ebp = 0x100u;
                esi = ebx;
L_1014b13e: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x24u;
                t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
                t10 = g->edx;
                if (ebp != 1u)
                {
                    eax = t9;
                    edx = t10;
                    ebp = ebp - 1u;
                    esi = esi + 0x54u;
                    goto L_1014b13e;
                }
                edx = t10;
                ebp = ebp - 1u;
                esi = esi + 0x54u;
                eax = ebx;
            }
            wr32(self + 0x50u, eax);
        }
        t11 = rd32(sp0 + 4u);
        wr16(self + 0x5cu, 0u);
        g->eax = t11;
        g->edx = edx;
        t12 = rd32(COW_IMG(0x10578428u));
        g->esp = sp0 - 0x24u;
        t13 = cow_thiscall(g, COW_IMG(0x101612a0u), t12, 1, t11);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 != 0u)
        {
            eax = t13;
            ecx = t14;
            edx = t15;
            wr32(sp0 + 4u, 0x20u);
            ebx = eax + 4u;
            loc_c = 0x80404040u;
            loc_14 = 0x80404040u;
            loc_10 = 0x80404040u;
L_1014b17d: ;
            if (rd16(ebx) != 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(ebx);
                g->eax = (uint16_t)eax;
                t16 = rd32(COW_IMG(0x10578428u));
                g->esp = sp0 - 0x24u;
                t17 = cow_fastcall(g, COW_IMG(0x10161290u), t16, edx, 1, (uint16_t)eax);
                t18 = g->ecx;
                t19 = g->edx;
                if (t17 == 0u)
                {
                    ecx = t18;
                    edx = t19;
                }
                else
                {
                    eax = t17;
                    ecx = t18;
                    edx = t19;
                    loc_4 = t17;
                    t20 = (ecx & 0xffff0000u) | rd16(ebx);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    t21 = cow_stdcall(g, COW_IMG(0x101612d0u), 1, t20);
                    t22 = g->edx;
                    if (t21 == 0u)
                    {
                        ecx = t21;
                        edx = t22;
                    }
                    else
                    {
                        eax = t21;
                        ecx = t21;
                        edx = t22;
                        loc_8 = t21;
                        if (rd8(self + 0x5eu) == 0u) goto L_1014b20d;
                        eax = (eax & 0xffffff00u) | rd8(self + 0x5eu);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->esp = sp0 - 0x24u;
                        t23 = cow_cdecl(g, COW_IMG(0x1014a260u), 1, ecx);
                        t24 = g->ecx;
                        if ((uint8_t)t23 == 0u) goto L_1014b20d;
                        ecx = t24;
                        g->eax = 0x80808080u;
                        g->edx = rd16(ebx);
                        t25 = rd16(ebx);
                        t26 = rd16(ecx);
                        g->esp = sp0 - 0x24u;
                        t27 = cow_stdcall(g, COW_IMG(0x1014b440u), 1, t25);
                        t28 = g->edx;
                        if ((uint8_t)t27 == 0u)
                        {
                            edx = t28;
                            ebp = ((ebp & 0xffff0000u) | t26 >> 6u) + 1u;
                            goto L_1014b2d4;
                        }
                        loc_c = 0x80808080u;
                        loc_14 = 0x802060a0u;
                        loc_10 = 0x80808080u;
L_1014b20d: ;
                        ebp = 0u;
L_1014b20f: ;
                        t31 = rd16(self + 0x5cu) * 0x54u + rd32(self + 0x50u);
                        g->esp = sp0 - 0x24u;
                        cow_fastcall(g, COW_IMG(0x101f4b20u), t31, rd32(self + 0x50u), 4, 1u, 0x35u, rd16(ebx), loc_c);
                        t32 = g->ecx;
                        t33 = (rd8(loc_8) & 0x3fu) + 1u;
                        cow_fastcall(g, COW_IMG(0x101f4b20u), t31, loc_14, 4, 2u, 0x36u, t33, loc_14);
                        t34 = rd8(loc_4 + 3u) + 1u;
                        g->eax = t34;
                        t35 = cow_fastcall(g, COW_IMG(0x101f4b20u), t31, loc_14, 4, 3u, 0x37u, t34, loc_14);
                        cow_fastcall(g, COW_IMG(0x101f4b20u), t31, loc_10, 4, 4u, 0x38u, (uint16_t)ebp, loc_10);
                        t36 = g->ecx;
                        t37 = g->edx;
                        wr32(t31 + 0x48u, rd16(ebx));
                        wr16(self + 0x5cu, (uint16_t)(rd16(self + 0x5cu) + 1u));
                        ecx = t36;
                        edx = t37;
                        ebp = (uint16_t)ebp;
                        esi = t31;
                    }
                }
            }
            t38 = rd32(sp0 + 4u) - 1u;
            t39 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t38);
            if (t39 != 1u)
            {
                eax = t38;
                ebx = ebx + 2u;
                goto L_1014b17d;
            }
            eax = t38;
            t40 = (ecx & 0xffff0000u) | rd16(self + 0x5cu);
            t41 = rd32(self + 0x50u);
            g->esi = esi;
            g->edi = self;
            g->esp = sp0 - 0x24u;
            cow_fastcall(g, COW_IMG(0x101f7020u), self, t41, 3, t41, t40, 1u);
            t42 = g->edx;
            t43 = rd16(self + 0x60u);
            cow_call_regs(g, COW_IMG(0x101f7080u), t43, self, t42, 0, 2, t43, 0u);
        }
    }
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1014b2d4: ;
    g->eax = rd16(ebx);
    t29 = rd16(ebx);
    g->esp = sp0 - 0x24u;
    t30 = cow_stdcall(g, COW_IMG(0x1014b490u), 1, t29);
    if ((uint8_t)t30 != 0u)
    {
        loc_c = 0x80808080u;
        loc_14 = 0x80808080u;
        loc_10 = 0x80808080u;
    }
    else
    {
        loc_c = 0x80808080u;
        loc_14 = 0x80808080u;
        loc_10 = 0x80404040u;
    }
    goto L_1014b20f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014b0d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
