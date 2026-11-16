/* f_0x101f2aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101f2aa0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
        goto L_101f2ba4;
    }
    g->eax = rd32(rd32(self + 0x5cu));
    g->edx = in_edx;
    t1 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0xcu), rd32(self + 0x5cu), 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101f2ba4;
    }
    edx = t3;
    if (rd8(rd32(COW_IMG(0x10666e38u)) + rd32(rd32(COW_IMG(0x10666e38u)) + 0xcu) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x10666e38u));
        goto L_101f2b2a;
    }
    eax = rd32(COW_IMG(0x10666e38u));
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x5cu));
    t4 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0xcu;
    t5 = cow_thiscall(g, rd32(t4 + 0x20u), rd32(self + 0x5cu), 0);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        goto L_101f2b2a;
    }
    eax = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t8 = g->edx;
    if ((int32_t)t7 >= (int16_t)rd16(self + 0x54u))
    {
        eax = t7;
        goto L_101f2b2a;
    }
    eax = t7;
    ecx = (uint32_t)(int16_t)rd16(self + 0x54u);
    edx = t8;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, 3u);
    t10 = (uint8_t)t9 - 1u;
    g->eax = t10;
    g->edx = rd32(rd32(self + 0x5cu));
    t11 = rd32(self + 0x5cu);
    t12 = rd32(rd32(self + 0x5cu));
    t13 = cow_thiscall(g, rd32(t12 + 0x18u), t11, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        edi = t10;
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        edi = t10;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_call_regs(g, COW_IMG(0x100eb8d0u), eax, ecx, g->edx, 1, 3, 3u, in_edi, in_esi);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
        edi = edi - t16;
    }
    t19 = (eax & 0xffff0000u) | rd16(self + 0x54u);
    g->eax = t19;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x101cb590u), 2, t19, edi);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_101f2b2a: ;
    t22 = (eax & 0xffff0000u) | rd16(self + 0x50u);
    g->eax = t22;
    g->edx = self + 0x68u;
    t23 = rd32(rd32(self + 0x5cu));
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall_cdecl(g, COW_IMG(0x101f7100u), self, 3, t22, self + 0x68u, self + 0x78u);
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_thiscall(g, rd32(t23 + 0x4cu), rd32(self + 0x5cu), 4, t24, t22, self + 0x68u, self + 0x78u);
    t27 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        eax = t26;
        edx = t27;
    }
    else
    {
        eax = self + 0x78u;
        ecx = 8u;
        edi = 0u;
L_101f2b57: ;
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edi = edi + (uint32_t)(int16_t)rd16(eax);
            eax = eax + 2u;
            goto L_101f2b57;
        }
        ecx = ecx - 1u;
        edx = (uint32_t)(int16_t)rd16(eax);
        edi = edi + (uint32_t)(int16_t)rd16(eax);
        t28 = rd32(self + 0x64u);
        g->eax = t28;
        g->esp = sp0 - 0xcu;
        t29 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, t28);
        t30 = (uint8_t)t29 - 1u;
        g->eax = t30;
        g->edx = rd32(rd32(self + 0x5cu));
        t31 = rd32(self + 0x5cu);
        t32 = rd32(rd32(self + 0x5cu));
        t33 = cow_thiscall(g, rd32(t32 + 0x18u), t31, 0);
        t34 = g->ecx;
        t35 = g->edx;
        if ((uint8_t)t33 == 0u)
        {
            eax = t33;
            ecx = t34;
            edx = t35;
            ebx = t30;
        }
        else
        {
            ecx = t34;
            edx = t35;
            ebx = t30;
            t36 = rd32(self + 0x64u);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t37 = cow_call_regs(g, COW_IMG(0x100eb8d0u), t36, ecx, g->edx, 1, 3, t36, in_edi, in_esi);
            t38 = g->ecx;
            t39 = g->edx;
            eax = t37;
            ecx = t38;
            edx = t39;
            ebx = ebx - t37;
        }
        t40 = ((ecx & 0xffff0000u) | (uint16_t)(rd16(self + 0x50u) - rd16(self + 0x54u))) - edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t41 = cow_cdecl(g, COW_IMG(0x101cb590u), 2, t40, ebx);
        t42 = g->edx;
        eax = t41;
        edx = t42;
    }
L_101f2ba4: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f2aa0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
