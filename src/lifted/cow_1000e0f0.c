/* f_0x1000e0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000e0f0(Guest* g)
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

    edx = in_edx;
    ebp = rd32(COW_IMG(0x10329370u));
L_1000e0fc: ;
    if ((uint32_t)(int8_t)rd8(rd32(self)) - 9u > 0x17u)
    {
        eax = rd32(self);
        ecx = (uint32_t)(int8_t)rd8(rd32(self)) - 9u;
        goto L_1000e11f;
    }
    eax = rd32(self);
    ecx = (uint32_t)(int8_t)rd8(rd32(self)) - 9u;
    t1 = rd32(COW_IMG(0x1000e204u) + rd8(COW_IMG(0x1000e20cu) + ecx) * 4u);
    edx = rd8(COW_IMG(0x1000e20cu) + ecx);
    switch (t1 - RD)
    {
    case 0x1000e118u: goto L_1000e118;
    case 0x1000e11fu: goto L_1000e11f;
    default: rt_fatal(g, COW_IMG(0x1000e111u), "switch");
    }
    return 0;
L_1000e118: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, ebp, ecx, 1, eax);
    t3 = g->edx;
    wr32(self, t2);
    edx = t3;
    goto L_1000e0fc;
L_1000e11f: ;
    if (rd8(rd32(self)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self));
        edi = rd32(self);
        goto L_1000e133;
    }
    return 0x80020009u;
L_1000e133: ;
    if ((uint8_t)eax != 0x27u)
    {
        ebx = rd32(sp0 + 4u);
        goto L_1000e1c0;
    }
    ebx = rd32(sp0 + 4u);
    wr32(sp0 + 4u, ebx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, ebp, ecx, 1, edi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self, t4);
    if (rd8(t4) == 0u)
    {
        edx = t6;
        goto L_1000e19a;
    }
    ecx = (t5 & 0xffffff00u) | rd8(t4);
    edx = t6;
L_1000e14e: ;
    if (rd8(rd32(self)) != 0x27u) goto L_1000e15d;
    eax = rd32(self);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, ebp, ecx, 1, eax);
    t8 = g->ecx;
    t9 = g->edx;
    if (rd8(t7) != 0x27u)
    {
        edx = t9;
        goto L_1000e19a;
    }
    ecx = t8;
    edx = t9;
L_1000e15d: ;
    if (rd8(rd32(self)) != 0x27u)
    {
        eax = rd32(self);
    }
    else
    {
        eax = rd32(self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall(g, ebp, ecx, 1, eax);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(self, t10);
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->eax = eax;
    t13 = rd32(self);
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, ebp, ecx, 1, t13);
    t15 = rd32(sp0 + 4u);
    wr32(self, t14);
    if (ebx + 2u >= t15 + 0x1000u) goto L_1000e1a1;
    eax = t14;
    ecx = t15 + 0x1000u;
    edi = t13;
    if (edi < eax)
    {
        eax = edi;
L_1000e187: ;
        wr8(ebx, rd8(eax));
        if (eax + 1u < rd32(self))
        {
            eax = eax + 1u;
            ecx = rd32(self);
            ebx = ebx + 1u;
            goto L_1000e187;
        }
        ecx = rd32(self);
        ebx = ebx + 1u;
    }
    if (rd8(rd32(self)) != 0u)
    {
        edx = rd32(self);
        goto L_1000e14e;
    }
    edx = rd32(self);
L_1000e19a: ;
    if (rd8(rd32(self)) != 0u)
    {
        eax = rd32(self);
        goto L_1000e1ad;
    }
L_1000e1a1: ;
    return 0x80020009u;
L_1000e1ad: ;
    wr8(ebx, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, ebp, rd32(self), 1, rd32(self));
    wr32(self, t16);
    return 0u;
L_1000e1c0: ;
    if ((uint32_t)(int8_t)eax - 9u > 0x17u)
    {
        eax = (uint32_t)(int8_t)eax - 9u;
        goto L_1000e1da;
    }
    eax = (uint32_t)(int8_t)eax - 9u;
    t17 = rd32(COW_IMG(0x1000e224u) + rd8(COW_IMG(0x1000e22cu) + eax) * 4u);
    switch (t17 - RD)
    {
    case 0x1000e1dau: edx = rd8(COW_IMG(0x1000e22cu) + eax); goto L_1000e1da;
    case 0x1000e1f7u: goto L_1000e1f7;
    default: rt_fatal(g, COW_IMG(0x1000e1d3u), "switch");
    }
    return 0;
L_1000e1da: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, ebp, ecx, 1, edi);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(self, t18);
    if (edi >= t18)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_1000e1ef;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
L_1000e1e3: ;
    wr8(ebx, rd8(edi));
    if (edi + 1u < rd32(self))
    {
        eax = rd32(self);
        ebx = ebx + 1u;
        edi = edi + 1u;
        goto L_1000e1e3;
    }
    eax = rd32(self);
    ebx = ebx + 1u;
L_1000e1ef: ;
    if (rd8(rd32(self)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(self));
        edi = rd32(self);
        goto L_1000e1c0;
    }
L_1000e1f7: ;
    wr8(ebx, 0u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000e0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000e0f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
