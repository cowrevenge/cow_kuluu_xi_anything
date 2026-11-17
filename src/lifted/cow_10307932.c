/* f_0x10307932 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10307932(Guest* g)
{
    uint32_t ebp;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    g->edx = in_edx;
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 1u, 0x2cu);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(arg1 + 0x1a4u, t2);
    wr32(t2, COW_IMG(0x10307821u));
    wr32(t2 + 0xcu, COW_IMG(0x10307923u));
    wr32(t2 + 0x20u, 0u);
    wr32(t2 + 0x28u, 0u);
    if (rd32(arg1 + 0x64u) == 3u)
    {
        ecx = t3;
        edx = t4;
        edi = t2;
    }
    else
    {
        ecx = t3;
        edx = t4;
        edi = t2;
        wr32(rd32(arg1) + 0x14u, 0x2eu);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), ecx, 1, arg1);
        t5 = g->edx;
        ecx = arg1;
        edx = t5;
    }
    g->eax = rd32(arg1 + 4u);
    g->edx = edx;
    t6 = rd32(arg1 + 4u);
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall_cdecl(g, rd32(t6), ecx, 3, arg1, 1u, 0x80u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(edi + 0x18u, t7);
    ecx = t8;
    edx = t9;
    ebp = 0u;
L_1030798d: ;
    g->eax = rd32(arg1 + 4u);
    g->edx = edx;
    t10 = rd32(arg1 + 4u);
    g->esp = sp0 - 0x10u;
    t11 = cow_thiscall_cdecl(g, rd32(t10 + 4u), ecx, 3, arg1, 1u, 0x1000u);
    t12 = g->edx;
    t13 = rd32(edi + 0x18u);
    wr32(ebp + t13, t11);
    if ((int32_t)(ebp + 4u) < 128)
    {
        ecx = t13;
        edx = t12;
        ebp = ebp + 4u;
        goto L_1030798d;
    }
    ecx = t13;
    edx = t12;
    wr8(edi + 0x1cu, 1u);
    if (rd8(arg1 + 0x5au) == 0u)
    {
        wr32(edi + 0x10u, 0u);
    }
    else
    {
        if ((int32_t)rd32(arg1 + 0x54u) >= 8)
        {
            ebp = rd32(arg1 + 0x54u);
        }
        else
        {
            ebp = rd32(arg1 + 0x54u);
            wr32(rd32(arg1) + 0x14u, 0x37u);
            t14 = rd32(arg1);
            wr32(t14 + 0x18u, 8u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall_cdecl(g, rd32(rd32(arg1)), t14, 1, arg1);
            t15 = g->edx;
            ecx = arg1;
            edx = t15;
        }
        if ((int32_t)ebp > 256)
        {
            wr32(rd32(arg1) + 0x14u, 0x38u);
            t16 = rd32(arg1);
            wr32(t16 + 0x18u, 0x100u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall_cdecl(g, rd32(rd32(arg1)), t16, 1, arg1);
            t17 = g->edx;
            ecx = arg1;
            edx = t17;
        }
        g->eax = rd32(arg1 + 4u);
        g->edx = edx;
        t18 = rd32(arg1 + 4u);
        g->esp = sp0 - 0xcu;
        t19 = cow_thiscall_cdecl(g, rd32(t18 + 8u), ecx, 4, arg1, 1u, ebp, 3u);
        t20 = g->edx;
        wr32(edi + 0x10u, t19);
        wr32(edi + 0x14u, ebp);
        edx = t20;
    }
    if (rd32(arg1 + 0x4cu) != 0u)
    {
        wr32(arg1 + 0x4cu, 2u);
    }
    if (rd32(arg1 + 0x4cu) != 2u) goto L_10307a41;
    t21 = rd32(arg1 + 0x5cu) * 6u + 0xcu;
    g->eax = t21;
    g->edx = rd32(arg1 + 4u);
    t22 = rd32(arg1 + 4u);
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall_cdecl(g, rd32(t22 + 4u), 2u, 3, arg1, 1u, t21);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(edi + 0x20u, t23);
    g->esp = sp0;
    g->edx = t25;
    cow_tailcall(g, COW_IMG(0x1030776eu), arg1, t24, t25);
    return;
L_10307a41: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307932(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10307932(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
