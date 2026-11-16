/* f_0x102160a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102160a0(Guest* g)
{
    double d4;
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_4;
    uint32_t sf;
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
    uint32_t t3;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    g->ecx = t2;
    g->edx = t3;
    d5 = fr(g, d4 * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        ecx = t7;
        edx = t8;
        goto L_102160d3;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    esi = 0u;
    edi = t6;
L_102160bb: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_stdcall(g, COW_IMG(0x10310a3cu), 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        zf = t9 == 0u;
        sf = (int32_t)t9 < 0;
        loc_4 = t9;
        goto L_102160d9;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    loc_4 = t9;
    if ((int32_t)(esi + 1u) < (int32_t)edi)
    {
        esi = esi + 1u;
        goto L_102160bb;
    }
    return eax;
L_102160d3: ;
    eax = self;
    zf = self == 0u;
    sf = (int32_t)self < 0;
    loc_4 = self;
L_102160d9: ;
    if (zf || sf) goto L_1021620d;
    ebp = 0u;
L_102160e7: ;
    g->eax = arg2;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x10310b02u), 2, ebp, arg2);
    t13 = g->ecx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t12;
        goto L_102161fd;
    }
    eax = t12;
    ecx = t13;
    edx = t12;
    if (ebp > 7u) goto L_102161fd;
    t14 = rd32(COW_IMG(0x10216214u) + ebp * 4u);
    switch (t14 - RD)
    {
    case 0x1021610fu: goto L_1021610f;
    case 0x1021611au: goto L_1021611a;
    case 0x10216125u: goto L_10216125;
    case 0x10216130u: goto L_10216130;
    case 0x1021613du: goto L_1021613d;
    case 0x1021614au: goto L_1021614a;
    case 0x10216199u: goto L_10216199;
    case 0x102161e8u: goto L_102161e8;
    default: rt_fatal(g, COW_IMG(0x10216108u), "switch");
    }
    return 0;
L_1021610f: ;
    t28 = rd32(edx + 8u);
    wr32(arg1 + 8u, t28);
    ecx = t28;
L_102161fd: ;
    if ((int32_t)(ebp + 1u) < 8)
    {
        ebp = ebp + 1u;
        goto L_102160e7;
    }
    eax = loc_4;
L_1021620d: ;
    return eax;
L_1021611a: ;
    t27 = rd32(edx + 8u);
    wr32(arg1 + 0xcu, t27);
    edx = t27;
    goto L_102161fd;
L_10216125: ;
    t26 = rd32(edx + 8u);
    wr32(arg1 + 0x10u, t26);
    goto L_102161fd;
L_10216130: ;
    t25 = rd16(edx + 8u);
    wr16(arg1 + 0x14u, (uint16_t)t25);
    ecx = (ecx & 0xffff0000u) | t25;
    goto L_102161fd;
L_1021613d: ;
    t24 = rd16(edx + 8u);
    wr16(arg1 + 0x16u, (uint16_t)t24);
    edx = (edx & 0xffff0000u) | t24;
    goto L_102161fd;
L_1021614a: ;
    edi = arg1 + 0x18u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t19 = rd32(edx + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), t19, g->ecx, g->edx, 1, 3, arg1 + 0x18u, t19, 0x100u);
    t20 = g->ecx;
    t21 = g->edx;
    eax = arg1 + 0x117u;
    ecx = t20;
    edx = t21;
L_10216170: ;
    if (eax <= arg1 + 0x18u) goto L_10216188;
    if (rd8(eax) != 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_10216181;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    wr8(eax, 0u);
    eax = eax - 1u;
    goto L_10216170;
L_10216181: ;
    if ((uint8_t)ecx != 0u) goto L_10216188;
    eax = eax - 1u;
    goto L_10216170;
L_10216188: ;
    if (rd8(arg1 + 0x18u) != 0xau) goto L_102161fd;
    ecx = arg1 + 0x19u;
    loc_18 = 0xffu;
    loc_1c = arg1 + 0x19u;
    loc_20 = arg1 + 0x18u;
L_102161f5: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, loc_20, loc_1c, loc_18);
    t22 = g->ecx;
    t23 = g->edx;
    ecx = t22;
    edx = t23;
    goto L_102161fd;
L_10216199: ;
    edi = arg1 + 0x118u;
    eax = 0u;
    ecx = 0x3e8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t16 = rd32(edx + 8u);
    g->ecx = ecx;
    g->edx = t16;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1 + 0x118u, t16, 0xfa0u);
    t17 = g->ecx;
    t18 = g->edx;
    eax = arg1 + 0x10b7u;
    ecx = t17;
    edx = t18;
L_102161c2: ;
    if (eax <= arg1 + 0x118u) goto L_102161d7;
    if (rd8(eax) == 0x20u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_102161d4;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx != 0u) goto L_102161d7;
    eax = eax - 1u;
    goto L_102161c2;
L_102161d4: ;
    wr8(eax, 0u);
L_102161d7: ;
    if (rd8(arg1 + 0x118u) != 0xau) goto L_102161fd;
    eax = arg1 + 0x119u;
    loc_18 = 0xf9fu;
    loc_1c = arg1 + 0x119u;
    loc_20 = arg1 + 0x118u;
    goto L_102161f5;
L_102161e8: ;
    t15 = rd32(edx + 8u);
    ecx = t15;
    edx = arg1 + 0x10b8u;
    loc_18 = 2u;
    loc_1c = t15;
    loc_20 = arg1 + 0x10b8u;
    goto L_102161f5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102160a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102160a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
