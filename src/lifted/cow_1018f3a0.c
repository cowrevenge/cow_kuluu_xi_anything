/* f_0x1018f3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018f3a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->eax = rd32(rd32(self + 0x14u));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), rd32(self + 0x14u), 1, self + 0x18u);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
        g->esp = sp0 - 0x14u;
        t4 = cow_call_regs(g, COW_IMG(0x101b4b60u), eax, self + 0x18u, edx, 1, 0);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x101b4b70u), self + 0x18u, 0);
    t7 = g->edx;
    if (rd32(self + 0x2204u) == t6)
    {
        eax = t6;
        loc_4 = t6;
    }
    else
    {
        eax = t6;
        edx = t7;
        loc_4 = t6;
        if ((int32_t)eax <= 0)
        {
            ebx = 0u;
            goto L_1018f40a;
        }
        ebx = 0u;
        edi = 0u;
L_1018f3df: ;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t8 = cow_fastcall(g, COW_IMG(0x101b4b80u), self + 0x18u, edx, 1, ebx);
        t9 = g->edx;
        g->edx = t9;
        t10 = cow_thiscall(g, COW_IMG(0x101b46d0u), t8, 0);
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_call_regs(g, COW_IMG(0x1018f8c0u), t10, g->ecx, g->edx, 0, 1, t10);
        t13 = g->edx;
        if ((int32_t)edi >= (int32_t)t12)
        {
            edx = t13;
        }
        else
        {
            eax = t12;
            edx = t13;
            edi = eax;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)loc_4)
        {
            eax = loc_4;
            ebx = ebx + 1u;
            goto L_1018f3df;
        }
        eax = loc_4;
        ebx = ebx + 1u;
        if ((int32_t)edi >= 90) goto L_1018f40f;
L_1018f40a: ;
        edi = 0x5au;
L_1018f40f: ;
        if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
        {
            ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            goto L_1018f429;
        }
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        if (ecx == 2u) goto L_1018f43f;
        if (ecx == 3u) goto L_1018f43f;
L_1018f429: ;
        if (ecx != 0u) goto L_1018f43f;
        if ((int32_t)(edi + 0xcu) < 140)
        {
            edi = edi + 0xcu;
        }
        else
        {
            edi = 0x8cu;
        }
L_1018f44f: ;
        wr16(self + 0x2220u, (uint16_t)edi);
        wr32(self + 0x2204u, eax);
    }
    if ((int32_t)eax > 0)
    {
        if (rd32(self + 0x2218u) == 0u)
        {
            g->eax = eax;
            g->edx = rd32(rd32(self + 0x221cu));
            t17 = rd32(rd32(self + 0x221cu));
            g->esp = sp0 - 0x14u;
            t18 = cow_thiscall(g, rd32(t17), rd32(self + 0x221cu), 0);
            t19 = g->edx;
            eax = t18;
            ecx = rd32(self + 0x221cu);
            edx = t19;
        }
        else
        {
            ecx = rd32(self + 0x2218u);
            g->eax = eax;
            g->edx = rd32(ecx);
            t14 = rd32(ecx);
            g->esp = sp0 - 0x14u;
            t15 = cow_thiscall(g, rd32(t14), ecx, 0);
            t16 = g->edx;
            eax = t15;
            ecx = rd32(self + 0x2218u);
            edx = t16;
        }
        wr32(self + 0x2208u, eax);
        g->eax = rd32(ecx);
        g->edx = edx;
        t20 = rd32(ecx);
        g->esp = sp0 - 0x14u;
        t21 = cow_thiscall(g, rd32(t20 + 4u), ecx, 0);
        t22 = g->edx;
        wr32(self + 0x220cu, t21);
        g->edx = t22;
        t23 = cow_thiscall(g, COW_IMG(0x1018fa00u), self, 0);
        t24 = g->edx;
        t25 = rd32(self + 0x220cu);
        t26 = t23 + rd32(self + 0x2208u);
        g->edx = t24;
        t27 = rd32(self + 0x2208u);
        t28 = rd32(self + 8u);
        t29 = cow_call_regs(g, COW_IMG(0x10119110u), t27, t28, g->edx, 0, 2, t26, t25);
        t30 = g->ecx;
        t31 = g->edx;
        t32 = (t30 & 0xffff0000u) | rd16(self + 0x2222u);
        t33 = (t31 & 0xffff0000u) | rd16(self + 0x2220u);
        g->edx = t33;
        t34 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t26, t25, t33, t32, 1u, 1u, 1u);
        t35 = g->edx;
        g->edx = t35;
        t36 = cow_thiscall(g, COW_IMG(0x1011ba40u), self, 0);
        t37 = g->edx;
        if ((uint8_t)t36 != 0u)
        {
            eax = t36;
        }
        else
        {
            edx = t37;
            ebx = t25;
            t38 = rd32(self + 8u);
            g->ebx = ebx;
            g->esp = sp0 - 0x14u;
            t39 = cow_call_regs(g, COW_IMG(0x1015e530u), t38, COW_IMG(0x10621838u), g->edx, 0, 1, t38);
            eax = t39;
        }
        wr8(rd32(self + 8u) + 0x69u, 1u);
    }
    t40 = rd32(self + 0x14u);
    wr8(self + 0x2201u, 0u);
    g->eax = eax;
    g->edx = rd32(t40);
    t41 = rd32(t40);
    g->esp = sp0 - 0x14u;
    t42 = cow_thiscall(g, rd32(t41 + 0x1cu), t40, 0);
    t43 = g->edx;
    if ((int32_t)t42 >= 0)
    {
        eax = t42;
        edx = t43;
        if (eax != rd16(self + 0x2202u))
        {
            ecx = rd16(self + 0x2202u);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t46 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
            eax = t46;
        }
    }
    else
    {
        edx = t43;
        t44 = rd32(self + 8u);
        g->esp = sp0 - 0x14u;
        t45 = cow_call_regs(g, COW_IMG(0x1015e790u), t44, COW_IMG(0x10621838u), g->edx, 0, 2, t44, 1u);
        eax = t45;
    }
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x14u));
    t47 = rd32(rd32(self + 0x14u));
    g->esp = sp0 - 0x14u;
    t48 = cow_thiscall(g, rd32(t47 + 0x1cu), rd32(self + 0x14u), 0);
    t49 = g->edx;
    wr16(self + 0x2202u, (uint16_t)t48);
    g->ebx = in_ebx;
    g->edx = t49;
    return t48;
L_1018f43f: ;
    if ((int32_t)(edi + 0xcu) < 200)
    {
        edi = edi + 0xcu;
    }
    else
    {
        edi = 0xc8u;
    }
    goto L_1018f44f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018f3a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
