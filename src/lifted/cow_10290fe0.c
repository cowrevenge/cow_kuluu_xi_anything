/* f_0x10290fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10290fe0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_esi);
    if (rd32(arg2) != 0xa0009u)
    {
        ecx = self;
        goto L_10291009;
    }
    if (rd32(arg2 + 0x50u) == 0u)
    {
        ecx = rd32(arg2 + 0x50u);
        goto L_10291009;
    }
    ecx = rd32(arg2 + 0x50u);
    wr32(sp0 - 8u, COW_IMG(0x103bad58u));
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bad58u), in_esi);
    return arg2;
L_10291009: ;
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(arg1 + 0x98u) == 0u)
    {
        edx = in_edx;
        esi = 0u;
        edi = rd32(arg2 + 0x34u);
    }
    else
    {
        edi = rd32(arg2 + 0x34u);
        if (rd32(edi + 0x58u) != 0u)
        {
            edx = in_edx;
            esi = 2u;
        }
        else
        {
            eax = rd32(edi + 0x58u);
            wr32(sp0 - 0x10u, COW_IMG(0x103bad30u));
            g->ecx = ecx;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bad30u), in_edi);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
            esi = 2u;
        }
    }
    if (rd32(arg1 + 0x4cu) != 0u)
    {
        if (rd32(edi + 0x5cu) != 0u)
        {
            esi = esi | 4u;
        }
        else
        {
            eax = rd32(edi + 0x5cu);
            esi = esi | 4u;
            wr32(sp0 - 0x10u, COW_IMG(0x103bad0cu));
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bad0cu), in_edi);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
        }
    }
    if (rd32(arg1 + 0xa8u) != 0u)
    {
        if (rd32(edi + 0x60u) != 0u)
        {
            esi = esi | 1u;
        }
        else
        {
            eax = rd32(edi + 0x60u);
            esi = esi | 1u;
            wr32(sp0 - 0x10u, COW_IMG(0x103bace4u));
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bace4u), in_edi);
            t5 = g->ecx;
            ecx = t5;
        }
    }
    wr32(sp0 - 0x10u, (uint32_t)((int32_t)esi >> 0x1fu));
    wr32(sp0 - 0x14u, esi);
    g->eax = esi;
    g->ecx = ecx;
    g->edx = (uint32_t)((int32_t)esi >> 0x1fu);
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, esi, (uint32_t)((int32_t)esi >> 0x1fu));
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x1029b5e0u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, arg2);
    g->ecx = t9;
    g->edx = t10;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10285870u), 1, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x1cu;
    t13 = cow_stdcall(g, COW_IMG(0x1029b640u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    cow_stdcall(g, COW_IMG(0x102a3780u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    t18 = cow_stdcall(g, COW_IMG(0x102a2020u), 0);
    wr32(t18 + 0x44u, t13);
    wr32(sp0 - 0x20u, arg2 + 0x14u);
    wr32(sp0 - 0x24u, t18 + 0x14u);
    g->ecx = arg2 + 0x14u;
    g->edx = t18 + 0x14u;
    cow_cdecl(g, COW_IMG(0x1028d9e0u), 2, t18 + 0x14u, arg2 + 0x14u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10285760u), 1, sp0 + 8u);
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10290fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10290fe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
