/* f_0x10144d60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10144d60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t4;
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

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x10334470u));
    wr32(self + 0x18u, 0u);
    wr8(self + 0x16u, 0u);
    if (rd32(COW_IMG(0x105782bcu)) != 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
            wr32(COW_IMG(0x105782bcu), 0u);
        }
        else
        {
            eax = t3;
            edx = t5;
            esi = t3;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10334428u));
            wr32(COW_IMG(0x105782bcu), esi);
            ecx = t6;
            edx = t7;
        }
    }
    if (rd32(COW_IMG(0x105782c0u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_edi, in_esi);
        t9 = g->ecx;
        t10 = g->edx;
        if (t8 == 0u)
        {
            ecx = t9;
            edx = t10;
            wr32(COW_IMG(0x105782c0u), 0u);
        }
        else
        {
            eax = t8;
            edx = t10;
            esi = t8;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t11 = g->ecx;
            t12 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x103343e0u));
            wr32(esi + 0x14u, 0u);
            wr8(esi + 0x35u, 0u);
            wr8(esi + 0x34u, 0u);
            wr32(COW_IMG(0x105782c0u), esi);
            ecx = t11;
            edx = t12;
        }
    }
    if (rd32(COW_IMG(0x105782c4u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t14 = g->ecx;
        t15 = g->edx;
        if (t13 == 0u)
        {
            ecx = t14;
            edx = t15;
            wr32(COW_IMG(0x105782c4u), 0u);
        }
        else
        {
            eax = t13;
            edx = t15;
            esi = t13;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t16 = g->ecx;
            t17 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10334398u));
            wr32(COW_IMG(0x105782c4u), esi);
            ecx = t16;
            edx = t17;
        }
    }
    if (rd32(COW_IMG(0x105782b8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2cu, in_edi, in_esi);
        t19 = g->ecx;
        t20 = g->edx;
        if (t18 == 0u)
        {
            ecx = t19;
            edx = t20;
            wr32(COW_IMG(0x105782b8u), 0u);
        }
        else
        {
            eax = t18;
            edx = t20;
            esi = t18;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t21 = g->ecx;
            t22 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10334350u));
            wr32(COW_IMG(0x105782b8u), esi);
            ecx = t21;
            edx = t22;
        }
    }
    if (rd32(COW_IMG(0x105782c8u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t23 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t24 = g->ecx;
        t25 = g->edx;
        if (t23 == 0u)
        {
            ecx = t24;
            edx = t25;
            wr32(COW_IMG(0x105782c8u), 0u);
        }
        else
        {
            eax = t23;
            edx = t25;
            esi = t23;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
            t26 = g->ecx;
            t27 = g->edx;
            wr16(esi + 0xeu, 0xffffu);
            wr32(esi + 8u, 0u);
            wr8(esi + 0xcu, 1u);
            wr32(esi, COW_IMG(0x10334308u));
            wr32(COW_IMG(0x105782c8u), esi);
            ecx = t26;
            edx = t27;
        }
    }
    if (rd32(COW_IMG(0x105782ccu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t28 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
        t29 = g->ecx;
        t30 = g->edx;
        if (t28 == 0u)
        {
            ecx = t29;
            edx = t30;
            wr32(COW_IMG(0x105782ccu), 0u);
        }
        else
        {
            edx = t30;
            esi = t28;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
            t31 = g->ecx;
            t32 = g->edx;
            wr32(esi, COW_IMG(0x103342c0u));
            wr32(COW_IMG(0x105782ccu), esi);
            ecx = t31;
            edx = t32;
        }
    }
    if (rd32(COW_IMG(0x105782d0u)) != 0u) goto L_10144f39;
    g->esp = sp0 - 8u;
    t33 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x18u, in_edi, in_esi);
    t34 = g->edx;
    if (t33 == 0u) goto L_10144f33;
    edx = t34;
    esi = t33;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10144f40u), esi, 0);
    wr32(esi, COW_IMG(0x103342c0u));
    wr32(COW_IMG(0x105782d0u), esi);
    return self;
L_10144f33: ;
    wr32(COW_IMG(0x105782d0u), 0u);
L_10144f39: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144d60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144d60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
