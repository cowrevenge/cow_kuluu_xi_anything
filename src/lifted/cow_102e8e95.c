/* f_0x102e8e95 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e8e95(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 8u);
        if (rd32(arg1 + 0x470u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            ecx = rd32(arg1 + 0x470u);
            g->edx = rd32(eax);
            t1 = rd32(eax);
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t1 + 0xe0u), ecx, 2, eax, ecx);
            t2 = g->edx;
            wr32(arg1 + 0x470u, 0u);
            edx = t2;
        }
        if (rd32(arg1 + 0x48cu) != 0u)
        {
            ecx = rd32(arg1 + 0x48cu);
            t3 = rd32(arg1 + 8u);
            g->edx = rd32(rd32(arg1 + 8u));
            t4 = rd32(rd32(arg1 + 8u));
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t4 + 0xe0u), ecx, 2, t3, ecx);
            t5 = g->edx;
            wr32(arg1 + 0x48cu, 0u);
            edx = t5;
        }
        if (rd32(arg1 + 0x490u) != 0u)
        {
            ecx = rd32(arg1 + 0x490u);
            t6 = rd32(arg1 + 8u);
            g->edx = rd32(rd32(arg1 + 8u));
            t7 = rd32(rd32(arg1 + 8u));
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(t7 + 0xe0u), ecx, 2, t6, ecx);
            t8 = g->edx;
            wr32(arg1 + 0x490u, 0u);
            edx = t8;
        }
    }
    if (rd32(arg1 + 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x20u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t9 = g->edx;
        wr32(arg1 + 0x20u, 0u);
        edx = t9;
    }
    if (rd32(arg1 + 0x24u) != 0u)
    {
        eax = rd32(arg1 + 0x24u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t10 = g->edx;
        wr32(arg1 + 0x24u, 0u);
        edx = t10;
    }
    if (rd32(arg1 + 0x28u) != 0u)
    {
        eax = rd32(arg1 + 0x28u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t11 = g->edx;
        wr32(arg1 + 0x28u, 0u);
        edx = t11;
    }
    if (rd32(arg1 + 0x2cu) != 0u)
    {
        eax = rd32(arg1 + 0x2cu);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t12 = g->edx;
        wr32(arg1 + 0x2cu, 0u);
        edx = t12;
    }
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t13 = g->edx;
        wr32(arg1 + 0x34u, 0u);
        edx = t13;
    }
    if (rd32(arg1 + 0x30u) != 0u)
    {
        eax = rd32(arg1 + 0x30u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t14 = g->edx;
        wr32(arg1 + 0x30u, 0u);
        edx = t14;
    }
    ebp = 2u;
    edi = arg1 + 0x40u;
L_102e8f5a: ;
    if (rd32(edi - 8u) != 0u)
    {
        eax = rd32(edi - 8u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t15 = g->edx;
        wr32(edi - 8u, 0u);
        edx = t15;
    }
    if (rd32(edi) != 0u)
    {
        eax = rd32(edi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t16 = g->edx;
        wr32(edi, 0u);
        edx = t16;
    }
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_102e8f5a;
    }
    ebp = 5u;
    esi = arg1 + 0x54u;
L_102e8f84: ;
    edi = 2u;
L_102e8f87: ;
    if (rd32(esi - 4u) != 0u)
    {
        eax = rd32(esi - 4u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t17 = g->edx;
        wr32(esi - 4u, 0u);
        edx = t17;
    }
    if (rd32(esi) != 0u)
    {
        eax = rd32(esi);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t18 = g->edx;
        wr32(esi, 0u);
        edx = t18;
    }
    if (edi != 1u)
    {
        esi = esi + 0x68u;
        edi = edi - 1u;
        goto L_102e8f87;
    }
    esi = esi + 0x68u;
    if (ebp != 1u)
    {
        ebp = ebp - 1u;
        goto L_102e8f84;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e8e95(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e8e95(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
