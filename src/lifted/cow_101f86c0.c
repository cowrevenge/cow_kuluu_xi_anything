/* f_0x101f86c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101f86c0(Guest* g)
{
    uint32_t eax;
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
    t1 = cow_thiscall(g, COW_IMG(0x101ee230u), self, 5, 0u, 0u, 0u, 0u, 0x3f800000u);
    t2 = g->edx;
    wr32(self, COW_IMG(0x1033a8b8u));
    wr32(self + 0xfcu, 0xffffffffu);
    wr8(self + 0xa44u, 0u);
    wr32(self + 0x6c4u, 0u);
    wr32(self + 0x6c8u, 0u);
    wr16(self + 0x108u, 0xffffu);
    wr8(COW_IMG(0x106637a8u), 0u);
    wr8(COW_IMG(0x106637a9u), 0u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x101f92b0u), self, 0);
    t3 = g->edx;
    edi = self + 0x174u;
    eax = 0u;
    ecx = 0x140u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(COW_IMG(0x10663884u)) != 0u)
    {
        edx = t3;
    }
    else
    {
        edx = t3;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, in_edi, in_esi);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            ecx = t5;
            edx = t6;
            wr32(COW_IMG(0x10663884u), 0u);
        }
        else
        {
            eax = t4;
            edx = t6;
            edi = t4;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
            t7 = g->ecx;
            t8 = g->edx;
            wr16(edi + 0xeu, 0xffffu);
            wr32(edi + 8u, 0u);
            wr8(edi + 0xcu, 1u);
            wr32(edi, COW_IMG(0x1033a870u));
            wr32(COW_IMG(0x10663884u), edi);
            ecx = t7;
            edx = t8;
        }
    }
    if (rd32(COW_IMG(0x1066388cu)) == 0u)
    {
        g->esp = sp0 - 8u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x4cu, in_edi, in_esi);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
            wr32(COW_IMG(0x1066388cu), 0u);
        }
        else
        {
            eax = t9;
            edx = t11;
            edi = t9;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
            t12 = g->ecx;
            t13 = g->edx;
            wr16(edi + 0xeu, 0xffffu);
            wr32(edi + 8u, 0u);
            wr8(edi + 0xcu, 1u);
            wr32(edi, COW_IMG(0x1033a828u));
            wr32(edi + 0x38u, 0u);
            wr32(COW_IMG(0x1066388cu), edi);
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(COW_IMG(0x10663890u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, in_edi, in_esi);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            ecx = t15;
            edx = t16;
            wr32(COW_IMG(0x10663890u), 0u);
        }
        else
        {
            eax = t14;
            edx = t16;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t17 = cow_thiscall(g, COW_IMG(0x101fc2c0u), eax, 0);
            t18 = g->ecx;
            t19 = g->edx;
            wr32(COW_IMG(0x10663890u), t17);
            ecx = t18;
            edx = t19;
        }
    }
    if (rd32(COW_IMG(0x10663894u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x78u, in_edi, in_esi);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            ecx = t21;
            edx = t22;
            wr32(COW_IMG(0x10663894u), 0u);
        }
        else
        {
            eax = t20;
            edx = t22;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t23 = cow_thiscall(g, COW_IMG(0x101fb710u), eax, 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(COW_IMG(0x10663894u), t23);
            ecx = t24;
            edx = t25;
        }
    }
    if (rd32(COW_IMG(0x10663898u)) == 0u)
    {
        g->esp = sp0 - 8u;
        t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
        t27 = g->ecx;
        t28 = g->edx;
        if (t26 == 0u)
        {
            ecx = t27;
            edx = t28;
            wr32(COW_IMG(0x10663898u), 0u);
        }
        else
        {
            eax = t26;
            edx = t28;
            edi = t26;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
            t29 = g->ecx;
            t30 = g->edx;
            wr16(edi + 0xeu, 0xffffu);
            wr32(edi + 8u, 0u);
            wr8(edi + 0xcu, 1u);
            wr32(edi, COW_IMG(0x1033a7e0u));
            wr32(COW_IMG(0x10663898u), edi);
            ecx = t29;
            edx = t30;
        }
    }
    if (rd32(COW_IMG(0x1066389cu)) != 0u) goto L_101f8863;
    g->esp = sp0 - 8u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x70u, in_edi, in_esi);
    t32 = g->edx;
    if (t31 == 0u) goto L_101f885d;
    eax = t31;
    edx = t32;
    g->esp = sp0 - 0x10u;
    t33 = cow_thiscall(g, COW_IMG(0x101fcbc0u), eax, 0);
    wr32(COW_IMG(0x1066389cu), t33);
    return self;
L_101f885d: ;
    wr32(COW_IMG(0x1066389cu), 0u);
L_101f8863: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f86c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f86c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
