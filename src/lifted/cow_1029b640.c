/* f_0x1029b640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1029b640(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q18;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa04u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0xa04u, 0u);
    if (!(rd8(rd32(COW_IMG(0x1099d200u)) + 0xa30u) & 1u))
    {
        ebx = t1;
        wr32(ebx, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        ebx = t1;
        t2 = rd32(eax + 0x958u);
        wr32(ebx, t2);
    }
    if ((rd8(rd32(COW_IMG(0x1099d200u)) + 0xa30u) & 2u) == 0u)
    {
        wr32(ebx + 4u, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        t3 = rd32(eax + 0x960u);
        wr32(ebx + 4u, t3);
    }
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    eax = ebx + 8u;
    ecx = 0u;
    edi = 0x960u - ebx;
L_1029b6a4: ;
    if ((int32_t)ecx >= (int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u)) goto L_1029b6c8;
    esi = rd32(COW_IMG(0x1099d200u));
    if ((rd8(esi + 0xa30u) & 4u) == 0u) goto L_1029b6c8;
    t4 = rd32(eax + edi + esi);
    wr32(eax, t4);
L_1029b6ca: ;
    if ((int32_t)(ecx + 1u) < 2)
    {
        eax = eax + 4u;
        ecx = ecx + 1u;
        goto L_1029b6a4;
    }
    if ((rd8(rd32(COW_IMG(0x1099d200u)) + 0xa30u) & 8u) == 0u)
    {
        wr32(ebx + 0x10u, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        t5 = rd32(eax + 0x988u);
        wr32(ebx + 0x10u, t5);
    }
    if ((rd8(rd32(COW_IMG(0x1099d200u)) + 0xa30u) & 0x10u) == 0u)
    {
        wr32(ebx + 0x14u, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        t6 = rd32(eax + 0x978u);
        wr32(ebx + 0x14u, t6);
    }
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x95cu, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x964u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x970u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x974u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x98cu, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x97cu, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x958u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x960u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x968u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x96cu, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x988u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x978u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
    wr32(ebx + 0x18u, t7);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x65u);
        wr32(sp0 - 0x2cu, 0x208u);
        wr32(sp0 - 0x30u, eax * 2u);
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x60u), rd32(COW_IMG(0x1066941cu)), 6, rd32(COW_IMG(0x1066941cu)), eax * 2u, 0x208u, 0x65u, 0u, sp0 - 0xcu);
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 4u);
        t8 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u) * 2u;
        wr32(sp0 - 0x28u, t8);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        g->edx = t8;
        cow_thiscall(g, rd32(rd32(0u) + 0x2cu), rd32(0u), 5, 0u, 0u, t8, sp0 - 4u, 0x2000u);
        t9 = g->edx;
        t10 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u) * 2u;
        t11 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu);
        t12 = rd32(sp0 - 4u);
        esi = t11;
        edi = t12;
        ecx = t10 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t10 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(sp0 - 0x20u, 0u);
        cow_thiscall(g, rd32(rd32(0u) + 0x30u), rd32(0u), 1, 0u);
    }
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u) != 0u)
    {
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x65u);
        wr32(sp0 - 0x2cu, 0x208u);
        wr32(sp0 - 0x30u, ecx * 2u);
        wr32(sp0 - 0x34u, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x60u), ecx * 2u, 6, rd32(COW_IMG(0x1066941cu)), ecx * 2u, 0x208u, 0x65u, 0u, sp0 - 8u);
        wr32(sp0 - 0x20u, 0x2000u);
        wr32(sp0 - 0x24u, sp0 - 4u);
        t13 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u) * 2u;
        wr32(sp0 - 0x28u, t13);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        cow_thiscall(g, rd32(rd32(0u) + 0x2cu), t13, 5, 0u, 0u, t13, sp0 - 4u, 0x2000u);
        t14 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u) * 2u;
        t15 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa14u);
        t16 = rd32(sp0 - 4u);
        esi = t15;
        edi = t16;
        ecx = t14 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t14 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(sp0 - 0x20u, 0u);
        cow_thiscall(g, rd32(rd32(0u) + 0x30u), rd32(0u), 1, 0u);
    }
    t17 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa08u) - 2u;
    wr32(ebx + 0x20u, t17);
    wr32(ebx + 0x1cu, 0u);
    q18 = (int64_t)cow_muls(0x55555556u, rd32(rd32(COW_IMG(0x1099d200u)) + 0xa10u));
    t19 = cow_qhi(q18) + (cow_qhi(q18) >> 0x1fu);
    wr32(ebx + 0x28u, t19);
    wr32(ebx + 0x24u, 0u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu);
        edx = rd32(COW_IMG(0x1099d200u));
        wr32(sp0 - 0x18u, 0x6bu);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bc70cu));
        wr32(sp0 - 0x20u, eax);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bc70cu), 0x6bu);
    }
    wr32(rd32(COW_IMG(0x1099d200u)) + 0xa0cu, 0u);
    t20 = rd32(COW_IMG(0x1099d200u));
    wr32(t20 + 0xa08u, 0u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xa14u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa14u);
        ecx = t20;
        edx = rd32(COW_IMG(0x1099d200u));
        wr32(sp0 - 0x18u, 0x70u);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bc70cu));
        wr32(sp0 - 0x20u, eax);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103bc70cu), 0x70u);
    }
    wr32(rd32(COW_IMG(0x1099d200u)) + 0xa14u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0xa10u, 0u);
    return ebx;
L_1029b6c8: ;
    wr32(eax, 0u);
    goto L_1029b6ca;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029b640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
