/* f_0x10206830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10206830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    t1 = (in_edx & 0xffff0000u) | rd16(rd32(rd32(COW_IMG(0x10664420u)) + 0xcu));
    t2 = (rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) & 0xffffff00u) | rd8(rd32(rd32(COW_IMG(0x10664420u)) + 0xcu) + 2u);
    g->eax = t2;
    g->edx = rd32(rd32(COW_IMG(0x10664420u)));
    t3 = rd32(COW_IMG(0x10664420u));
    t4 = rd32(rd32(COW_IMG(0x10664420u)));
    g->esp = sp0 - 4u;
    t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x54u), t3, 2, t2, t1);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100f0e10u), 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    g->eax = rd32(COW_IMG(0x10664420u));
    t10 = rd32(COW_IMG(0x10664420u));
    t11 = rd32(rd32(COW_IMG(0x10664420u)) + 0xcu);
    g->esp = sp0 - 4u;
    t12 = cow_fastcall(g, COW_IMG(0x103149e0u), t8, t9, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)(t12 & 0x80000001u) >= 0)
    {
        eax = t12 & 0x80000001u;
        ecx = t13;
        edx = t14;
        esi = t11 + 0x10u;
    }
    else
    {
        eax = t12 & 0x80000001u;
        ecx = t13;
        edx = t14;
        esi = t11 + 0x10u;
        eax = (eax - 1u | 0xfffffffeu) + 1u;
    }
    if ((int8_t)rd8(esi + 1u) >= 0) goto L_10206882;
    ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x8bu);
    return;
L_10206882: ;
    if (rd8(esi) > 0xbu) goto L_102068f0;
    ecx = rd8(esi);
    t15 = rd32(COW_IMG(0x102068f4u) + ecx * 4u);
    switch (t15 - RD)
    {
    case 0x10206892u: goto L_10206892;
    case 0x1020689eu: goto L_1020689e;
    case 0x102068acu: goto L_102068ac;
    case 0x102068bau: goto L_102068ba;
    case 0x102068c8u: goto L_102068c8;
    case 0x102068d6u: goto L_102068d6;
    case 0x102068e4u: goto L_102068e4;
    default: rt_fatal(g, COW_IMG(0x1020688bu), "switch");
    }
    return;
L_10206892: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, 0x3eu);
    return;
L_1020689e: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, eax + 0x3fu);
    return;
L_102068ac: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, eax + 0x41u);
    return;
L_102068ba: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, eax + 0x43u);
    return;
L_102068c8: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, eax + 0x45u);
    return;
L_102068d6: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, eax + 0x47u);
    return;
L_102068e4: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100a1860u), 1, eax + 0x49u);
L_102068f0: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10206830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10206830(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
