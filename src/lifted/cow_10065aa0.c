/* f_0x10065aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10065aa0(Guest* g)
{
    uint32_t al_m20c;
    uint32_t al_m210;
    uint32_t al_m214;
    uint32_t al_m218;
    uint32_t al_m21c;
    double d14;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 564u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x208u, sp0 - 4u);
    wr32(sp1 - 0x20cu, in_esi);
    wr32(sp1 - 0x210u, in_edi);
    g->edx = in_edx;
    g->esp = sp1 - 0x210u;
    t1 = cow_thiscall(g, COW_IMG(0x1006bb10u), self + 0x10cu, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1006bb40u), self + 0x10cu, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1006bb40u), self + 0x10cu, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        ecx = t6;
        edx = t7;
        ebp = 0u;
        goto L_10065b4e;
    }
    eax = t5;
    edx = t7;
    ebp = 0u;
L_10065ad0: ;
    if (rd32(eax + 0x10u) > 4u) goto L_10065bae;
    ecx = rd32(eax + 0x10u);
    t8 = rd32(COW_IMG(0x10065bb8u) + ecx * 4u);
    switch (t8 - RD)
    {
    case 0x10065ae3u: goto L_10065ae3;
    case 0x10065af7u: goto L_10065af7;
    case 0x10065b0fu: goto L_10065b0f;
    case 0x10065b72u: goto L_10065b72;
    case 0x10065b97u: goto L_10065b97;
    default: rt_fatal(g, COW_IMG(0x10065adcu), "switch");
    }
    return 0;
L_10065ae3: ;
    wr32(sp1 - 0x214u, COW_IMG(0x10353becu));
    wr32(sp1 - 0x218u, sp1 - 0x200u);
    g->eax = sp1 - 0x200u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x204u;
    t29 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x200u, COW_IMG(0x10353becu), in_edi, in_esi, sp0 - 4u);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
L_10065b2d: ;
    if (rd8(sp1 - 0x200u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp1 - 0x200u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp1 - 0x200u);
        wr32(sp1 - 0x214u, sp1 - 0x200u);
        g->eax = eax;
        g->esp = sp1 - 0x20cu;
        t32 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, sp1 - 0x200u, 1, 2, sp1 - 0x200u, rd32(sp1 - 0x210u));
        t33 = g->edx;
        eax = t32;
        edx = t33;
        ebp = ebp + 1u;
    }
L_10065b43: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp1 - 0x210u;
    t34 = cow_thiscall(g, COW_IMG(0x1006bb40u), self + 0x10cu, 0);
    t35 = g->ecx;
    t36 = g->edx;
    if (t34 != 0u)
    {
        eax = t34;
        edx = t36;
        goto L_10065ad0;
    }
    ecx = t35;
    edx = t36;
L_10065b4e: ;
    wr32(sp1 - 0x214u, ebp);
    wr32(sp1 - 0x218u, COW_IMG(0x10353bc8u));
    wr32(sp1 - 0x21cu, sp1 - 0x200u);
    g->eax = sp1 - 0x200u;
    g->edx = edx;
    g->esp = sp1 - 0x208u;
    t37 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x200u, COW_IMG(0x10353bc8u), ebp, in_edi, in_esi);
    t38 = g->edx;
    wr32(sp1 - 0x220u, sp1 - 0x200u);
    g->esp = sp1 - 0x218u;
    t39 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, sp1 - 0x200u, t38, 1, 2, sp1 - 0x200u, rd32(sp1 - 0x21cu));
    t40 = g->edx;
    g->edx = t40;
    return t39;
L_10065af7: ;
    t25 = rd32(eax + 0xcu);
    wr32(sp1 - 0x214u, t25);
    wr32(sp1 - 0x218u, COW_IMG(0x10353be0u));
    wr32(sp1 - 0x21cu, sp1 - 0x200u);
    g->eax = eax;
    g->ecx = t25;
    g->edx = sp1 - 0x200u;
    g->esp = sp1 - 0x208u;
    t26 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x200u, COW_IMG(0x10353be0u), t25, in_edi, in_esi);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    goto L_10065b2d;
L_10065b0f: ;
    g->eax = eax;
    g->edx = edx;
    t18 = rd32(eax + 0xcu);
    g->esp = sp1 - 0x210u;
    t19 = cow_thiscall(g, COW_IMG(0x100643f0u), eax, 0);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp1 - 0x214u, t19);
    wr32(sp1 - 0x218u, t18);
    wr32(sp1 - 0x21cu, COW_IMG(0x10353bd4u));
    wr32(sp1 - 0x220u, sp1 - 0x200u);
    eax = sp1 - 0x200u;
    ecx = t20;
    edx = t21;
    al_m214 = t19;
    al_m218 = t18;
    al_m21c = COW_IMG(0x10353bd4u);
L_10065b25: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x20cu;
    t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x200u, al_m21c, al_m218, al_m214, in_edi);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    goto L_10065b2d;
L_10065b72: ;
    g->eax = eax;
    g->edx = edx;
    t11 = rd32(eax + 0xcu);
    g->esp = sp1 - 0x210u;
    t12 = cow_thiscall(g, COW_IMG(0x10064400u), eax, 0);
    t13 = g->edx;
    d14 = cow_take_float(g);
    wrf64(sp1 - 0x218u, d14);
    wr32(sp1 - 0x21cu, t11);
    wr32(sp1 - 0x220u, COW_IMG(0x10353bbcu));
    wr32(sp1 - 0x224u, sp1 - 0x200u);
    g->ecx = sp1 - 0x200u;
    g->edx = t13;
    t15 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp1 - 0x200u, COW_IMG(0x10353bbcu), t11, cow_dlo(d14), cow_dhi(d14));
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    goto L_10065b2d;
L_10065b97: ;
    t9 = rd32(eax + 0x18u);
    wr32(sp1 - 0x214u, t9);
    t10 = rd32(eax + 0xcu);
    wr32(sp1 - 0x218u, t10);
    wr32(sp1 - 0x21cu, COW_IMG(0x10353bb0u));
    wr32(sp1 - 0x220u, sp1 - 0x200u);
    eax = t10;
    ecx = sp1 - 0x200u;
    edx = t9;
    al_m214 = t9;
    al_m218 = t10;
    al_m21c = COW_IMG(0x10353bb0u);
    goto L_10065b25;
L_10065bae: ;
    wr8(sp1 - 0x200u, 0u);
    loc_4 = in_ebp;
    al_m20c = in_esi;
    al_m210 = in_edi;
    goto L_10065b43;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10065aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10065aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
