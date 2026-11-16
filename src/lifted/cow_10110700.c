/* f_0x10110700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10110700(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (self == arg1) goto L_101107ec;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10112590u), self, 1, arg1);
    t1 = g->ecx;
    t2 = rd32(arg1 + 0x2cu);
    wr32(self + 0x2cu, t2);
    wr8(self + 8u, rd8(arg1 + 8u));
    g->edx = arg1 + 0xcu;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 0xcu, 1, arg1 + 0xcu);
    t3 = g->edx;
    g->eax = arg1 + 0x14u;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10109260u), self + 0x14u, 1, arg1 + 0x14u);
    t5 = g->edx;
    cow_thiscall(g, COW_IMG(0x10109260u), self + 0x1cu, 1, arg1 + 0x1cu);
    t6 = rd32(arg1 + 0x50u);
    t7 = rd32(self + 0x24u);
    wr32(self + 0x50u, t6);
    t8 = rd32(arg1 + 0x54u);
    wr32(self + 0x54u, t8);
    t9 = rd32(arg1 + 0x58u);
    wr32(self + 0x58u, t9);
    if (t7 == 0u)
    {
        ecx = t9;
        edx = t6;
    }
    else
    {
        eax = t8;
        edx = t6;
        ebx = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x1010a6a0u), ebx, 0);
        t11 = g->ecx;
        t12 = g->edx;
        g->ecx = t11;
        g->edx = t12;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
        t13 = g->ecx;
        t14 = g->edx;
        ecx = t13;
        edx = t14;
    }
    wr32(self + 0x24u, 0u);
    if (rd32(arg1 + 0x24u) == 0u)
    {
        eax = rd32(arg1 + 0x24u);
    }
    else
    {
        eax = rd32(arg1 + 0x24u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x28u, in_ebx, in_edi);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            ecx = t16;
            edx = t17;
            eax = 0u;
        }
        else
        {
            eax = t15;
            t18 = rd32(arg1 + 0x24u);
            g->eax = eax;
            g->edx = t18;
            g->esp = sp0 - 0xcu;
            t19 = cow_thiscall(g, COW_IMG(0x1010a6e0u), eax, 1, t18);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
        }
        wr32(self + 0x24u, eax);
    }
    if (rd32(self + 0x28u) != 0u)
    {
        ebx = rd32(self + 0x28u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_thiscall(g, COW_IMG(0x1010a6a0u), ebx, 0);
        t23 = g->ecx;
        t24 = g->edx;
        g->ecx = t23;
        g->edx = t24;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ebx);
        t25 = g->ecx;
        t26 = g->edx;
        ecx = t25;
        edx = t26;
    }
    wr32(self + 0x28u, 0u);
    if (rd32(arg1 + 0x28u) == 0u) goto L_101107ec;
    eax = rd32(arg1 + 0x28u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t27 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x28u, in_edi, in_esi);
    t28 = g->edx;
    if (t27 == 0u) goto L_101107e7;
    eax = t27;
    edx = t28;
    t29 = rd32(arg1 + 0x28u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x1010a6e0u), eax, 1, t29);
    wr32(self + 0x28u, t30);
    return self;
L_101107e7: ;
    wr32(self + 0x28u, 0u);
L_101107ec: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10110700(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
