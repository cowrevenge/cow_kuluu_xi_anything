/* f_0x10264f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10264f20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327d38u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_10264f59;
    }
    loc_c = t1;
    wr32(g->fs_base, loc_c);
    return 0x80004003u;
L_10264f59: ;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, 0u);
    if (t2 == 0xcu)
    {
        eax = t2 - 0xcu;
        esi = t2;
        edi = 0u;
    }
    else
    {
        eax = t2 - 0xcu;
        esi = t2;
        edi = esi + 4u;
    }
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 + 4u, edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, edi);
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    t4 = rd32(esi + 0x1cu);
    wr32(ebx + 0x1cu, t4);
    t5 = rd32(esi + 0x20u);
    wr32(esi + 0x1cu, ebx);
    wr32(esi + 0x20u, t5 + 1u);
    if (rd32(esi + 0x28u) == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = rd32(esi + 0x28u);
        edx = t3;
        g->esp = sp0 - 0x18u;
        cow_fastcall(g, COW_IMG(0x102650d0u), esi - 0xcu, edx, 0);
        t6 = g->edx;
        edx = t6;
    }
    if (rd32(esi + 0x48u) == 0u)
    {
        eax = rd32(esi + 0x20u);
        ecx = rd32(esi + 0x48u);
        goto L_10264fcb;
    }
    eax = rd32(esi + 0x20u);
    ecx = rd32(esi + 0x48u);
    if (eax != rd32(esi + 0x30u)) goto L_10264fcb;
    g->eax = eax;
    g->edx = rd32(esi - 0xcu);
    t7 = rd32(esi - 0xcu);
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, rd32(t7 + 0x10u), esi - 0xcu, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(esi + 0x48u, 0u);
    eax = t8;
    ecx = t9;
    edx = t10;
    ebx = 1u;
L_10264fcf: ;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 4u, 0xffffffffu);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd32(esi + 0x4cu) == 0u)
    {
        eax = rd32(esi + 0x4cu);
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = rd32(esi + 0x4cu);
        edx = t12;
        wr32(sp0 - 0x1cu, eax);
        g->eax = eax;
        g->edx = edx;
        t13 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t14 = cow_thiscall(g, rd32(t13 + 0xcu), t13, 1, eax);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    if (ebx != 0u)
    {
        wr32(sp0 - 0x1cu, esi);
        g->edx = rd32(esi);
        t17 = rd32(esi);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(t17 + 8u), ecx, 1, esi);
        t18 = g->edx;
        edx = t18;
    }
    t19 = rd32(sp0 - 0xcu);
    t20 = rd32(sp0 - 0x14u);
    t21 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t19);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t20;
    g->edi = t21;
    g->edx = edx;
    return 0u;
L_10264fcb: ;
    ebx = rd32(sp0 + 8u);
    goto L_10264fcf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264f20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
