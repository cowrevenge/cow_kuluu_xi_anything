/* f_0x101e0a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e0a90(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    wr32(self, COW_IMG(0x10333360u));
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr8(self + 0x14u, 0u);
    wr16(self + 0x20u, 0u);
    eax = self + 0x36u;
    edx = self + 0x22u;
L_101e0ac8: ;
    wr8(eax - 0x21u, 0u);
    wr16(edx, 0u);
    wr8(eax, 0u);
    if ((int32_t)(eax - self - 0x35u) < 10)
    {
        eax = eax + 1u;
        edx = edx + 2u;
        goto L_101e0ac8;
    }
    ecx = eax - self - 0x35u;
    eax = eax + 1u;
    edx = edx + 2u;
    wr32(self, COW_IMG(0x10339250u));
    wr32(self + 0x4cu, 0u);
    if (rd32(COW_IMG(0x106634b0u)) == 0u)
    {
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x80u, in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            wr32(COW_IMG(0x106634b0u), 0u);
        }
        else
        {
            eax = t1;
            edx = t3;
            edi = t1;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
            t5 = g->ecx;
            t6 = g->edx;
            wr16(edi + 0xeu, 0xffffu);
            wr32(edi + 8u, 0u);
            wr8(edi + 0xcu, 1u);
            wr32(edi, COW_IMG(0x10339208u));
            wr32(COW_IMG(0x106634b0u), edi);
            eax = t4;
            ecx = t5;
            edx = t6;
        }
    }
    if (rd32(COW_IMG(0x106634b4u)) == 0u)
    {
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x50u, in_edi, in_esi);
        t8 = g->ecx;
        t9 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            wr32(COW_IMG(0x106634b4u), 0u);
        }
        else
        {
            eax = t7;
            edx = t9;
            edi = t7;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t10 = cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
            t11 = g->ecx;
            t12 = g->edx;
            wr16(edi + 0xeu, 0xffffu);
            wr32(edi + 8u, 0u);
            wr8(edi + 0xcu, 1u);
            wr32(edi, COW_IMG(0x103391c0u));
            wr32(COW_IMG(0x106634b4u), edi);
            eax = t10;
            ecx = t11;
            edx = t12;
        }
    }
    if (rd32(COW_IMG(0x106634d0u)) == 0u)
    {
        g->esp = sp0 - 4u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 8u, in_edi, in_esi);
        t14 = g->edx;
        if (t13 == 0u)
        {
            eax = t13;
            edx = t14;
            wr32(COW_IMG(0x106634d0u), 0u);
        }
        else
        {
            eax = t13;
            edx = t14;
            wr32(eax, COW_IMG(0x10339158u));
            wr32(COW_IMG(0x106634d0u), eax);
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x101e06c0u), self, 0);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101e0700u), self, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (rd32(COW_IMG(0x106634b8u)) != 0u)
    {
        eax = t17;
        edx = t19;
        goto L_101e0bd9;
    }
    ecx = t18;
    edx = t19;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x16cu, in_edi, in_esi);
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_101e0bd3;
    }
    eax = t20;
    edx = t21;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x101e1a00u), eax, 0);
    t23 = g->edx;
    wr32(COW_IMG(0x106634b8u), t22);
    cow_thiscall(g, COW_IMG(0x101e15f0u), self, 0);
    return self;
L_101e0bd3: ;
    wr32(COW_IMG(0x106634b8u), 0u);
L_101e0bd9: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101e15f0u), self, 0);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0a90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
