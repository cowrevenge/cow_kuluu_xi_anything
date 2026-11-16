/* f_0x101fb4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fb4b0(Guest* g)
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
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;

    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x101fb330u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x100f94b0u), 0);
    t4 = g->edx;
    wr16(self + 0x52u, (uint16_t)(t3 + 1u));
    if ((uint16_t)(t3 + 1u) != 0u)
    {
        eax = t3 + 1u;
        edx = t4;
        goto L_101fb4f5;
    }
    eax = t3 + 1u;
    edx = t4;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    if (rd32(COW_IMG(0x10663888u)) == 0u) goto L_101fb6ff;
    eax = rd32(COW_IMG(0x10663888u));
    wr32(eax + 0x94u, 0u);
    wr16(eax + 0x7au, 0u);
    return;
L_101fb4f5: ;
    if (rd32(self + 0x54u) != 0u)
    {
        ecx = rd32(self + 0x54u);
        esi = in_esi;
    }
    else
    {
        ecx = rd32(self + 0x54u);
        t5 = (uint32_t)(int16_t)eax * 0x54u;
        g->esp = sp0 - 0x14u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t5, in_esi, in_ebp);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
            esi = (uint32_t)(int16_t)eax;
            ebp = 0u;
        }
        else
        {
            ecx = t7;
            edx = t8;
            ebp = t6;
            esi = (uint32_t)(int16_t)eax;
            eax = t6;
            if ((int32_t)(esi - 1u) < 0)
            {
                esi = esi - 1u;
            }
            else
            {
                ebx = ebp;
                esi = esi - 1u;
                esi = esi + 1u;
L_101fb527: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t10 = g->ecx;
                t11 = g->edx;
                if (esi != 1u)
                {
                    eax = t9;
                    edx = t11;
                    ebx = ebx + 0x54u;
                    esi = esi - 1u;
                    goto L_101fb527;
                }
                ecx = t10;
                edx = t11;
                esi = esi - 1u;
            }
        }
        wr32(self + 0x54u, ebp);
    }
    if (rd32(self + 0x58u) == 0u)
    {
        t12 = (uint32_t)(int16_t)rd16(self + 0x52u) << 3u;
        g->esp = sp0 - 0x14u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t12, edx, 1, 3, t12, in_esi, in_ebp);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(self + 0x58u, t13);
        ecx = t14;
        edx = t15;
    }
    if (rd32(self + 0x5cu) == 0u)
    {
        t16 = (uint32_t)(int16_t)rd16(self + 0x52u) << 5u;
        g->esp = sp0 - 0x14u;
        t17 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, t16, 1, 3, t16, in_esi, in_ebp);
        t18 = g->ecx;
        t19 = g->edx;
        wr32(self + 0x5cu, t17);
        ecx = t18;
        edx = t19;
    }
    t20 = rd16(self + 0x52u);
    wr16(self + 0x50u, 0u);
    if ((int16_t)t20 <= 0)
    {
        eax = 0u;
        goto L_101fb6c0;
    }
    eax = 0u;
    loc_c = 0u;
L_101fb581: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x1cu;
    t21 = cow_cdecl(g, COW_IMG(0x100f9480u), 1, eax);
    t22 = g->ecx;
    if (t21 == 0u)
    {
        ecx = t22;
    }
    else
    {
        ebp = t21;
        t23 = rd32(self + 0x54u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x54u;
        t24 = rd32(self + 0x58u) + (uint32_t)(int16_t)rd16(self + 0x50u) * 8u;
        t25 = rd32(self + 0x5cu) + (uint32_t)(int16_t)rd16(self + 0x50u) * 0x20u;
        t26 = rd32(self + 0x58u);
        wr16(t25, 0x99u);
        wr8(t25 + 5u, 0x80u);
        if ((rd8(ebp + 3u) & 7u) == 0u)
        {
            esi = t25;
            loc_8 = t23;
            loc_4 = t24;
            goto L_101fb606;
        }
        eax = rd8(ebp + 3u) & 7u;
        ecx = t24;
        edx = t26;
        esi = t25;
        loc_8 = t23;
        loc_4 = t24;
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_101fb5f3;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_101fb6ab;
        wr8(esi + 2u, 0xau);
        t27 = (edx & 0xffff0000u) | rd16(ebp);
        g->ecx = ecx;
        g->edx = t27;
        g->esp = sp0 - 0x1cu;
        t28 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t27);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
L_101fb62a: ;
        wr32(esi + 0x18u, eax);
        if (eax != 0u)
        {
            if (rd8(eax) != 0u)
            {
                t35 = (edx & 0xffff0000u) | rd16(ebp + 6u);
                t36 = (t35 & 0xffff0000u) | rd16(ebp + 4u);
                g->edx = t36;
                g->esp = sp0 - 0x1cu;
                t37 = cow_thiscall(g, COW_IMG(0x101fb440u), self, 4, esi + 6u, esi + 8u, t36, t35);
                t38 = g->ecx;
                t39 = g->edx;
                if ((uint8_t)t37 == 0u)
                {
                    ecx = t38;
                }
                else
                {
                    eax = t37;
                    ecx = t38;
                    edx = t39;
                    t40 = (eax & 0xffff0000u) | rd16(esi + 8u);
                    t41 = (ecx & 0xffff0000u) | rd16(esi + 6u);
                    g->esi = esi;
                    g->esp = sp0 - 0x1cu;
                    t42 = cow_call_regs(g, COW_IMG(0x101fb390u), t40, self, edx, 0, 2, t41, t40);
                    t43 = g->ecx;
                    t44 = g->edx;
                    if ((uint8_t)t42 == 0u)
                    {
                        ecx = t43;
                    }
                    else
                    {
                        eax = t42;
                        edx = t44;
                        g->eax = eax;
                        g->esp = sp0 - 0x1cu;
                        t45 = cow_fastcall(g, COW_IMG(0x101f4b20u), loc_8, edx, 4, 0u, 1u, 0u, 0x80808080u);
                        t46 = rd32(esi + 0x18u);
                        cow_fastcall(g, COW_IMG(0x101f4b20u), loc_8, t46, 4, 1u, 0x28u, t46, 0x80808080u);
                        t47 = rd32(ebp);
                        wr32(loc_4 + 4u, (uint16_t)t47);
                        wr32(loc_4, esi);
                        wr32(loc_8 + 0x48u, loc_4);
                        wr16(self + 0x50u, (uint16_t)(rd16(self + 0x50u) + 1u));
                        ecx = (uint16_t)t47;
                    }
                }
            }
        }
    }
L_101fb6ab: ;
    if ((int32_t)(loc_c + 1u) < (int16_t)rd16(self + 0x52u))
    {
        eax = loc_c + 1u;
        edx = (uint32_t)(int16_t)rd16(self + 0x52u);
        loc_c = loc_c + 1u;
        goto L_101fb581;
    }
    eax = loc_c + 1u;
    edx = (uint32_t)(int16_t)rd16(self + 0x52u);
L_101fb6c0: ;
    t48 = (eax & 0xffff0000u) | rd16(self + 0x50u);
    t49 = rd32(self + 0x54u);
    g->esi = esi;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, t49, t48, 1u);
    t50 = g->edx;
    t51 = cow_thiscall(g, COW_IMG(0x101fb400u), self, 0);
    t52 = g->ecx;
    if (t51 == 0u)
    {
        ecx = t52;
    }
    else
    {
        eax = t51;
        ecx = t52;
        wr8(rd32(eax) + 2u, 0xbu);
    }
    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        t53 = rd32(self + 0x5cu);
        t54 = rd16(self + 0x50u);
        wr32(eax + 0x94u, t53);
        wr16(eax + 0x7au, (uint16_t)t54);
    }
L_101fb6ff: ;
    g->esi = in_esi;
    return;
L_101fb5f3: ;
    wr8(esi + 2u, 9u);
    t31 = (eax & 0xffff0000u) | rd16(ebp);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t32 = cow_cdecl(g, COW_IMG(0x1008a8e0u), 1, t31);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    goto L_101fb62a;
L_101fb606: ;
    if ((uint16_t)rd32(ebp) == (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)))
    {
        ecx = (uint16_t)rd32(ebp);
        goto L_101fb6ab;
    }
    ecx = (uint16_t)rd32(ebp);
    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
    wr8(esi + 2u, 8u);
    wr16(esi, 0xb9u);
    eax = ebp + 8u;
    goto L_101fb62a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb4b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fb4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
