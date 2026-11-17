/* f_0x101fcae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fcae0(Guest* g)
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
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
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x101f7020u), self, in_edx, 3, 0u, 0u, 1u);
    t2 = g->edx;
    cow_fastcall(g, COW_IMG(0x101fc5c0u), self, t2, 0);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd32(self + 0x60u);
    wr32(self + 0x50u, 0x202u);
    if (t5 != 0u)
    {
        ecx = t3;
        edx = t4;
        ebx = 0x202u;
    }
    else
    {
        eax = t5;
        ecx = t3;
        edx = t4;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xa8a8u, in_ebp, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
            ebx = 0x202u;
            ebp = 0u;
        }
        else
        {
            eax = t6;
            edx = t8;
            ebp = t6;
            ebx = 0x202u;
            edi = ebp;
L_101fcb1c: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t9 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t10 = g->ecx;
            t11 = g->edx;
            if (ebx != 1u)
            {
                eax = t9;
                edx = t11;
                ebx = ebx - 1u;
                edi = edi + 0x54u;
                goto L_101fcb1c;
            }
            ecx = t10;
            edx = t11;
            ebx = ebx - 1u;
        }
        wr32(self + 0x60u, ebp);
    }
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
    }
    else
    {
        t12 = rd32(self + 0x50u) << 3u;
        g->eax = t12;
        g->esp = sp0 - 4u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t12, in_edi, in_esi);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(self + 0x64u, t13);
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    t16 = rd16(self + 0x5cu);
    wr32(self + 0x54u, 0u);
    if ((uint16_t)t16 == 0xffffu) goto L_101fcb6c;
    t17 = (ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x58u) - 2u);
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101fc9d0u), self, 1, t17);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_101fc6a0: ;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t26 = cow_call_regs(g, COW_IMG(0x1020a400u), eax, g->ecx, g->edx, 1, 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint16_t)t26 != 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        edi = 0u;
        loc_4 = 0xfffffffeu;
        loc_8 = 0u;
L_101fc6c4: ;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t29 = cow_cdecl(g, COW_IMG(0x1020a3e0u), 1, edi);
        t30 = g->ecx;
        t31 = g->edx;
        if (rd16(t29) == 0u)
        {
            eax = t29;
            ecx = t30;
            edx = t31;
        }
        else
        {
            eax = t29;
            ecx = t30;
            edx = t31;
            edi = rd16(t29);
            ebx = eax;
            loc_c = 0u;
L_101fc6e4: ;
            g->ebx = ebx;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t32 = cow_call_regs(g, COW_IMG(0x101f7340u), eax, g->ecx, g->edx, 1, 3, edi, 0xfffffffeu, 1u);
            t33 = g->ecx;
            t34 = g->edx;
            if ((uint8_t)t32 == 0u)
            {
                eax = t32;
                ecx = t33;
                edx = t34;
            }
            else
            {
                eax = t32;
                ecx = t33;
                edx = t34;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, edi);
                t36 = g->ecx;
                t37 = g->edx;
                if (t35 == 0u)
                {
                    eax = t35;
                    ecx = t36;
                    edx = t37;
                }
                else
                {
                    eax = t35;
                    ecx = t36;
                    edx = t37;
                    loc_c = loc_c + 1u;
                }
            }
            if (rd16(ebx + 2u) != 0u)
            {
                edi = rd16(ebx + 2u);
                ebx = ebx + 2u;
                goto L_101fc6e4;
            }
            if (loc_c == 0u)
            {
                eax = loc_c;
            }
            else
            {
                t38 = rd32(self + 0x64u);
                t39 = rd32(self + 0x54u);
                t40 = rd32(self + 0x60u);
                wr32(t38 + t39 * 8u + 4u, 0xffffffffu);
                wr32(t38 + t39 * 8u, loc_4);
                g->eax = t38;
                g->ecx = loc_4;
                g->edx = loc_8;
                g->esp = sp0 - 0x1cu;
                t41 = cow_cdecl(g, COW_IMG(0x1020a3f0u), 1, loc_8);
                t42 = g->ecx;
                t43 = g->edx;
                g->eax = (uint8_t)t41;
                g->edx = t43;
                g->esp = sp0 - 0x20u;
                t44 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x13u, (uint8_t)t41);
                t45 = g->edx;
                t46 = t39 * 0x54u + t40;
                g->esp = sp0 - 0x18u;
                cow_fastcall(g, COW_IMG(0x101f4b20u), t46, t45, 4, 0u, 1u, t44, 0x80808080u);
                t47 = g->edx;
                g->eax = loc_c;
                t48 = cow_fastcall(g, COW_IMG(0x101f4b20u), t46, t47, 4, 1u, 9u, loc_c, 0x80808080u);
                t49 = g->ecx;
                t50 = g->edx;
                t51 = t38 + t39 * 8u;
                wr32(t46 + 0x48u, t51);
                g->ecx = t49;
                t52 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
                t53 = g->ecx;
                wr32(t46 + 0x4cu, t52);
                t54 = (t53 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
                t55 = rd32(self + 0x60u);
                t56 = rd32(self + 0x54u) + 1u;
                wr32(self + 0x54u, t56);
                g->esi = self;
                g->edi = t46;
                t57 = cow_fastcall(g, COW_IMG(0x101f7020u), self, t55, 3, t55, t54, 1u);
                t58 = g->ecx;
                t59 = g->edx;
                eax = t57;
                ecx = t58;
                edx = t59;
            }
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t60 = cow_call_regs(g, COW_IMG(0x1020a400u), eax, g->ecx, g->edx, 1, 0);
        t61 = g->ecx;
        t62 = g->edx;
        if ((int32_t)(loc_8 + 1u) < (int32_t)(uint16_t)t60)
        {
            eax = (uint16_t)t60;
            ecx = t61;
            edx = t62;
            edi = loc_8 + 1u;
            loc_4 = loc_4 - 1u;
            loc_8 = loc_8 + 1u;
            goto L_101fc6c4;
        }
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101fcb6c: ;
    if ((int16_t)rd16(self + 0x58u) <= 0) goto L_101fcba0;
    g->ecx = ecx;
    g->edx = edx;
    t18 = rd16(self + 0x58u);
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x1020a400u), eax, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((int16_t)t18 >= (int32_t)((uint16_t)t19 + 2u))
    {
        eax = (uint16_t)t19 + 2u;
        edx = t21;
        goto L_101fcba0;
    }
    eax = (uint16_t)t19 + 2u;
    ecx = t20;
    edx = t21;
    edi = (uint32_t)(int16_t)t18;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x1020a3e0u), 1, edi - 2u);
    t23 = g->edx;
    cow_thiscall(g, COW_IMG(0x101fc7e0u), self, 1, t22);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_101fcba0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x101fc600u), self, 0);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    goto L_101fc6a0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fcae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fcae0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
