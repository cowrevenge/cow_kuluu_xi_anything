/* f_0x101dc270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101dc270(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;

    g->eax = (in_eax & 0xffff0000u) | rd16(self + 0x1au);
    t1 = rd16(self + 0x1au);
    t2 = rd32(sp0 - 8u);
    g->esp = sp0 - 0x10u;
    t3 = cow_fastcall(g, COW_IMG(0x101dc1d0u), self, in_edx, 0);
    t4 = g->edx;
    t5 = rd8(self + 0x72u);
    wr16(self + 0x52u, 0u);
    if ((uint8_t)t5 != 0u)
    {
        eax = (t3 & 0xffffff00u) | t5;
        edx = t4;
        loc_8 = (t2 & 0xffff0000u) | t1;
    }
    else
    {
        eax = (t3 & 0xffffff00u) | t5;
        loc_8 = (t2 & 0xffff0000u) | t1;
        g->eax = eax;
        g->edx = rd32(rd32(self + 0x58u));
        t6 = rd32(self + 0x58u);
        t7 = rd32(rd32(self + 0x58u));
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, rd32(t7 + 0x54u), t6, 0);
        t9 = g->ecx;
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x100fd6e0u), 1, t8);
        t12 = g->edx;
        wr8(self + 0x72u, (uint8_t)t11);
        eax = t11;
        edx = t12;
    }
    if (rd8(self + 0x72u) == 1u)
    {
        t13 = rd32(self + 0x5cu);
        t14 = rd8(rd32(self + 0x5cu) + rd32(rd32(self + 0x5cu) + 0xcu) + 0x18u);
        wr16(self + 0x52u, (uint16_t)t14);
        eax = t13;
        edx = (edx & 0xffff0000u) | t14;
    }
    if (rd16(self + 0x52u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x52u);
        goto L_101dc2d6;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x52u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    return;
L_101dc2d6: ;
    if (rd32(self + 0x54u) != 0u)
    {
        esi = in_esi;
    }
    else
    {
        ecx = rd32(self + 0x54u);
        t15 = (uint32_t)(int16_t)eax * 0x54u;
        g->esp = sp0 - 0x14u;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t15, in_esi, in_ebp);
        t17 = g->edx;
        if (t16 == 0u)
        {
            edx = t17;
            esi = (uint32_t)(int16_t)eax;
            ebp = 0u;
        }
        else
        {
            edx = t17;
            ebp = t16;
            esi = (uint32_t)(int16_t)eax;
            if ((int32_t)(esi - 1u) >= 0)
            {
                eax = esi - 1u;
                ebx = ebp;
                esi = eax + 1u;
L_101dc30d: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t18 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t19 = g->edx;
                if (esi != 1u)
                {
                    eax = t18;
                    edx = t19;
                    ebx = ebx + 0x54u;
                    esi = esi - 1u;
                    goto L_101dc30d;
                }
                edx = t19;
                esi = esi - 1u;
            }
        }
        wr32(self + 0x54u, ebp);
    }
    t20 = rd16(self + 0x52u);
    wr16(self + 0x50u, 0u);
    if ((int16_t)t20 <= 0) goto L_101dc442;
    eax = 0u;
    loc_c = 0u;
L_101dc335: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t21 = cow_thiscall(g, COW_IMG(0x1021cb80u), rd32(self + 0x5cu), 1, eax);
    t22 = g->edx;
    t23 = rd32(self + 0x54u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
    if (t21 == 0u)
    {
        edx = (t22 & 0xffff0000u) | rd16(self + 0x50u);
        esi = t21;
    }
    else
    {
        eax = rd32(self + 0x54u);
        edx = (t22 & 0xffff0000u) | rd16(self + 0x50u);
        esi = t21;
        loc_4 = t23;
        if (rd8(esi + 2u) != 0u)
        {
            if ((int32_t)((uint32_t)(int16_t)loc_8 - 0xau) > (int32_t)loc_c)
            {
                eax = (uint32_t)(int16_t)loc_8;
                goto L_101dc390;
            }
            eax = (uint32_t)(int16_t)loc_8;
            if ((int32_t)loc_c <= (int32_t)(eax + 0x14u)) goto L_101dc39d;
            eax = eax + 0x14u;
L_101dc390: ;
            if ((int16_t)edx < (int16_t)loc_8)
            {
                ebx = 0x80404040u;
                ebp = 0u;
                goto L_101dc3c4;
            }
            if ((int16_t)edx >= 10)
            {
                ebx = 0x80404040u;
                ebp = 0u;
                goto L_101dc3c4;
            }
L_101dc39d: ;
            g->edx = rd16(esi);
            t24 = rd16(esi);
            g->esp = sp0 - 0x1cu;
            t25 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t24);
            t26 = g->edx;
            if (t25 == 0u)
            {
                eax = t25;
                edx = t26;
                ebx = 0x80404040u;
                ebp = t25;
                goto L_101dc3c4;
            }
            edx = t26;
            ebp = t25;
            g->eax = rd32(rd32(self + 0x58u));
            g->edx = edx;
            t27 = rd32(rd32(self + 0x58u));
            g->esp = sp0 - 0x1cu;
            t28 = cow_thiscall(g, rd32(t27 + 0x30u), rd32(self + 0x58u), 2, esi, ebp);
            t29 = g->edx;
            if (t28 == 0u)
            {
                edx = t29;
                goto L_101dc42d;
            }
            eax = t28;
            edx = t29;
            ebx = t28;
L_101dc3c4: ;
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t30 = cow_fastcall(g, COW_IMG(0x101f4b20u), loc_4, edx, 4, 0u, 0x16u, esi, 0x80808080u);
            t31 = g->edx;
            t32 = cow_fastcall(g, COW_IMG(0x101f4b20u), loc_4, t31, 4, 1u, 0x19u, rd16(esi), ebx);
            t33 = g->edx;
            if (ebp == 0u)
            {
                edx = t33;
                ebx = loc_4;
            }
            else
            {
                eax = t32;
                edx = t33;
                ebx = loc_4;
                if (rd32(ebp + 0x14c0u) != 0u)
                {
                    ebp = rd32(ebp + 0x14c0u);
                    if (rd16(ebp) > 1u)
                    {
                        eax = (eax & 0xffffff00u) | rd16(ebp) > 1u;
                        t34 = rd32(esi + 4u);
                        g->esp = sp0 - 0x1cu;
                        cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, t34, 4, 2u, 7u, t34, 0x80808080u);
                        t35 = g->edx;
                        edx = t35;
                    }
                }
            }
            wr32(ebx + 0x48u, esi);
            g->eax = rd32(rd32(self + 0x58u));
            g->edx = edx;
            t36 = rd32(rd32(self + 0x58u));
            g->esp = sp0 - 0x1cu;
            t37 = cow_thiscall(g, rd32(t36 + 8u), rd32(self + 0x58u), 0);
            t38 = g->edx;
            wr32(ebx + 0x4cu, t37);
            wr16(self + 0x50u, (uint16_t)(rd16(self + 0x50u) + 1u));
            edx = t38;
        }
    }
L_101dc42d: ;
    if ((int32_t)(loc_c + 1u) < (int16_t)rd16(self + 0x52u))
    {
        eax = loc_c + 1u;
        loc_c = loc_c + 1u;
        goto L_101dc335;
    }
L_101dc442: ;
    t39 = (edx & 0xffff0000u) | rd16(self + 0x50u);
    t40 = rd32(self + 0x54u);
    g->esi = esi;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t40, t39, 1u);
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dc270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101dc270(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
