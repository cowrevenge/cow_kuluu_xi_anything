/* f_0x101ec920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101ec920(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_30;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x38u, in_ebp);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x38u;
    t2 = cow_thiscall(g, rd32(t1), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x100eb1b0u), 1, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(self + 6u, (uint16_t)t5);
    if ((int16_t)t5 > 0)
    {
        ecx = t6;
        edx = t7;
        goto L_101ec954;
    }
    eax = t5;
    edx = t7;
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x38u;
    t8 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101ec954: ;
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        wr32(sp0 - 0x3cu, eax);
        g->esp = sp0 - 0x38u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t10;
        edx = t11;
    }
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        edi = in_edi;
        loc_38 = in_ebp;
        loc_3c = in_ebx;
        loc_40 = in_esi;
        loc_44 = in_edi;
    }
    else
    {
        t12 = (uint32_t)(int16_t)rd16(self + 6u) * 0x54u;
        wr32(sp0 - 0x48u, t12);
        g->eax = (uint32_t)(int16_t)rd16(self + 6u) * 8u - (uint32_t)(int16_t)rd16(self + 6u);
        t13 = rd16(self + 6u);
        g->esp = sp0 - 0x3cu;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t12, edx, 1, 3, t12, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            eax = t14;
            ecx = t15;
            edx = t16;
            ebx = 0u;
            edi = in_edi;
        }
        else
        {
            ecx = t15;
            edx = t16;
            ebx = t14;
            esi = (uint32_t)(int16_t)t13;
            if ((int32_t)(esi - 1u) < 0)
            {
                eax = esi - 1u;
                edi = ebx;
            }
            else
            {
                eax = esi - 1u;
                edi = ebx;
                esi = eax + 1u;
L_101ec9a3: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x44u;
                t17 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
                t18 = g->ecx;
                t19 = g->edx;
                if (esi != 1u)
                {
                    eax = t17;
                    edx = t19;
                    esi = esi - 1u;
                    edi = edi + 0x54u;
                    goto L_101ec9a3;
                }
                eax = t17;
                ecx = t18;
                edx = t19;
                edi = edi + 0x54u;
            }
        }
        wr32(self + 8u, ebx);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
    }
    t20 = rd16(self + 6u);
    wr16(self + 4u, 0u);
    wr32(sp0 - 0x30u, 0u);
    if ((int16_t)t20 <= 0)
    {
        esi = 0u;
        goto L_101ecae5;
    }
    esi = 0u;
    loc_30 = 0u;
L_101ec9cb: ;
    wr32(sp0 - 0x48u, sp0 - 0x34u);
    wr32(sp0 - 0x4cu, esi);
    wr32(sp0 - 0x50u, 0u);
    g->eax = eax;
    g->edx = sp0 - 0x34u;
    g->esp = sp0 - 0x44u;
    t21 = cow_cdecl(g, COW_IMG(0x100eb160u), 3, 0u, esi, sp0 - 0x34u);
    t22 = g->edx;
    if (t21 != 0u)
    {
        eax = t21;
        edx = t22;
    }
    else
    {
        wr32(sp0 - 0x48u, 0x80808080u);
        t23 = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
        t24 = rd16(rd32(sp0 - 0x34u));
        wr32(sp0 - 0x4cu, t24);
        wr32(sp0 - 0x50u, 0x15u);
        wr32(sp0 - 0x54u, 0u);
        g->eax = rd32(sp0 - 0x34u);
        t25 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x44u;
        t26 = cow_fastcall(g, COW_IMG(0x101f4b20u), t23, t24, 4, 0u, 0x15u, t24, 0x80808080u);
        t27 = g->edx;
        t28 = (t27 & 0xffff0000u) | rd16(rd32(sp0 - 0x34u));
        wr32(sp0 - 0x48u, t28);
        wr32(sp0 - 0x4cu, 0u);
        g->esi = esi;
        t29 = cow_cdecl(g, COW_IMG(0x101cba50u), 2, 0u, t28);
        t30 = (-((uint8_t)t29 != 0u) & 0xffdfdfe0u) - 0x7f7f7f80u;
        wr32(sp0 - 0x48u, t30);
        t31 = (rd32(rd32(sp0 - 0x34u) + 4u) & 0x7fffffffu) + 1u;
        wr32(sp0 - 0x4cu, t31);
        wr32(sp0 - 0x50u, 0xau);
        wr32(sp0 - 0x54u, 2u);
        t32 = rd32(rd32(sp0 - 0x34u) + 4u);
        cow_fastcall(g, COW_IMG(0x101f4b20u), t23, t31, 4, 2u, 0xau, t31, t30);
        t33 = rd32(sp0 - 0x34u);
        wr32(t23 + 0x48u, t33);
        t34 = rd16(rd32(sp0 - 0x34u));
        wr32(sp0 - 0x48u, t34);
        g->eax = t33;
        g->edx = rd32(sp0 - 0x34u);
        t35 = rd32(COW_IMG(0x10621808u));
        t36 = rd32(sp0 - 0x34u);
        t37 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t35, 1, t34);
        t38 = g->ecx;
        t39 = g->edx;
        if (t37 == 0u)
        {
            eax = t37;
            edx = t39;
            edi = t23;
        }
        else
        {
            ecx = t38;
            ebx = t37;
            esi = t32 & 0x7fffffffu;
            edi = t23;
            wr32(sp0 - 0x48u, ebx);
            t40 = rd32(self);
            wr16(sp0 - 0x2cu, rd16(rd32(sp0 - 0x34u)));
            wr32(sp0 - 0x4cu, sp0 - 0x2cu);
            g->eax = sp0 - 0x2cu;
            g->edx = t40;
            g->esp = sp0 - 0x44u;
            t41 = cow_thiscall(g, rd32(t40 + 0x20u), self, 2, sp0 - 0x2cu, ebx);
            t42 = g->ecx;
            t43 = g->edx;
            if (rd8(self + 0x10u) == 0u)
            {
                eax = t41;
                ecx = (t42 & 0xffffff00u) | rd8(self + 0x10u);
                edx = t43;
            }
            else
            {
                eax = t41;
                edx = t43;
                if (rd8(self + 0x11u) != rd16(self + 4u))
                {
                    ecx = rd8(self + 0x11u);
                }
                else
                {
                    ecx = rd8(self + 0x11u);
                    eax = 0x80804020u;
                }
            }
            if ((int32_t)esi > (int32_t)arg2) goto L_101ecab4;
            if (rd8(rd32(sp0 - 0x34u) + 2u) != 0u)
            {
                edx = rd32(sp0 - 0x34u);
                goto L_101ecab9;
            }
            edx = rd32(sp0 - 0x34u);
L_101ecab4: ;
            eax = 0x80404040u;
L_101ecab9: ;
            wr32(sp0 - 0x48u, eax);
            t44 = rd32(ebx + 0x14c8u);
            wr32(sp0 - 0x4cu, t44);
            wr32(sp0 - 0x50u, 1u);
            wr32(sp0 - 0x54u, 1u);
            g->eax = t44;
            g->esp = sp0 - 0x44u;
            t45 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 1u, t44, eax);
            t46 = g->edx;
            eax = t45;
            edx = t46;
        }
        wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
        esi = rd32(sp0 - 0x30u);
    }
    wr32(sp0 - 0x30u, esi + 1u);
    if ((int32_t)(esi + 1u) < (int16_t)rd16(self + 6u))
    {
        ecx = (uint32_t)(int16_t)rd16(self + 6u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_30 = esi + 1u;
        esi = esi + 1u;
        goto L_101ec9cb;
    }
    esi = esi + 1u;
    loc_38 = rd32(sp0 - 0x38u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_40 = rd32(sp0 - 0x40u);
    loc_44 = rd32(sp0 - 0x44u);
L_101ecae5: ;
    wr32(sp0 - 0x48u, 1u);
    t47 = (edx & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x4cu, t47);
    t48 = rd32(self + 8u);
    wr32(sp0 - 0x50u, t48);
    g->esi = esi;
    g->edi = edi;
    g->eax = t48;
    g->esp = sp0 - 0x44u;
    t49 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t47, 3, t48, t47, 1u);
    t50 = g->edx;
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = rd32(sp0 - 0x40u);
    g->edi = rd32(sp0 - 0x44u);
    g->ebp = rd32(sp0 - 0x38u);
    g->edx = t50;
    return t49;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec920(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
