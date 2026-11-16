/* f_0x102f4813 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f4813(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x64u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x64u);
        t1 = rd32(self + 4u);
        g->edx = rd32(rd32(self + 4u));
        t2 = rd32(rd32(self + 4u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t2 + 0xe0u), ecx, 2, t1, ecx);
        t3 = g->edx;
        edx = t3;
    }
    if (rd32(self + 0x68u) != 0u)
    {
        ecx = rd32(self + 0x68u);
        t4 = rd32(self + 4u);
        g->edx = rd32(rd32(self + 4u));
        t5 = rd32(rd32(self + 4u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t5 + 0xe0u), ecx, 2, t4, ecx);
        t6 = g->edx;
        edx = t6;
    }
    ebx = 8u;
    edi = self + 0x10u;
L_102f4849: ;
    if (rd32(edi + 0x20u) != 0u)
    {
        eax = rd32(edi + 0x20u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t7 = g->edx;
        wr32(edi + 0x20u, 0u);
        edx = t7;
    }
    if (rd32(edi) != 0u)
    {
        eax = rd32(edi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t8 = g->edx;
        wr32(edi, 0u);
        edx = t8;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_102f4849;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t9 = g->edx;
        wr32(self + 0xcu, 0u);
        edx = t9;
    }
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t10 = g->edx;
        wr32(self + 4u, 0u);
        edx = t10;
    }
    if (rd32(self + 0x6cu) == 0u)
    {
        edi = rd32(COW_IMG(0x10329064u));
    }
    else
    {
        eax = rd32(self + 0x6cu);
        edi = rd32(COW_IMG(0x10329064u));
        if (rd32(self + 0xa8u) != 0u)
        {
            ecx = rd32(self + 0xa8u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, edi, ecx, 2, eax, ecx);
            t11 = g->edx;
            edx = t11;
        }
    }
    if (rd32(self + 0x6cu) == 0u)
    {
        ecx = rd32(self + 0x6cu);
    }
    else
    {
        ecx = rd32(self + 0x6cu);
        if (rd32(self + 0x9cu) != 0u)
        {
            eax = rd32(self + 0x9cu);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, edi, ecx, 2, ecx, eax);
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
        }
    }
    if (rd32(self + 0x98u) != 0u)
    {
        eax = rd32(self + 0x98u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(COW_IMG(0x1032905cu)), ecx, 1, eax);
        t14 = g->ecx;
        t15 = g->edx;
        ecx = t14;
        edx = t15;
    }
    if (rd32(self + 0x6cu) != 0u)
    {
        eax = rd32(self + 0x6cu);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(COW_IMG(0x10329054u)), ecx, 1, eax);
    }
    if (rd32(COW_IMG(0x109b2640u)) == 0u) goto L_102f4909;
    eax = COW_IMG(0x109b2640u);
L_102f48eb: ;
    if (rd32(eax) == self) goto L_102f48fb;
    ecx = rd32(eax);
    if (rd32(ecx + 0xacu) != 0u)
    {
        eax = ecx + 0xacu;
        goto L_102f48eb;
    }
    eax = ecx + 0xacu;
L_102f48fb: ;
    if (rd32(eax) != 0u)
    {
        ecx = rd32(eax);
        t16 = rd32(ecx + 0xacu);
        wr32(eax, t16);
    }
L_102f4909: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f4813(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f4813(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
