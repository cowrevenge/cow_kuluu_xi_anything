/* f_0x101f2bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101f2bb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101f1120u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd16(sp0 + 4u) != 5u)
    {
        eax = t1;
        edx = t3;
        ebx = t1;
        goto L_101f2d1b;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    ebx = t1;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x1013e730u), eax, g->ecx, g->edx, 1, 1, ebx);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
        goto L_101f2c06;
    }
    eax = t4;
    edx = t5;
    if ((uint16_t)arg2 != 0u)
    {
        edi = arg2;
    }
    else
    {
        eax = rd32(self + 8u);
        edi = (arg2 & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    }
    g->eax = eax;
    g->edx = edx;
    t6 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x101f7100u), self, 1, ebx);
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, rd32(t6 + 0x3cu), rd32(self + 0x5cu), 4, 5u, edi, t7, ebx);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_101f2c06: ;
    if (ebx != 0u) goto L_101f2c13;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f2c13: ;
    if (rd8(ebx + 8u) != 0x19u) goto L_101f2c22;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f2c22: ;
    g->eax = eax;
    g->edx = rd16(ebx);
    t11 = rd32(COW_IMG(0x10621808u));
    t12 = rd16(ebx);
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x1015bc40u), t11, 1, t12);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        edi = t13;
        goto L_101f2c44;
    }
    eax = t13;
    edx = t15;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f2c44: ;
    t16 = rd8(edi + 0x1b3u);
    wr8(edi + 0x1b3u, (uint8_t)(t16 + 1u));
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x1015a680u), g->eax, g->ecx, edx, 1, 3, edi, in_edi, in_esi);
    t18 = g->edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t20 = g->ecx;
    if (rd32(self + 0x38u) == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = rd32(self + 0x38u);
        ebp = 0u;
    }
    else
    {
        eax = t19;
        edx = rd32(self + 0x38u);
        if ((int32_t)eax >= (int16_t)rd16(self + 0x20u))
        {
            ecx = (uint32_t)(int16_t)rd16(self + 0x20u);
            ebp = 0u;
        }
        else
        {
            if (eax * 0x54u + edx == 0u)
            {
                ecx = eax * 0x54u + edx;
                eax = eax * 0x15u;
                ebp = 0u;
            }
            else
            {
                ecx = eax * 0x54u + edx;
                eax = eax * 0x15u;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t21 = cow_thiscall(g, COW_IMG(0x101f4b60u), ecx, 1, 1u);
                t22 = g->ecx;
                t23 = g->edx;
                eax = t21;
                ecx = t22;
                edx = t23;
                ebp = t21;
            }
        }
    }
    wr8(edi + 0x1b3u, (uint8_t)(rd8(edi + 0x1b3u) - 1u));
    if (ebp == 0u) goto L_101f2cb7;
    if (ebp == 0x80404040u) goto L_101f2cb7;
    if (ebp != 0x80602020u) goto L_101f2cc0;
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_stdcall(g, COW_IMG(0x101f2da0u), 1, ebx);
    t25 = g->edx;
    eax = t24;
    edx = t25;
L_101f2cb7: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f2cc0: ;
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x5cu));
    t26 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0x10u;
    t27 = cow_thiscall(g, rd32(t26 + 0x14u), rd32(self + 0x5cu), 0);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        edx = t28;
    }
    else
    {
        eax = t27;
        edx = t28;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x101f11a0u), self, 0);
        t29 = g->edx;
        edx = t29;
    }
    if (rd32(rd32(COW_IMG(0x10578204u)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        ecx = rd32(COW_IMG(0x10578204u));
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t32 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
        t33 = g->edx;
        if ((uint8_t)t32 != 0u)
        {
            eax = t32;
            edx = t33;
        }
        else
        {
            eax = t32;
            edx = t33;
            t34 = (eax & 0xffffff00u) | rd8(ebx + 2u);
            t35 = (edx & 0xffff0000u) | rd16(ebx);
            g->eax = rd32(rd32(self + 0x5cu));
            g->edx = t35;
            t36 = rd32(rd32(self + 0x5cu));
            g->esp = sp0 - 0x28u;
            t37 = cow_thiscall(g, rd32(t36), rd32(self + 0x5cu), 0);
            t38 = g->edx;
            g->ebx = ebx;
            g->edi = edi;
            g->edx = t38;
            g->esp = sp0 - 0x10u;
            t39 = cow_call_regs(g, COW_IMG(0x1013e410u), t37, rd32(COW_IMG(0x10578204u)), g->edx, 0, 7, t37, t35, t34, 0u, 0u, 0u, 0u);
            t40 = g->edx;
            eax = t39;
            edx = t40;
        }
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        ecx = rd32(COW_IMG(0x10578204u));
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t30 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, ebx, 1u);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
L_101f2d1b: ;
    if ((uint16_t)rd32(sp0 + 4u) != 6u)
    {
        ebp = rd32(sp0 + 4u);
    }
    else
    {
        ebp = rd32(sp0 + 4u);
        g->eax = eax;
        g->edx = rd32(rd32(self + 0x5cu));
        t41 = rd32(rd32(self + 0x5cu));
        g->esp = sp0 - 0x10u;
        t42 = cow_thiscall(g, rd32(t41 + 0x14u), rd32(self + 0x5cu), 0);
        t43 = g->edx;
        if ((uint8_t)t42 == 0u)
        {
            edx = t43;
        }
        else
        {
            eax = t42;
            edx = t43;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x101f11a0u), self, 0);
            t44 = g->edx;
            edx = t44;
        }
    }
    if ((uint16_t)arg2 != 0u)
    {
        edi = arg2;
    }
    else
    {
        edi = (arg2 & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    }
    t45 = rd32(rd32(self + 0x5cu));
    wr32(sp0 + 4u, t45);
    g->eax = t45;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t46 = cow_thiscall_cdecl(g, COW_IMG(0x101f7100u), self, 1, ebx);
    t47 = g->edx;
    g->eax = rd32(sp0 + 4u);
    g->edx = t47;
    t48 = rd32(sp0 + 4u);
    t49 = cow_thiscall(g, rd32(t48 + 0x34u), rd32(self + 0x5cu), 4, ebp, edi, t46, ebx);
    t50 = g->edx;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = t50;
    return (t49 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f2bb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
