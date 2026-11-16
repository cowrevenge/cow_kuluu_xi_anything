/* f_0x10004a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10004a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    int64_t q14;
    int64_t q23;
    int64_t q5;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 572u);

    wr32(sp0 - 0x20cu, in_esi);
    wr32(sp0 - 0x210u, in_edi);
    if (rd32(COW_IMG(0x10455afcu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10455afcu));
        edx = in_edx;
        goto L_10004bb8;
    }
    eax = rd32(COW_IMG(0x10455afcu));
    if (eax == 1u) goto L_10004aa4;
    eax = eax - 1u;
    return eax & 0xffffff00u;
L_10004aa4: ;
    t1 = rd32(arg1 + 8u);
    wr32(sp0 - 0x214u, t1);
    wr32(sp0 - 0x218u, COW_IMG(0x1034f8c8u));
    wr32(sp0 - 0x21cu, sp0 - 0x104u);
    g->ecx = sp0 - 0x104u;
    g->esp = sp0 - 0x208u;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x104u, COW_IMG(0x1034f8c8u), t1, in_edi, in_esi);
    t3 = g->ecx;
    wr32(sp0 - 0x220u, sp0 - 0x104u);
    g->esp = sp0 - 0x21cu;
    cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, t3, sp0 - 0x104u, 1, 1, sp0 - 0x104u);
    t4 = g->edx;
    q5 = (int64_t)cow_muls(0x10624dd3u, rd32(arg1 + 8u));
    t6 = (uint32_t)((int32_t)cow_qhi(q5) >> 6u);
    t7 = rd32(arg1 + 8u);
    wr32(sp0 - 0x224u, t7);
    t8 = t6 + (t6 >> 0x1fu);
    wr32(sp0 - 0x228u, t8);
    wr32(sp0 - 0x22cu, COW_IMG(0x1034f898u));
    wr32(sp0 - 0x230u, sp0 - 0x208u);
    g->ecx = sp0 - 0x208u;
    t9 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f898u), t8, t7, sp0 - 0x104u);
    t10 = g->ecx;
    wr32(sp0 - 0x234u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x238u, sp0 - 0x208u);
    g->ecx = t10;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x224u;
    t11 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f2d0u), sp0 - 0x208u, COW_IMG(0x1034f898u), rd32(sp0 - 0x228u));
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        edi = in_edi;
        goto L_10004b9a;
    }
    edx = t13;
    q14 = (int64_t)cow_muls(0x10624dd3u, rd32(arg1 + 8u));
    t15 = (uint32_t)((int32_t)cow_qhi(q14) >> 6u);
    t16 = rd32(arg1 + 8u);
    wr32(sp0 - 0x214u, t16);
    t17 = t15 + (t15 >> 0x1fu);
    wr32(sp0 - 0x218u, t17);
    wr32(sp0 - 0x21cu, COW_IMG(0x1034f864u));
    wr32(sp0 - 0x220u, sp0 - 0x208u);
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x20cu;
    t18 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f864u), t17, t16, rd32(sp0 - 0x210u));
    t19 = g->ecx;
    wr32(sp0 - 0x224u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x228u, sp0 - 0x208u);
    g->ecx = t19;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x214u;
    t20 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f2d0u), sp0 - 0x208u, COW_IMG(0x1034f864u), rd32(sp0 - 0x218u));
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        edi = in_edi;
        goto L_10004b9a;
    }
    edx = t22;
    edi = 2u;
L_10004b4d: ;
    q23 = (int64_t)cow_muls(0x10624dd3u, rd32(arg1 + 8u));
    t24 = (uint32_t)((int32_t)cow_qhi(q23) >> 6u);
    t25 = rd32(arg1 + 8u);
    wr32(sp0 - 0x214u, t25);
    t26 = t24 + (t24 >> 0x1fu);
    wr32(sp0 - 0x218u, t26);
    wr32(sp0 - 0x21cu, edi);
    wr32(sp0 - 0x220u, COW_IMG(0x1034f830u));
    wr32(sp0 - 0x224u, sp0 - 0x208u);
    g->ecx = sp0 - 0x208u;
    g->esp = sp0 - 0x210u;
    t27 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x208u, COW_IMG(0x1034f830u), edi, t26, t25);
    t28 = g->ecx;
    wr32(sp0 - 0x228u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x22cu, sp0 - 0x208u);
    g->ecx = t28;
    g->edx = sp0 - 0x208u;
    g->esp = sp0 - 0x218u;
    t29 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x208u, COW_IMG(0x1034f2d0u), sp0 - 0x208u, COW_IMG(0x1034f830u), rd32(sp0 - 0x21cu));
    t30 = g->ecx;
    t31 = g->edx;
    if (t29 != 0u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        goto L_10004b9a;
    }
    eax = t29;
    edx = t31;
    if ((int32_t)(edi + 1u) < 16)
    {
        edi = edi + 1u;
        goto L_10004b4d;
    }
    g->esi = rd32(sp0 - 0x20cu);
    g->edi = rd32(sp0 - 0x210u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10004b9a: ;
    wr32(sp0 - 0x214u, eax);
    g->edi = edi;
    g->esp = sp0 - 0x208u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, eax, rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu));
    t32 = g->edx;
    wr32(sp0 - 0x214u, 0u);
    wr32(sp0 - 0x218u, sp0 - 0x104u);
    wr32(sp0 - 0x21cu, sp0 - 0x208u);
    g->eax = sp0 - 0x104u;
    g->edx = t32;
    g->esp = sp0 - 0x210u;
    t33 = cow_thiscall(g, rd32(COW_IMG(0x1032912cu)), sp0 - 0x208u, 3, sp0 - 0x208u, sp0 - 0x104u, 0u);
    t34 = g->edx;
    eax = t33;
    edx = t34;
L_10004bb8: ;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10004a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
