/* f_0x101de860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101de860(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr16(self + 6u, 0u);
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t6 = g->ecx;
    t7 = g->edx;
    if ((t5 & 0x200000u) != 0u)
    {
        edx = t7;
        goto L_101de887;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((t8 >> 8u & 8u) == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_101de899;
    }
    edx = t10;
L_101de887: ;
    t11 = rd32(COW_IMG(0x10666e2cu));
    t12 = rd32(rd32(COW_IMG(0x10666e2cu)) + 0xcu);
    t13 = rd8(rd32(COW_IMG(0x10666e2cu)) + rd32(rd32(COW_IMG(0x10666e2cu)) + 0xcu) + 0x18u);
    wr16(self + 6u, (uint16_t)t13);
    eax = t11;
    ecx = t12;
    edx = (edx & 0xffff0000u) | t13;
L_101de899: ;
    if (rd16(self + 6u) != 0u) goto L_101de8b4;
    g->esi = self;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t14 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
    t15 = g->edx;
    g->esi = in_esi;
    g->edx = t15;
    return t14;
L_101de8b4: ;
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t16;
        edx = t17;
    }
    if (rd32(self + 8u) != 0u)
    {
        edi = in_edi;
    }
    else
    {
        t18 = (uint32_t)(int16_t)rd16(self + 6u) * 0x54u;
        g->eax = t18;
        t19 = rd16(self + 6u);
        g->esp = sp0 - 0x14u;
        t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t18, in_edi, in_ebp);
        t21 = g->edx;
        if (t20 == 0u)
        {
            edx = t21;
            edi = (uint32_t)(int16_t)t19;
            ebp = 0u;
        }
        else
        {
            eax = t20;
            edx = t21;
            ebp = t20;
            edi = (uint32_t)(int16_t)t19;
            if ((int32_t)(edi - 1u) < 0)
            {
                edi = edi - 1u;
            }
            else
            {
                ebx = ebp;
                edi = edi - 1u;
                edi = edi + 1u;
L_101de8fa: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t22 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t23 = g->edx;
                if (edi != 1u)
                {
                    eax = t22;
                    edx = t23;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_101de8fa;
                }
                edx = t23;
                edi = edi - 1u;
            }
        }
        wr32(self + 8u, ebp);
    }
    t24 = rd16(self + 6u);
    wr16(self + 4u, 0u);
    wr8(self + 0x13u, 0u);
    if ((int16_t)t24 <= 0)
    {
        eax = 0u;
        goto L_101dea85;
    }
    eax = 0u;
    loc_4 = 0u;
    loc_c = rd32(sp0 - 0xcu);
L_101de925: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t25 = cow_thiscall(g, COW_IMG(0x1021cb80u), rd32(COW_IMG(0x10666e2cu)), 1, eax);
    if (t25 == 0u)
    {
        edi = t25;
    }
    else
    {
        edi = t25;
        if (rd8(edi + 2u) != 0u)
        {
            edx = rd32(self + 8u);
            ebp = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
            g->eax = rd16(edi);
            t26 = rd16(edi);
            g->esp = sp0 - 0x1cu;
            t27 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t26);
            if (t27 != 0u)
            {
                eax = t27;
                loc_8 = t27;
                g->eax = eax;
                g->edx = rd32(self);
                t28 = rd32(self);
                g->esp = sp0 - 0x1cu;
                t29 = cow_thiscall(g, rd32(t28 + 0x20u), self, 2, edi, eax);
                t30 = g->edx;
                if (t29 != 0u)
                {
                    eax = t29;
                    edx = t30;
                    ebx = t29;
                    g->esp = sp0 - 0x1cu;
                    cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 0u, 0x16u, edi, 0x80808080u);
                    t31 = g->edx;
                    t32 = rd32(loc_8 + 0x14c8u);
                    g->eax = loc_8;
                    t33 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, t31, 4, 1u, 1u, t32, ebx);
                    g->edx = rd32(self);
                    t34 = rd32(self);
                    t35 = cow_thiscall(g, rd32(t34 + 0x14u), self, 0);
                    t36 = g->edx;
                    wr32(ebp + 0x4cu, t35);
                    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
                    {
                        eax = rd32(COW_IMG(0x10456a28u));
                        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        edx = (t36 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
                    }
                    else
                    {
                        eax = rd32(COW_IMG(0x10456a28u));
                        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        edx = (t36 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
                        if (ecx == 2u) goto L_101de9d7;
                        if (ecx != 3u) goto L_101de9dc;
L_101de9d7: ;
                        ecx = 1u;
                    }
L_101de9dc: ;
                    if (rd8(edi + 8u) != 0x19u)
                    {
                        eax = (eax & 0xffffff00u) | ecx == 0u;
                        loc_c = (loc_c & 0xffffffu) | (ecx == 0u) << 0x18u;
                        goto L_101dea03;
                    }
                    loc_c = (loc_c & 0xffffffu) | (ecx == 0u) << 0x18u;
                    t37 = rd32(edi + 0xcu) + 1u;
                    g->eax = t37;
                    g->esp = sp0 - 0x1cu;
                    t38 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 2u, 0xau, t37, ebx);
                    t39 = g->edx;
                    wr8(self + 0x13u, (uint8_t)(rd8(self + 0x13u) + 1u));
                    eax = t38;
                    edx = t39;
L_101dea34: ;
                    if (loc_c >> 0x18u != 0u) goto L_101dea69;
L_101dea3c: ;
                    if (rd32(loc_8 + 0x14c0u) != 0u)
                    {
                        eax = rd32(loc_8 + 0x14c0u);
                        if (rd16(eax) > 1u)
                        {
                            eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
                            t43 = rd32(edi + 4u);
                            g->esp = sp0 - 0x1cu;
                            cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 3u, 7u, t43, 0x80808080u);
                        }
                    }
L_101dea69: ;
                    wr32(ebp + 0x48u, edi);
                    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
                }
            }
        }
    }
    if ((int32_t)(loc_4 + 1u) < (int16_t)rd16(self + 6u))
    {
        eax = loc_4 + 1u;
        edx = (uint32_t)(int16_t)rd16(self + 6u);
        loc_4 = loc_4 + 1u;
        goto L_101de925;
    }
    eax = loc_4 + 1u;
    edx = (uint32_t)(int16_t)rd16(self + 6u);
L_101dea85: ;
    t44 = (eax & 0xffff0000u) | rd16(self + 4u);
    t45 = rd32(self + 8u);
    g->esi = self;
    g->edi = edi;
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, t45, t44, 1u);
    t46 = g->edx;
    t47 = rd32(COW_IMG(0x10664508u));
    wr16(t47 + 0x16u, 4u);
    wr32(t47 + 0x30u, COW_IMG(0x1037f044u));
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t46;
    return t47;
L_101dea03: ;
    if ((uint8_t)eax == 0u) goto L_101dea3c;
    if (rd32(loc_8 + 0x14c0u) == 0u)
    {
        eax = rd32(loc_8 + 0x14c0u);
    }
    else
    {
        eax = rd32(loc_8 + 0x14c0u);
        if (rd16(eax) <= 1u)
        {
            eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
            t40 = rd32(edi + 4u);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t41 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, t40, 4, 2u, 7u, t40, 0x80808080u);
            t42 = g->edx;
            eax = t41;
            edx = t42;
        }
    }
    goto L_101dea34;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de860(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
