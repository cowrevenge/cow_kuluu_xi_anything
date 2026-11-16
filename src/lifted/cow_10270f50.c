/* f_0x10270f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10270f50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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

    if ((rd8(COW_IMG(0x1099b0d8u)) & 8u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1099b0d8u));
        esi = rd32(sp0 + 4u);
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10271050u), 1, esi);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, COW_IMG(0x10271610u), t2, 1, esi);
        t4 = g->ecx;
        t5 = g->edx;
        t6 = (rd32(COW_IMG(0x1099b0d8u)) & 0xffffff00u) | (rd32(COW_IMG(0x1099b0d8u)) & 0xf7u);
        wr32(COW_IMG(0x1099b0d8u), t6);
        ecx = t4;
        edx = t5;
    }
    if (!(rd32(COW_IMG(0x1099b0d8u)) >> 8u & 1u))
    {
        eax = rd32(COW_IMG(0x1099b0d8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x1099b0d8u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x10273580u), eax, g->ecx, g->edx, 1, 1, esi);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    t9 = (rd32(COW_IMG(0x1099b0d8u)) & 0xffffff00u) | (rd32(COW_IMG(0x1099b0d8u)) & 0xfu);
    wr32(COW_IMG(0x1099b0d8u), t9);
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1026e5b0u), 1, esi);
    t10 = g->edx;
    wr32(sp0 + 4u, rd32(COW_IMG(0x1099b0f4u)));
    edx = t10;
    ebx = rd32(sp0 + 4u);
    esi = COW_IMG(0x1099bf88u);
    edi = COW_IMG(0x1099c518u);
L_10270fd2: ;
    if ((rd8(edi - 4u) & 2u) != 0u)
    {
        t11 = COW_IMG(0x1099b3a4u) + ebx * 0x7cu;
        g->eax = COW_IMG(0x1099b33cu) + ebx * 0x7cu;
        g->ecx = esi - 0x26cu;
        g->esp = sp0 - 0x10u;
        t12 = cow_cdecl(g, COW_IMG(0x1027b190u), 3, esi - 0x26cu, t11, edi);
        t13 = g->ecx;
        g->ecx = t13;
        g->edx = esi - 0x2d4u;
        g->esp = sp0 - 0x1cu;
        t14 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi - 0x2d4u);
        t15 = g->ecx;
        t16 = g->edx;
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x1027b190u), 3, esi, t11, edi);
        t17 = g->ecx;
        t18 = g->edx;
        g->eax = esi - 0x68u;
        g->edx = t18;
        g->esp = sp0 - 0x2cu;
        t19 = cow_cdecl(g, COW_IMG(0x1026e210u), 1, esi - 0x68u);
        t20 = g->edx;
        g->edx = t20;
        g->esp = sp0 - 0x30u;
        cow_cdecl(g, COW_IMG(0x102806d0u), 4, esi - 0x4cu, 0x3e800000u, 0x3e800000u, 0x3e800000u);
        t21 = g->edx;
        edx = t21;
    }
    if ((int32_t)(edi + 0x14u) < (int32_t)COW_IMG(0x1099c57cu))
    {
        esi = esi + 0x7cu;
        edi = edi + 0x14u;
        goto L_10270fd2;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10270f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10270f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
