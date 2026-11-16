/* f_0x10324037 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10324037(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t3;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0xcu, 0u);
    if (arg1 == 0u) goto L_10324197;
    if (rd32(sp0 + 0xcu) != 0u)
    {
        edx = rd32(sp0 + 0xcu);
        goto L_10324060;
    }
    eax = 0u;
L_103241e1: ;
    return eax;
L_10324060: ;
    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_10324095;
    if (edx == 0u)
    {
        edi = 0u;
        goto L_1032408e;
    }
    eax = in_eax;
    ecx = rd32(sp0 + 8u);
    edi = 0u;
L_1032406f: ;
    if (rd16(ecx) > 0xffu) goto L_103241d3;
    t1 = rd8(ecx);
    wr8(arg1 + edi, (uint8_t)t1);
    if (rd16(ecx) == 0u) goto L_1032408e;
    eax = ((eax | t1) & 0xffff0000u) | rd16(ecx);
    ecx = ecx + 2u;
    if (edi + 1u < edx)
    {
        edi = edi + 1u;
        goto L_1032406f;
    }
    edi = edi + 1u;
L_1032408e: ;
    eax = edi;
    goto L_103241e1;
L_10324095: ;
    if (rd32(COW_IMG(0x103d023cu)) != 1u) goto L_103240ee;
    if (edx == 0u)
    {
        ecx = self;
    }
    else
    {
        wr32(sp0 - 0x20u, edx);
        t2 = rd32(sp0 + 8u);
        wr32(sp0 - 0x24u, t2);
        g->eax = in_eax;
        g->esp = sp0 - 0x14u;
        t3 = cow_cdecl(g, COW_IMG(0x103241e6u), 4, t2, edx, in_edi, in_esi);
        wr32(sp0 + 0xcu, t3);
        ecx = rd32(sp0 - 0x20u);
        edx = t3;
    }
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edx);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, edx);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t4);
    wr32(sp0 - 0x38u, 0x220u);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x10329154u)), ecx, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, t4, edx, arg1, edx, 0u, sp0 - 0xcu);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_103241d3;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    if (rd32(sp0 - 0xcu) != 0u) goto L_103241d3;
    if (rd8(arg1 + eax - 1u) != 0u) goto L_103241e1;
L_103241d0: ;
    eax = eax - 1u;
    goto L_103241e1;
L_103240ee: ;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, edx);
    wr32(sp0 - 0x2cu, arg1);
    wr32(sp0 - 0x30u, 0xffffffffu);
    t8 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t8);
    wr32(sp0 - 0x38u, 0x220u);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    t9 = rd32(COW_IMG(0x10329154u));
    g->esp = sp0 - 0x1cu;
    t10 = cow_thiscall(g, t9, self, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, t8, 0xffffffffu, arg1, edx, 0u, sp0 - 0xcu);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        esi = t10;
        edi = t9;
        goto L_10324124;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    esi = t10;
    if (rd32(sp0 - 0xcu) != 0u) goto L_103241d3;
    eax = esi - 1u;
    goto L_103241e1;
L_10324124: ;
    if (rd32(sp0 - 0xcu) != 0u) goto L_103241d3;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t13 = cow_thiscall(g, rd32(COW_IMG(0x10329168u)), ecx, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 != 0x7au)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        goto L_103241d3;
    }
    ecx = t14;
    edx = t15;
L_1032413c: ;
    if (esi >= rd32(sp0 + 0xcu)) goto L_10324193;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x103d023cu)));
    wr32(sp0 - 0x2cu, sp0 - 6u);
    wr32(sp0 - 0x30u, 1u);
    t16 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t16);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 6u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t17 = cow_thiscall(g, edi, ecx, 8, rd32(COW_IMG(0x109b27c8u)), 0u, t16, 1u, sp0 - 6u, rd32(COW_IMG(0x103d023cu)), 0u, sp0 - 0xcu);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x10u, t17);
    if (t17 == 0u)
    {
        eax = t17;
        ecx = t18;
        edx = t19;
        goto L_103241d3;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    loc_10 = t17;
    if (rd32(sp0 - 0xcu) != 0u) goto L_103241d3;
    if (eax + esi > rd32(sp0 + 0xcu)) goto L_10324193;
    ecx = eax + esi;
    if ((int32_t)eax <= 0)
    {
        edx = 0u;
        goto L_1032418d;
    }
    edx = 0u;
L_10324178: ;
    t20 = rd8(edx + sp0 - 6u);
    wr8(arg1 + esi, (uint8_t)t20);
    if ((uint8_t)t20 == 0u) goto L_10324193;
    ecx = (ecx & 0xffffff00u) | t20;
    if ((int32_t)(edx + 1u) < (int32_t)loc_10)
    {
        edx = edx + 1u;
        esi = esi + 1u;
        goto L_10324178;
    }
    edx = edx + 1u;
    esi = esi + 1u;
L_1032418d: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 2u);
    goto L_1032413c;
L_10324193: ;
    eax = esi;
    goto L_103241e1;
L_10324197: ;
    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_103241aa;
    t21 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t21);
    g->eax = in_eax;
    g->esp = sp0 - 0x1cu;
    t22 = cow_call_regs(g, COW_IMG(0x10311ecfu), g->eax, g->ecx, in_edx, 1, 1, t21);
    eax = t22;
    goto L_103241e1;
L_103241aa: ;
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0xffffffffu);
    t23 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t23);
    wr32(sp0 - 0x38u, 0x220u);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t24 = cow_thiscall(g, rd32(COW_IMG(0x10329154u)), self, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, t23, 0xffffffffu, 0u, 0u, 0u, sp0 - 0xcu);
    t25 = g->ecx;
    t26 = g->edx;
    if (t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        goto L_103241d3;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    if (rd32(sp0 - 0xcu) != 0u) goto L_103241d3;
    goto L_103241d0;
L_103241d3: ;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t27 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    wr32(t27, 0x2au);
    eax = 0xffffffffu;
    goto L_103241e1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324037(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324037(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
