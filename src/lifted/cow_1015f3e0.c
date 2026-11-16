/* f_0x1015f3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1015f3e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_34;
    uint32_t loc_3c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;

    if (rd8(COW_IMG(0x103722d8u)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x103722d8u));
        ecx = self;
        edx = in_edx;
        ebp = rd32(sp0 + 4u);
    }
    else
    {
        ebp = rd32(sp0 + 4u);
        wr32(sp0 + 4u, ebp & 0x800u);
        ecx = self;
        edx = in_edx;
        esi = COW_IMG(0x103722fcu);
        loc_1c = ebp & 0x1000u;
        loc_18 = ebp & 0x200u;
        loc_14 = ebp & 0x20u;
        loc_10 = ebp & 0x40u;
        loc_c = ebp & 0x10u;
        loc_8 = ebp & 8u;
        loc_4 = ebp & 4u;
L_1015f451: ;
        if (rd32(esi - 4u) == 0u)
        {
            edi = 0u;
        }
        else
        {
            eax = rd32(esi - 4u);
            if (rd32(eax) == 0u)
            {
                edi = 0u;
            }
            else
            {
                eax = rd32(eax);
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, rd32(rd32(eax) + 0x40u), eax, 1, ebp);
                t1 = g->ecx;
                t2 = g->edx;
                ecx = t1;
                edx = t2;
                edi = eax;
            }
        }
        if (rd32(sp0 + 4u) != 0u)
        {
            eax = rd32(sp0 + 4u);
            if ((rd8(esi + 4u) & 4u) == 0u) goto L_1015f49c;
            if ((rd32(esi) & 0x400000u) != 0u)
            {
                eax = rd32(esi);
                goto L_1015f49c;
            }
            eax = rd32(esi);
            if ((eax & 0x2000000u) == 0u) goto L_1015f4b2;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t3 = cow_cdecl(g, COW_IMG(0x100870e0u), 2, 0u, 1u);
            t4 = g->ecx;
            t5 = g->edx;
            if ((uint8_t)t3 != 0u)
            {
                ecx = t4;
                edx = t5;
                goto L_1015f4b2;
            }
            eax = t3;
            ecx = t4;
            edx = t5;
L_1015f49c: ;
            if (edi == 0u) goto L_1015f4a7;
            if (rd32(edi + 8u) == 0u) goto L_1015f4b2;
            eax = rd32(edi + 8u);
L_1015f4a7: ;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, esi - 0x24u);
            t6 = g->ecx;
            t7 = g->edx;
            ecx = t6;
            edx = t7;
        }
L_1015f4b2: ;
        if (loc_1c != 0u)
        {
            eax = loc_1c;
            if ((rd32(esi) & 0x1000000u) != 0u)
            {
                if (edi == 0u) goto L_1015f4cd;
                if (rd32(edi + 8u) == 0u) goto L_1015f4d8;
                eax = rd32(edi + 8u);
L_1015f4cd: ;
                g->edx = esi - 0x24u;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, esi - 0x24u);
                t8 = g->ecx;
                t9 = g->edx;
                ecx = t8;
                edx = t9;
            }
        }
L_1015f4d8: ;
        if (loc_18 != 0u)
        {
            if ((rd8(esi + 4u) & 8u) == 0u)
            {
                if (edi == 0u) goto L_1015f4f1;
                if (rd32(edi + 8u) == 0u) goto L_1015f4fc;
L_1015f4f1: ;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, esi - 0x24u);
                t10 = g->ecx;
                t11 = g->edx;
                ecx = t10;
                edx = t11;
            }
        }
L_1015f4fc: ;
        if (loc_14 != 0u)
        {
            eax = loc_14;
            g->eax = eax;
            g->edx = edx;
            t12 = rd32(COW_IMG(0x1057876cu));
            g->esp = sp0 - 0x30u;
            t13 = cow_thiscall(g, COW_IMG(0x10157610u), t12, 0);
            t14 = g->ecx;
            t15 = g->edx;
            if ((rd8(esi + 4u) & 4u) == 0u)
            {
                eax = t13;
                ecx = t14;
                edx = t15;
                goto L_1015f51d;
            }
            eax = t13;
            ecx = t14;
            edx = t15;
            if ((rd32(esi) & 0x400000u) == 0u) goto L_1015f533;
L_1015f51d: ;
            if (edi == 0u) goto L_1015f528;
            if (rd32(edi + 8u) == 0u) goto L_1015f533;
            eax = rd32(edi + 8u);
L_1015f528: ;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, esi - 0x24u);
            t16 = g->ecx;
            t17 = g->edx;
            ecx = t16;
            edx = t17;
L_1015f533: ;
            if ((rd32(esi) >> 8u & 4u) != 0u)
            {
                eax = rd32(esi);
                if ((eax & 0x4000000u) == 0u) goto L_1015f554;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t18 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
                t19 = g->ecx;
                t20 = g->edx;
                if ((uint8_t)t18 == 0u)
                {
                    ecx = t19;
                    edx = t20;
                    goto L_1015f57d;
                }
                edx = esi - 0x24u;
                loc_3c = esi - 0x24u;
L_1015f576: ;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1015e350u), self, 3, loc_3c, 1u, 1u);
                t24 = g->ecx;
                t25 = g->edx;
                ecx = t24;
                edx = t25;
            }
        }
L_1015f57d: ;
        if (loc_10 != 0u)
        {
            if ((rd32(esi) >> 8u & 8u) != 0u)
            {
                eax = rd32(esi);
                if ((eax & 0x4000000u) == 0u) goto L_1015f5a2;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t26 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
                t27 = g->ecx;
                t28 = g->edx;
                if ((uint8_t)t26 == 0u)
                {
                    ecx = t27;
                    edx = t28;
                    goto L_1015f5c3;
                }
                eax = t26;
                edx = esi - 0x24u;
                loc_34 = esi - 0x24u;
L_1015f5bc: ;
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, loc_34);
                t32 = g->ecx;
                t33 = g->edx;
                ecx = t32;
                edx = t33;
            }
        }
L_1015f5c3: ;
        if (loc_c != 0u)
        {
            if ((rd32(esi) >> 8u & 2u) != 0u)
            {
                eax = rd32(esi);
                g->edx = esi - 0x24u;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, esi - 0x24u);
                t34 = g->ecx;
                t35 = g->edx;
                ecx = t34;
                edx = t35;
            }
        }
        if (loc_8 != 0u)
        {
            if (!(rd32(esi) >> 8u & 1u))
            {
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                cow_thiscall(g, COW_IMG(0x1015e910u), self, 1, esi - 0x24u);
                t36 = g->ecx;
                t37 = g->edx;
                ecx = t36;
                edx = t37;
            }
        }
        if (loc_4 == 0u)
        {
            eax = loc_4;
        }
        else
        {
            eax = loc_4;
            if ((int8_t)rd8(esi) < 0)
            {
                g->edx = edx;
                g->esp = sp0 - 0x30u;
                t38 = cow_thiscall(g, COW_IMG(0x1015e350u), self, 3, esi - 0x24u, 1u, 0u);
                t39 = g->ecx;
                t40 = g->edx;
                eax = t38;
                ecx = t39;
                edx = t40;
            }
        }
        if (rd8(esi + 8u) != 0u)
        {
            esi = esi + 0x2cu;
            goto L_1015f451;
        }
        eax = (eax & 0xffffff00u) | rd8(esi + 8u);
    }
    if ((ebp & 0xa28u) != 0u)
    {
        if (rd32(COW_IMG(0x1057876cu)) != 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
            g->eax = eax;
            g->esp = sp0 - 0x28u;
            t41 = cow_fastcall(g, COW_IMG(0x101594f0u), ecx, edx, 0);
            t42 = g->edx;
            eax = t41;
            edx = t42;
        }
        if (rd32(COW_IMG(0x106643a8u)) == 0u)
        {
            ecx = rd32(COW_IMG(0x106643a8u));
        }
        else
        {
            ecx = rd32(COW_IMG(0x106643a8u));
            g->ebx = self;
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t43 = cow_call_regs(g, COW_IMG(0x10202f00u), g->eax, ecx, edx, 1, 3, in_ebp, in_ebx, self);
            t44 = g->ecx;
            t45 = g->edx;
            eax = t43;
            ecx = t44;
            edx = t45;
        }
    }
    if ((ebp & 0x800u) != 0u)
    {
        if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) == 0u)
        {
            ecx = rd32(COW_IMG(0x1057876cu));
        }
        else
        {
            ecx = rd32(COW_IMG(0x1057876cu));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x28u;
            t46 = cow_thiscall(g, COW_IMG(0x10157620u), ecx, 0);
            t47 = g->ecx;
            t48 = g->edx;
            eax = t46;
            ecx = t47;
            edx = t48;
        }
    }
    if ((ebp & 0x200u) != 0u)
    {
        wr8(self + 0xaau, 1u);
    }
    if ((ebp & 0x1204u) != 0u)
    {
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t49 = cow_call_regs(g, COW_IMG(0x1019c590u), eax, g->ecx, g->edx, 1, 0);
        t50 = g->ecx;
        t51 = g->edx;
        eax = t49;
        ecx = t50;
        edx = t51;
    }
    if ((ebp & 0xc08u) != 0u)
    {
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, COW_IMG(0x1019c580u), 0);
    }
    g->ebx = in_ebx;
    return;
L_1015f554: ;
    if ((eax & 0x8000000u) == 0u) goto L_1015f56e;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t21 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        ecx = t22;
        edx = t23;
        goto L_1015f57d;
    }
    edx = t23;
    loc_3c = esi - 0x24u;
    goto L_1015f576;
L_1015f56e: ;
    loc_3c = esi - 0x24u;
    goto L_1015f576;
L_1015f5a2: ;
    if ((eax & 0x8000000u) == 0u) goto L_1015f5b8;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t29 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        ecx = t30;
        edx = t31;
        goto L_1015f5c3;
    }
    edx = t31;
    eax = esi - 0x24u;
    loc_34 = esi - 0x24u;
    goto L_1015f5bc;
L_1015f5b8: ;
    loc_34 = esi - 0x24u;
    goto L_1015f5bc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015f3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015f3e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
