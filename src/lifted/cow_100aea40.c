/* f_0x100aea40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100aea40(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd8(COW_IMG(0x10487e48u));
    wr32(COW_IMG(0x1048990cu), 0u);
    if ((uint8_t)t1 != 0u)
    {
        eax = (in_eax & 0xffffff00u) | t1;
        goto L_100aea56;
    }
    eax = (in_eax & 0xffffff00u) | t1;
    return (eax & 0xffffff00u) | 1u;
L_100aea56: ;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x100aec60u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0xffffffffu)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_100aea72;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    t5 = (eax & 0xffff0000u) | rd16(COW_IMG(0x104897e8u));
    g->eax = t5;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x100aeb80u), 1, t5);
    eax = t6;
L_100aea6f: ;
    return eax & 0xffffff00u;
L_100aea72: ;
    wr32(COW_IMG(0x1048990cu), 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0xffffffffu)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_100aea99;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    t10 = (ecx & 0xffff0000u) | rd16(COW_IMG(0x104886d8u));
    g->eax = eax;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x100ae1e0u), g->eax, g->ecx, edx, 1, 1, t10);
    return t11 & 0xffffff00u;
L_100aea99: ;
    wr32(COW_IMG(0x1048990cu), 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 1u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    else
    {
        ecx = t13;
        g->ecx = ecx;
        t15 = rd32(COW_IMG(0x10489908u));
        t16 = rd32(COW_IMG(0x104897f0u));
        g->esp = sp0;
        t17 = cow_call_regs(g, COW_IMG(0x1008a890u), t15, g->ecx, t16, 1, 2, t15, t16);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    wr32(COW_IMG(0x1048990cu), 3u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t20 = cow_stdcall(g, COW_IMG(0x100aec60u), 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        goto L_100aea6f;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t23 = cow_stdcall(g, COW_IMG(0x100ae350u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == 0u)
    {
        eax = t23;
        goto L_100aea6f;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t26 = cow_stdcall(g, COW_IMG(0x100aeea0u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u) goto L_100aeaef;
    eax = t26;
    ecx = t27;
    edx = t28;
    g->esp = sp0;
    t29 = cow_call_regs(g, COW_IMG(0x100aecc0u), eax, g->ecx, g->edx, 1, 0);
    return t29 & 0xffffff00u;
L_100aeaef: ;
    wr32(COW_IMG(0x1048990cu), 4u);
    esi = COW_IMG(0x10480af0u);
    edi = 0u;
L_100aeb02: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        if (rd32(eax + 0x120u) >> 7u & 1u)
        {
            ecx = rd32(eax + 0x120u) >> 7u;
            if (rd8(rd32(eax + 0xd4u) + 0x25bu) == 0u)
            {
                t30 = rd32(eax + 4u);
                wr32(eax + 0x24u, t30);
                t31 = rd32(eax + 8u);
                wr32(eax + 0x28u, t31);
                t32 = rd32(eax + 0xcu);
                wr32(eax + 0x2cu, t32);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t33 = cow_thiscall(g, COW_IMG(0x100bcdd0u), rd32(rd32(esi) + 0xd4u), 0);
                eax = t33;
                edi = edi + 1u;
            }
        }
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10482ef0u))
    {
        esi = esi + 4u;
        goto L_100aeb02;
    }
    if (edi != 0u) goto L_100aea6f;
    t34 = rd8(COW_IMG(0x104886b8u));
    wr8(COW_IMG(0x10488b00u), 1u);
    wr8(COW_IMG(0x10485a70u), (uint8_t)t34);
    wr32(COW_IMG(0x1048990cu), 5u);
    return ((eax | t34) & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aea40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100aea40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
