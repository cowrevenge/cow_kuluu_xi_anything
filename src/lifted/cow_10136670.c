/* f_0x10136670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_10136670(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t4;
    uint32_t t5;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 652u);

    wr32(sp0 - 0x268u, in_ebx);
    wr32(sp0 - 0x26cu, in_edi);
    edi = sp0 - 0x260u;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(self + 0x4eu, 0u);
    wr8(sp0 - 0x261u, 0u);
    wr8(sp0 - 0x260u, 0x98u);
    wr8(sp0 - 0x25fu, 2u);
    wr8(sp0 - 0x25eu, 1u);
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        wr8(sp0 - 0x260u, 0xbeu);
    }
    g->edx = in_edx;
    g->esp = sp0 - 0x26cu;
    cow_thiscall(g, COW_IMG(0x1012a360u), sp0 - 0x224u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x270u, 0u);
    wr32(sp0 - 0x274u, 0u);
    t3 = rd32(sp0 - 0x260u);
    wr32(sp0 - 0x278u, t3);
    g->eax = t3;
    g->edx = t2;
    g->esp = sp0 - 0x274u;
    t4 = cow_cdecl(g, COW_IMG(0x10127870u), 1, t3);
    t5 = g->edx;
    wr32(sp0 - 0x278u, t4);
    wr32(sp0 - 0x27cu, arg1);
    g->edx = t5;
    g->esp = sp0 - 0x26cu;
    t6 = cow_thiscall(g, COW_IMG(0x1012a420u), sp0 - 0x224u, 4, arg1, t4, 0u, 0u);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x224u, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 != 0u)
    {
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        eax = t8;
        ecx = t9;
        edx = t10;
        wr32(sp0 - 0x270u, in_ebp);
        wr32(sp0 - 0x274u, in_esi);
L_101366f0: ;
        wr32(sp0 - 0x278u, 0x248u);
        g->eax = eax;
        g->esp = sp0 - 0x26cu;
        t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x248u, in_esi, in_ebp);
        t12 = g->edx;
        if (t11 == 0u)
        {
            ebp = 0u;
        }
        else
        {
            eax = t11;
            edx = t12;
            g->eax = eax;
            g->esp = sp0 - 0x274u;
            t13 = cow_thiscall(g, COW_IMG(0x10136900u), eax, 0);
            ebp = t13;
        }
        t14 = (uint32_t)(int16_t)rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u);
        wr32(sp0 - 0x278u, t14);
        wr32(sp0 - 0x27cu, 0x200u);
        wr32(sp0 - 0x280u, sp0 - 0x200u);
        g->ebx = self;
        g->esp = sp0 - 0x274u;
        cow_thiscall(g, COW_IMG(0x1012a4f0u), sp0 - 0x224u, 3, sp0 - 0x200u, 0x200u, t14);
        t15 = g->ecx;
        wr32(sp0 - 0x278u, 0u);
        wr32(sp0 - 0x27cu, 0u);
        wr32(sp0 - 0x280u, 0x101u);
        wr32(sp0 - 0x284u, ebp + 4u);
        wr32(sp0 - 0x288u, sp0 - 0x200u);
        g->eax = sp0 - 0x200u;
        g->edx = ebp + 4u;
        t16 = cow_cdecl(g, COW_IMG(0x101284f0u), 5, sp0 - 0x200u, ebp + 4u, 0x101u, 0u, 0u);
        t17 = g->edx;
        wr16(ebp + 0x208u, (uint16_t)t16);
        wr16(sp0 - 0x250u, (uint16_t)t16);
        esi = sp0 - 0x260u;
        edi = ebp + 0x20cu;
        ecx = 0xfu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x278u, ebp);
        wr8(self + 0x56u, (uint8_t)arg3);
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x10126480u), self + 0x14u, 1, ebp);
        t19 = g->ecx;
        t20 = g->edx;
        if (rd8(sp0 - 0x261u) != 0u)
        {
            eax = (t18 & 0xffffff00u) | rd8(sp0 - 0x261u);
            edx = t20;
        }
        else
        {
            eax = (t18 & 0xffffff00u) | rd8(sp0 - 0x261u);
            ecx = t19;
            t21 = rd32(sp0 - 0x260u);
            wr32(sp0 - 0x278u, t21);
            g->eax = eax;
            g->edx = t21;
            g->esp = sp0 - 0x274u;
            t22 = cow_cdecl(g, COW_IMG(0x10127870u), 1, t21);
            t23 = g->edx;
            if ((uint8_t)t22 == 0u)
            {
                eax = t22;
                edx = t23;
            }
            else
            {
                eax = t22;
                edx = t23;
                wr8(sp0 - 0x261u, 1u);
            }
        }
        wr16(self + 0x4eu, (uint16_t)(rd16(self + 0x4eu) + 1u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x274u;
        t24 = cow_thiscall(g, COW_IMG(0x1012a4e0u), sp0 - 0x224u, 0);
        t25 = g->ecx;
        t26 = g->edx;
        if (t24 == 0u)
        {
            eax = t24;
            ecx = t25;
            edx = t26;
            goto L_101366f0;
        }
        ebp = rd32(sp0 - 0x270u);
        esi = rd32(sp0 - 0x274u);
    }
    t27 = rd32(self + 0x64u);
    wr32(sp0 - 0x270u, t27);
    wr32(sp0 - 0x274u, 1u);
    wr32(sp0 - 0x278u, 0u);
    wr32(sp0 - 0x27cu, sp0 - 0x260u);
    wr32(sp0 - 0x280u, arg1);
    g->ebx = self;
    g->edx = arg1;
    g->esp = sp0 - 0x26cu;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(t27 + 0x18u), 5, arg1, sp0 - 0x260u, 0u, 1u, t27);
    t28 = g->edx;
    t29 = rd32(sp0 - 0x254u);
    wr32(self + 0x50u, t29);
    g->eax = t29;
    g->edx = t28;
    t30 = cow_thiscall(g, COW_IMG(0x1012a350u), sp0 - 0x224u, 0);
    t31 = g->edx;
    g->ebx = rd32(sp0 - 0x268u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0x26cu);
    g->ebp = ebp;
    g->edx = t31;
    return t30;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10136670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10136670(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
