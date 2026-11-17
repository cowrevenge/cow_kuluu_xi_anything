/* f_0x1027cd50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1027cd50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 176u);

    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    wr32(sp0 - 0x9cu, arg2);
    wr32(sp0 - 0xa0u, arg1);
    g->esp = sp0 - 0x90u;
    t1 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, arg2, in_edi, in_esi);
    wr32(sp0 - 0xa4u, sp0 - 0x80u);
    g->eax = sp0 - 0x80u;
    t2 = rd32(arg1 + 0x24u);
    g->esp = sp0 - 0xa0u;
    t3 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x80u);
    eax = t3;
    ebx = t1 * 0x9cu + t2;
    esi = arg2;
    loc_90 = in_ebx;
    loc_94 = in_esi;
    loc_98 = in_edi;
L_1027cd89: ;
    wr32(sp0 - 0x9cu, sp0 - 0x80u);
    wr32(sp0 - 0xa0u, ebx + 0x1cu);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x40u, ebx + 0x1cu, sp0 - 0x80u);
    t4 = g->edx;
    wr32(sp0 - 0xa8u, sp0 - 0x40u);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    g->cf = g->cf;
    g->pf = g->pf;
    g->af = g->af;
    g->zf = g->zf;
    g->sf = g->sf;
    g->of = g->of;
    g->eax = sp0 - 0x40u;
    g->ecx = sp0 - 0x80u;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x80u, sp0 - 0x40u, sp0 - 0x40u, rd32(sp0 - 0xa0u), sp0 - 0x80u);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(esi + 0x68u) == 0u) goto L_1027cdcf;
    eax = t5;
    ecx = t6;
    edx = t7;
    esi = rd32(esi + 0x68u);
    wr32(sp0 - 0x9cu, esi);
    wr32(sp0 - 0xa0u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x90u;
    t8 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, esi, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    eax = rd32(arg1 + 0x24u);
    ebx = t8 * 0x9cu + rd32(arg1 + 0x24u);
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_98 = rd32(sp0 - 0x98u);
    goto L_1027cd89;
L_1027cdcf: ;
    wr32(sp0 - 0x9cu, sp0 - 0x8cu);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    wr32(sp0 - 0xa4u, arg3);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, 0u);
    wr32(sp0 - 0x84u, 0u);
    g->eax = arg3;
    g->esp = sp0 - 0x98u;
    t9 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, arg3, sp0 - 0x80u, sp0 - 0x8cu);
    wr32(sp0 - 0xa8u, sp0 - 0x80u);
    wr32(sp0 - 0xacu, arg4);
    g->esp = sp0 - 0x9cu;
    cow_call_regs(g, COW_IMG(0x1027a8c0u), t9, sp0 - 0x80u, g->edx, 1, 4, arg4, sp0 - 0x80u, arg3, sp0 - 0x80u);
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027cd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027cd50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
