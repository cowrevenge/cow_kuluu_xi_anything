/* f_0x102a9dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102a9dd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(sp0 + 8u) == 0u)
    {
        eax = in_eax;
        goto L_102a9e24;
    }
    edi = rd32(sp0 + 8u);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        goto L_102a9e24;
    }
    esi = rd32(sp0 + 4u);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    t1 = rd32(esi + 0x14u);
    wr32(sp0 - 4u, t1);
    g->ecx = sp0 - 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 4u, 4u, 1u, edi);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 1u) goto L_102a9e2c;
    eax = t2;
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x14u, 0x232u);
L_102a9e08: ;
    wr32(sp0 - 0x18u, COW_IMG(0x103be750u));
    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be750u));
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x20u, COW_IMG(0x103be960u));
    g->esp = sp0 - 0x18u;
    t25 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be960u), COW_IMG(0x103b379cu));
    eax = t25;
L_102a9e24: ;
    return eax & 0xffffff00u;
L_102a9e2c: ;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 + 8u, 0u);
    eax = 0u;
    loc_8 = 0u;
L_102a9e3a: ;
    t5 = rd32(eax * 4u + esi + 0x18u);
    t6 = rd32(eax * 4u + esi + 0x18u);
    wr32(sp0 + 4u, t5);
    if (t6 == 0u)
    {
        ecx = t5;
    }
    else
    {
        ecx = t5;
        wr32(sp0 - 8u, loc_8 + 1u);
        loc_8 = loc_8 + 1u;
    }
    wr32(sp0 + 8u, eax + 1u);
    if ((int32_t)(eax + 1u) < 12)
    {
        eax = eax + 1u;
        goto L_102a9e3a;
    }
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    g->ecx = ecx;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 - 8u, 4u, 1u, edi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 1u)
    {
        edx = t9;
        goto L_102a9e72;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x14u, 0x239u);
    goto L_102a9e08;
L_102a9e72: ;
    wr32(sp0 + 8u, 0u);
    eax = 0u;
L_102a9e78: ;
    t10 = rd32(eax * 4u + esi + 0x18u);
    t11 = rd32(eax * 4u + esi + 0x18u);
    wr32(sp0 + 4u, t10);
    if (t11 == 0u) goto L_102a9ee0;
    ecx = t10;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 8u, 4u, 1u, edi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 1u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_102a9ef2;
    }
    eax = t12;
    edx = t14;
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, eax, edi);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 1u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_102a9efc;
    }
    wr32(sp0 - 0x14u, edi);
    t18 = rd32(sp0 + 4u) * rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t18);
    wr32(sp0 - 0x1cu, 4u);
    t19 = rd32(esi + rd32(sp0 + 8u) * 4u + 0x54u);
    wr32(sp0 - 0x20u, t19);
    g->ecx = t18;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x10292200u), 4, t19, 4u, t18, edi);
    t21 = g->ecx;
    if (t20 != rd32(sp0 + 4u) * rd32(sp0 - 4u))
    {
        eax = t20;
        ecx = t21;
        edx = rd32(sp0 + 4u) * rd32(sp0 - 4u);
        goto L_102a9f06;
    }
    edx = rd32(sp0 + 4u) * rd32(sp0 - 4u);
    eax = rd32(sp0 + 8u);
L_102a9ee0: ;
    wr32(sp0 + 8u, eax + 1u);
    if ((int32_t)(eax + 1u) < 12)
    {
        eax = eax + 1u;
        goto L_102a9e78;
    }
    eax = eax + 1u;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return (eax & 0xffffff00u) | (uint8_t)(eax | 0xffu);
L_102a9ef2: ;
    wr32(sp0 - 0x14u, 0x23fu);
    goto L_102a9e08;
L_102a9efc: ;
    wr32(sp0 - 0x14u, 0x240u);
    goto L_102a9e08;
L_102a9f06: ;
    wr32(sp0 - 0x14u, 0x241u);
    goto L_102a9e08;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a9dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
