/* f_0x100677a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100677a0(Guest* g)
{
    uint32_t al_m70c;
    uint32_t al_m72c;
    double d18;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 1864u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x720u, in_ebx);
    wr32(sp1 - 0x724u, in_esi);
    wr32(sp1 - 0x728u, in_edi);
    g->esp = sp1 - 0x728u;
    cow_fastcall(g, COW_IMG(0x10067930u), sp1 - 0x718u, in_edx, 0);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp1 - 0x608u, 0);
    t2 = g->edx;
    wr32(sp1 - 0x72cu, arg2);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100680d0u), sp1 - 0x608u, 1, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp1 - 0x70cu, t3);
    if ((int32_t)t3 <= 0)
    {
        ecx = t4;
        goto L_100678c9;
    }
    edx = t5;
    edi = 0u;
    al_m70c = t3;
L_100677e4: ;
    wr32(sp1 - 0x72cu, edi);
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t6 = cow_thiscall(g, COW_IMG(0x10068050u), sp1 - 0x608u, 1, edi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp1 - 0x72cu, t6);
    g->edx = t8;
    t9 = cow_cdecl(g, COW_IMG(0x10064470u), 1, t6);
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        ecx = sp1 - 0x608u;
        edx = t10;
        goto L_1006789e;
    }
    ecx = sp1 - 0x608u;
    edx = t10;
    wr32(sp1 - 0x72cu, 1u);
    wr32(sp1 - 0x730u, edi);
    g->edx = edx;
    g->esp = sp1 - 0x72cu;
    t11 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, edi);
    t12 = g->edx;
    wr32(sp1 - 0x730u, t11);
    g->ebp = sp0 - 4u;
    g->edx = t12;
    g->esp = sp1 - 0x728u;
    t13 = cow_thiscall(g, COW_IMG(0x10064230u), self + 4u, 2, t11, 1u);
    t14 = g->edx;
    if (t13 == 0u)
    {
        edx = t14;
        goto L_10067897;
    }
    edx = t14;
    esi = t13;
    if (rd32(esi + 0x14u) == 2u)
    {
        wr32(sp1 - 0x72cu, COW_IMG(0x10354014u));
        g->edx = edx;
        g->esp = sp1 - 0x728u;
        cow_thiscall(g, COW_IMG(0x10067cd0u), sp1 - 0x718u, 1, COW_IMG(0x10354014u));
        t15 = g->edx;
        edx = t15;
    }
    if (rd32(esi + 0x10u) - 1u > 4u) goto L_100678ae;
    eax = rd32(esi + 0x10u) - 1u;
    t16 = rd32(COW_IMG(0x100678fcu) + eax * 4u);
    switch (t16 - RD)
    {
    case 0x10067844u: goto L_10067844;
    case 0x1006784au: goto L_1006784a;
    case 0x1006786au: goto L_1006786a;
    case 0x10067890u: goto L_10067890;
    default: rt_fatal(g, COW_IMG(0x1006783du), "switch");
    }
    return 0;
L_10067844: ;
    t22 = rd32(esi + 0x18u);
    wr32(sp1 - 0x72cu, t22);
    al_m72c = t22;
L_100678a5: ;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    cow_thiscall(g, COW_IMG(0x10067cd0u), sp1 - 0x718u, 1, al_m72c);
    t25 = g->edx;
    edx = t25;
L_100678ae: ;
    wr32(sp1 - 0x72cu, COW_IMG(0x1034f2b8u));
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    cow_thiscall(g, COW_IMG(0x10067cd0u), sp1 - 0x718u, 1, COW_IMG(0x1034f2b8u));
    t26 = g->ecx;
    t27 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp1 - 0x70cu))
    {
        edx = t27;
        edi = edi + 1u;
        goto L_100677e4;
    }
    ecx = t26;
L_100678c9: ;
    eax = rd32(sp1 - 0x714u);
    edx = arg1 - rd32(sp1 - 0x714u);
L_100678d2: ;
    t28 = rd8(eax);
    wr8(eax + edx, (uint8_t)t28);
    if ((uint8_t)t28 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t28;
        goto L_100678d2;
    }
    eax = eax + 1u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t29 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x10067950u), sp1 - 0x718u, 0);
    t32 = g->edx;
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    g->edx = t32;
    return t31;
L_1006784a: ;
    g->esp = sp1 - 0x728u;
    t19 = cow_thiscall(g, COW_IMG(0x100643f0u), esi, 0);
    t20 = g->ecx;
    wr32(sp1 - 0x72cu, t19);
    wr32(sp1 - 0x730u, COW_IMG(0x10352ff0u));
    wr32(sp1 - 0x734u, sp1 - 0x708u);
    g->ebx = self;
    g->edx = sp1 - 0x708u;
    g->esp = sp1 - 0x720u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x708u, COW_IMG(0x10352ff0u), t19, rd32(sp1 - 0x728u), rd32(sp1 - 0x724u));
    t21 = g->edx;
    eax = sp1 - 0x708u;
    edx = t21;
L_100678a4: ;
    wr32(sp1 - 0x72cu, eax);
    al_m72c = eax;
    goto L_100678a5;
L_1006786a: ;
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    cow_thiscall(g, COW_IMG(0x10064400u), esi, 0);
    t17 = g->edx;
    d18 = cow_take_float(g);
    wrf64(sp1 - 0x730u, d18);
    wr32(sp1 - 0x734u, COW_IMG(0x10353bacu));
    wr32(sp1 - 0x738u, sp1 - 0x708u);
    g->ebx = self;
    g->esp = sp1 - 0x724u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x708u, COW_IMG(0x10353bacu), cow_dlo(d18), cow_dhi(d18), rd32(sp1 - 0x728u));
    wr32(sp1 - 0x72cu, sp1 - 0x708u);
    edx = sp1 - 0x708u;
    al_m72c = sp1 - 0x708u;
    goto L_100678a5;
L_10067890: ;
    wr32(sp1 - 0x72cu, COW_IMG(0x10354010u));
    al_m72c = COW_IMG(0x10354010u);
    goto L_100678a5;
L_10067897: ;
    ecx = sp1 - 0x608u;
L_1006789e: ;
    wr32(sp1 - 0x72cu, edi);
    g->edx = edx;
    g->esp = sp1 - 0x728u;
    t23 = cow_thiscall(g, COW_IMG(0x10068050u), ecx, 1, edi);
    t24 = g->edx;
    eax = t23;
    edx = t24;
    goto L_100678a4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100677a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100677a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
