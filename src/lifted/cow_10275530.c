/* f_0x10275530 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10275530(Guest* g)
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
    uint32_t t2;
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
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x84u, in_ebx);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    wr32(sp0 - 0x90u, COW_IMG(0x103b2978u));
    g->ecx = self;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x1099d1f8u));
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2978u), in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x1099cf4cu) + t1 * 0x60u) >= rd32(COW_IMG(0x1099cf50u) + t1 * 0x60u))
    {
        eax = rd32(COW_IMG(0x1099cf50u) + t1 * 0x60u);
        ecx = t2;
        edx = t3;
        goto L_102755af;
    }
    edx = t3;
    ebx = 0u;
    esi = rd32(COW_IMG(0x1099cf4cu) + t1 * 0x60u);
    edi = COW_IMG(0x1099cef8u) + t1 * 0x60u;
L_10275563: ;
    wr32(sp0 - 0x90u, esi + 0x10u);
    g->ecx = esi + 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t4 = cow_cdecl(g, COW_IMG(0x10275310u), 1, esi + 0x10u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 2u)
    {
        ecx = t5;
        edx = t6;
        goto L_10275579;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    if (eax != 3u) goto L_10275599;
L_10275579: ;
    wr32(sp0 - 0x90u, 0u);
    wr32(sp0 - 0x94u, sp0 - 0x80u);
    wr32(sp0 - 0x98u, ecx);
    g->ebx = ebx;
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x8cu;
    t7 = cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, ecx, edx, 1, 3, ecx, sp0 - 0x80u, 0u);
    t8 = g->edx;
    wr32(sp0 - 0x9cu, sp0 - 0x80u);
    wr32(sp0 - 0xa0u, COW_IMG(0x10361dc0u));
    g->ecx = sp0 - 0x80u;
    g->edx = t8;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10361dc0u), sp0 - 0x80u);
    t9 = g->ecx;
    t10 = g->edx;
    ecx = t9;
    edx = t10;
    ebx = ebx + 1u;
L_10275599: ;
    wr32(sp0 - 0x90u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x8cu;
    t11 = cow_cdecl(g, COW_IMG(0x10275340u), 1, esi);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 < rd32(edi + 0x58u))
    {
        edx = t13;
        esi = t11;
        goto L_10275563;
    }
    eax = rd32(edi + 0x58u);
    ecx = t12;
    edx = t13;
    if (ebx != 0u) goto L_102755bc;
L_102755af: ;
    wr32(sp0 - 0x90u, COW_IMG(0x103b295cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x88u;
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b295cu), in_edi);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
L_102755bc: ;
    wr32(sp0 - 0x90u, COW_IMG(0x103b2950u));
    g->esp = sp0 - 0x88u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b2950u), rd32(sp0 - 0x8cu));
    g->ebx = rd32(sp0 - 0x84u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10275530(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10275530(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
