/* f_0x10134230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10134230(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_84;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 188u);

    if (rd8(self + 0x14fu) != 0xffu) goto L_1013423e;
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x8cu, 0u);
    wr16(sp0 - 0x8au, 0u);
    wr16(sp0 - 0x88u, 0u);
    wr16(sp0 - 0x86u, 0u);
    wr32(sp0 - 0x9cu, in_edi);
    if ((int16_t)rd16(t1 + 0x58u) < 1)
    {
        eax = 0u;
        ecx = self;
        edx = in_edx;
        goto L_10133f80;
    }
    eax = 0u;
    edx = in_edx;
    ebp = t1;
    esi = 1u;
L_10133f20: ;
    wr32(sp0 - 0xa0u, esi);
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t2 = cow_stdcall(g, COW_IMG(0x10131680u), 1, esi);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int16_t)t2 < 0)
    {
        eax = t2;
        ecx = t3;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        if (rd16(self + (uint32_t)(int16_t)eax * 2u + 0x78u) == 0u)
        {
            eax = (uint32_t)(int16_t)eax;
        }
        else
        {
            edi = self + (uint32_t)(int16_t)eax * 2u + 0x78u;
            eax = (uint32_t)(int16_t)eax;
            wr32(sp0 - 0xa0u, 1u);
            wr32(sp0 - 0xa4u, 1u);
            wr32(sp0 - 0xa8u, esi);
            wr32(sp0 - 0xacu, sp0 - 0x8cu);
            g->ebx = self;
            g->edi = edi;
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, COW_IMG(0x10118900u), ebp, 4, sp0 - 0x8cu, esi, 1u, 1u);
            t5 = g->ecx;
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, 0x80808080u);
            wr32(sp0 - 0xa8u, 0u);
            wr32(sp0 - 0xacu, 0x3f800000u);
            t6 = rd32(sp0 - 0x8au);
            wr32(sp0 - 0xb0u, t6);
            t7 = rd32(sp0 - 0x8cu);
            wr32(sp0 - 0xb4u, t7);
            t8 = (t5 & 0xffff0000u) | rd16(edi);
            wr32(sp0 - 0xb8u, t8);
            g->eax = t7;
            t9 = rd32(COW_IMG(0x10621808u));
            t10 = cow_thiscall(g, COW_IMG(0x1015bd70u), t9, 7, t8, t7, t6, 0x3f800000u, 0u, 0x80808080u, 0u);
            t11 = g->ecx;
            eax = t10;
            ecx = t11;
        }
    }
    if ((int32_t)(esi + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
    {
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        ebp = rd32(self + 8u);
        esi = esi + 1u;
        goto L_10133f20;
    }
    edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
L_10133f80: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t12 = cow_thiscall(g, COW_IMG(0x100e5790u), ecx, 0);
    t13 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_1013416e;
    }
    edx = t13;
    esi = t12;
    wr32(sp0 - 0xa0u, sp0 - 0x8cu);
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x8cu, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x8cu);
    t14 = g->edx;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = t14;
        ecx = ecx & 0xffffff00u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        ecx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
        edx = t14;
        ecx = (ecx & 0xffffff00u) | rd8(eax + 0x1ffu);
    }
    if (rd16(esi + 0x22u) < 2u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x22u);
        goto L_1013409c;
    }
    eax = (eax & 0xffff0000u) | rd16(esi + 0x22u);
    if ((uint16_t)eax > 6u) goto L_1013409c;
    if ((uint8_t)ecx < 2u) goto L_1013409c;
    if ((uint8_t)ecx > 6u) goto L_1013409c;
    wr32(sp0 - 0xa0u, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t15 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x84u, t15);
    if (t15 == 0u)
    {
        eax = t15;
        edx = t17;
        goto L_1013416e;
    }
    eax = t15;
    ecx = t16;
    loc_84 = t15;
    if (rd32(rd32(eax) + 0x59cu) == 0u)
    {
        ebp = (uint32_t)(int16_t)rd16(sp0 - 0x8au) + 0xa2u;
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x10u;
    }
    else
    {
        edx = rd32(eax);
        ebx = rd32(rd32(eax) + 0x59cu);
        ebp = (uint32_t)(int16_t)rd16(sp0 - 0x8au) + 0xa2u;
        edi = (uint32_t)(int16_t)rd16(sp0 - 0x8cu) + 0x10u;
        wr32(sp0 - 0xa0u, 0u);
        wr32(sp0 - 0xa4u, 0u);
        wr32(sp0 - 0xa8u, 0x80808080u);
        wr32(sp0 - 0xacu, ebp);
        wr32(sp0 - 0xb0u, edi);
        g->esp = sp0 - 0x9cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), ebx, 5, edi, ebp, 0x80808080u, 0u, 0u);
        ecx = (uint32_t)(int16_t)rd16(ebx + 0x20u);
        edi = edi + (uint32_t)(int16_t)rd16(ebx + 0x22u) - (uint32_t)(int16_t)rd16(ebx + 0x20u) + 2u;
    }
    t18 = rd32(esi + 0x1cu);
    wr32(sp0 - 0xa0u, t18);
    wr32(sp0 - 0xa4u, COW_IMG(0x1036f890u));
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x94u;
    t19 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1036f890u), t18, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
    wr32(sp0 - 0xacu, 0x80808080u);
    wr32(sp0 - 0xb0u, sp0 - 0x80u);
    wr32(sp0 - 0xb4u, ebp + 4u);
    wr32(sp0 - 0xb8u, edi);
    g->ecx = sp0 - 0x80u;
    g->edx = ebp + 4u;
    t20 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, edi, ebp + 4u, sp0 - 0x80u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x1036f890u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
    t21 = g->ecx;
    t22 = g->edx;
    if (!(rd8(esi + 0x20u) & 1u))
    {
        eax = t20;
        edx = t22;
        goto L_1013416e;
    }
    eax = t20;
    if (rd32(rd32(rd32(sp0 - 0x84u)) + 0x5a0u) == 0u)
    {
        edx = rd32(rd32(sp0 - 0x84u));
        goto L_1013416e;
    }
    ecx = rd32(rd32(rd32(sp0 - 0x84u)) + 0x5a0u);
    edx = rd32(rd32(sp0 - 0x84u));
    wr32(sp0 - 0xa0u, 0u);
    wr32(sp0 - 0xa4u, 0u);
    wr32(sp0 - 0xa8u, 0x80808080u);
    wr32(sp0 - 0xacu, ebp);
    wr32(sp0 - 0xb0u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x9cu;
    t23 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, eax, ebp, 0x80808080u, 0u, 0u);
    t24 = g->edx;
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    g->edx = t24;
    return t23;
L_1013409c: ;
    if (rd16(esi + 0x1au) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x1au);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(esi + 0x1au);
        if (rd8(self + 0x120u) != 0u)
        {
            wr32(sp0 - 0xa0u, (uint16_t)eax);
            g->eax = (uint16_t)eax;
            g->edx = edx;
            t25 = rd32(COW_IMG(0x10621808u));
            g->esp = sp0 - 0x9cu;
            t26 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t25, 1, (uint16_t)eax);
            t27 = g->ecx;
            t28 = g->edx;
            if (t26 == 0u)
            {
                eax = t26;
                edx = t28;
            }
            else
            {
                ecx = t27;
                wr32(sp0 - 0xa0u, 0u);
                t29 = rd16(esi + 0x18u);
                t30 = (rd8(esi + 0x19u) & 0xfu) * 0xdu + 0x38u | (t29 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t29 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
                wr32(sp0 - 0xa4u, t30);
                wr32(sp0 - 0xa8u, 0u);
                wr32(sp0 - 0xacu, 0x3f000000u);
                t31 = rd32(sp0 - 0x8au) + 0xa2u;
                wr32(sp0 - 0xb0u, t31);
                t32 = rd32(sp0 - 0x8cu) + 0x10u;
                wr32(sp0 - 0xb4u, t32);
                t33 = (((t29 & 0xfu) * 0xdu << 0x10u) + 0x380000u & 0xffff0000u) | rd16(esi + 0x1au);
                wr32(sp0 - 0xb8u, t33);
                g->eax = t33;
                g->esp = sp0 - 0x9cu;
                t34 = cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, t33, t32, t31, 0x3f000000u, 0u, t30, 0u);
                wr32(sp0 - 0xa0u, 0x80808080u);
                wr32(sp0 - 0xa4u, self + 0x120u);
                t35 = rd32(sp0 - 0x8au) + 0xa6u;
                wr32(sp0 - 0xa8u, t35);
                t36 = rd32(sp0 - 0x8cu) + 0x24u;
                wr32(sp0 - 0xacu, t36);
                wr32(sp0 - 0xb0u, 0x8cu);
                g->edx = t36;
                t37 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x8cu, t36, t35, self + 0x120u, 0x80808080u);
                t38 = g->edx;
                eax = t37;
                edx = t38;
            }
        }
    }
L_1013416e: ;
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x98u);
    g->edi = rd32(sp0 - 0x9cu);
    g->ebp = rd32(sp0 - 0x94u);
    g->edx = edx;
    return eax;
L_10134180: ;
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t39 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if ((int16_t)rd16(t39 + 0x58u) < 1)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ebp = t39;
        eax = in_eax;
        edx = in_edx;
        esi = 1u;
L_101341b1: ;
        wr32(sp0 - 0x1cu, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t40 = cow_stdcall(g, COW_IMG(0x10131680u), 1, esi);
        t41 = g->edx;
        if ((int16_t)t40 < 0)
        {
            edx = t41;
        }
        else
        {
            eax = t40;
            edx = t41;
            if (rd8(self + (uint32_t)(int16_t)eax + 0x22u) != 0u)
            {
                edi = self + (uint32_t)(int16_t)eax + 0x22u;
                eax = ((uint32_t)(int16_t)eax & 0xffffff00u) | rd8(self + (uint32_t)(int16_t)eax + 0x22u);
                wr32(sp0 - 0x1cu, 1u);
                wr32(sp0 - 0x20u, 1u);
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, sp0 - 8u);
                g->ebx = self;
                g->edi = edi;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t42 = cow_thiscall(g, COW_IMG(0x10118900u), ebp, 4, sp0 - 8u, esi, 1u, 1u);
                t43 = g->ecx;
                t44 = g->edx;
                t45 = (t44 & 0xffffff00u) | rd8(edi);
                wr32(sp0 - 0x1cu, t45);
                wr32(sp0 - 0x20u, 2u);
                t46 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 2u, t45);
                wr32(sp0 - 0x1cu, 0u);
                wr32(sp0 - 0x20u, 0x80808080u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x3f800000u);
                t47 = rd32(sp0 - 6u);
                wr32(sp0 - 0x2cu, t47);
                t48 = rd32(sp0 - 8u);
                wr32(sp0 - 0x30u, t48);
                wr32(sp0 - 0x34u, t46);
                g->edx = t48;
                cow_thiscall(g, COW_IMG(0x1015bdb0u), rd32(COW_IMG(0x10621808u)), 7, t46, t48, t47, 0x3f800000u, 0u, 0x80808080u, 0u);
                t49 = g->edx;
                edx = t49;
            }
        }
        if ((int32_t)(esi + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
        {
            eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
            ebp = rd32(self + 8u);
            esi = esi + 1u;
            goto L_101341af;
        }
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_101341af: ;
    goto L_101341b1;
L_1013423e: ;
    goto L_10134180;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10134230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10134230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
