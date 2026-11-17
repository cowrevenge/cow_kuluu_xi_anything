/* f_0x1020ffd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1020ffd0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    g->esp = sp0 - 0xcu;
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
        goto L_1020fff6;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if ((t8 >> 8u & 8u) == 0u)
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        goto L_10210008;
    }
    edx = t10;
L_1020fff6: ;
    t11 = rd32(COW_IMG(0x10666e2cu));
    t12 = rd32(rd32(COW_IMG(0x10666e2cu)) + 0xcu);
    t13 = rd8(rd32(COW_IMG(0x10666e2cu)) + rd32(rd32(COW_IMG(0x10666e2cu)) + 0xcu) + 0x18u);
    wr16(self + 6u, (uint16_t)t13);
    eax = t11;
    ecx = t12;
    edx = (edx & 0xffff0000u) | t13;
L_10210008: ;
    if (rd16(self + 6u) != 0u) goto L_10210025;
    g->esi = self;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t14 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
    t15 = g->edx;
    g->esi = in_esi;
    g->edx = t15;
    return t14;
L_10210025: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t16 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1e8u, in_esi, rd32(sp0 - 8u));
        t17 = g->edx;
        if (t16 == 0u)
        {
            edx = t17;
            ecx = 0u;
        }
        else
        {
            eax = t16;
            ecx = t16;
            edx = t17;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x1020fea0u), ecx, 0);
            t18 = g->ecx;
            t19 = g->edx;
            ecx = t18;
            edx = t19;
        }
        wr32(self + 0x14u, ecx);
    }
    if (rd32(self + 8u) != 0u)
    {
        edi = in_edi;
    }
    else
    {
        t20 = (uint32_t)(int16_t)rd16(self + 6u) * 0x54u;
        g->eax = t20;
        t21 = rd16(self + 6u);
        g->esp = sp0 - 0x10u;
        t22 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t20, in_edi, in_ebp);
        t23 = g->edx;
        if (t22 == 0u)
        {
            edx = t23;
            edi = (uint32_t)(int16_t)t21;
            ebp = 0u;
        }
        else
        {
            eax = t22;
            edx = t23;
            ebp = t22;
            edi = (uint32_t)(int16_t)t21;
            if ((int32_t)(edi - 1u) < 0)
            {
                edi = edi - 1u;
            }
            else
            {
                ebx = ebp;
                edi = edi - 1u;
                edi = edi + 1u;
L_1021007f: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t24 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t25 = g->edx;
                if (edi != 1u)
                {
                    eax = t24;
                    edx = t25;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_1021007f;
                }
                edx = t25;
                edi = edi - 1u;
            }
        }
        wr32(self + 8u, ebp);
    }
    t26 = rd16(self + 6u);
    wr16(self + 4u, 0u);
    if ((int16_t)t26 <= 0) goto L_10210178;
    eax = 0u;
    loc_8 = 0u;
L_102100a7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t27 = cow_thiscall(g, COW_IMG(0x1021cb80u), rd32(COW_IMG(0x10666e2cu)), 1, eax);
    t28 = g->edx;
    if (t27 == 0u)
    {
        edx = t28;
    }
    else
    {
        ebp = t27;
        if (rd8(ebp + 2u) == 0u)
        {
            edx = rd32(self + 8u);
            edi = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
        }
        else
        {
            edx = rd32(self + 8u);
            edi = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
            g->eax = rd16(ebp);
            g->edx = edx;
            t29 = rd16(ebp);
            g->esp = sp0 - 0x18u;
            t30 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t29);
            t31 = g->edx;
            if (t30 == 0u)
            {
                edx = t31;
            }
            else
            {
                eax = t30;
                ebx = t30;
                g->eax = eax;
                g->edx = rd32(self);
                t32 = rd32(self);
                g->esp = sp0 - 0x18u;
                t33 = cow_thiscall(g, rd32(t32 + 0x20u), self, 2, ebp, ebx);
                t34 = g->edx;
                if (t33 == 0u)
                {
                    edx = t34;
                }
                else
                {
                    eax = t33;
                    edx = t34;
                    loc_4 = t33;
                    wr32(edi + 0x48u, ebp);
                    g->esp = sp0 - 0x18u;
                    cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 0u, 0x16u, ebp, 0x80808080u);
                    t35 = g->edx;
                    t36 = rd32(ebx + 0x14c8u);
                    g->eax = loc_4;
                    t37 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t35, 4, 1u, 1u, t36, loc_4);
                    g->edx = rd32(self);
                    t38 = rd32(self);
                    t39 = cow_thiscall(g, rd32(t38 + 0x14u), self, 0);
                    t40 = g->edx;
                    wr32(edi + 0x4cu, t39);
                    if (rd32(self + 0x14u) == 0u)
                    {
                        edx = t40;
                    }
                    else
                    {
                        eax = t39;
                        ecx = rd32(self + 0x14u);
                        edx = t40;
                        t41 = (eax & 0xffff0000u) | rd16(ebp);
                        g->eax = t41;
                        g->esp = sp0 - 0x1cu;
                        t42 = cow_fastcall(g, COW_IMG(0x1020fec0u), ecx, edx, 1, t41);
                        t43 = g->edx;
                        g->esp = sp0 - 0x18u;
                        cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t43, 4, 2u, 0xbu, t42 + 1u, 0x80808080u);
                        t44 = g->edx;
                        edx = t44;
                    }
                    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
                }
            }
        }
    }
    if ((int32_t)(loc_8 + 1u) < (int16_t)rd16(self + 6u))
    {
        eax = loc_8 + 1u;
        loc_8 = loc_8 + 1u;
        goto L_102100a7;
    }
L_10210178: ;
    t45 = (edx & 0xffff0000u) | rd16(self + 4u);
    t46 = rd32(self + 8u);
    g->esi = self;
    g->edi = edi;
    g->eax = t46;
    g->esp = sp0 - 0x18u;
    t47 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t45, 3, t46, t45, 1u);
    t48 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t48;
    return t47;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ffd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ffd0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
