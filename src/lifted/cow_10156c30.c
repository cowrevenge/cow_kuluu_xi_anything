/* f_0x10156c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10156c30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 572u);

    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_ebp);
    wr32(sp0 - 0x210u, in_esi);
    wr32(sp0 - 0x214u, in_edi);
    ebp = 0u;
    esi = 0u;
L_10156c4c: ;
    wr32(sp0 - 0x218u, COW_IMG(0x1011d980u));
    wr32(sp0 - 0x21cu, COW_IMG(0x1011d970u));
    wr32(sp0 - 0x220u, 0x14u);
    wr32(sp0 - 0x224u, 0u);
    wr32(sp0 - 0x228u, arg3);
    wr32(sp0 - 0x22cu, sp0 - 0x204u);
    wr32(sp0 - 0x230u, arg4 + esi);
    wr32(sp0 - 0x234u, 0x200u);
    wr32(sp0 - 0x238u, sp0 - 0x200u);
    g->eax = sp0 - 0x204u;
    g->esp = sp0 - 0x1e8u;
    t1 = cow_bridge_indirect(g, COW_IMG(0x1025b6e0u), 0u, 20u, (const uint32_t[]){sp0 - 0x200u, 0x200u, arg4 + esi, sp0 - 0x204u, arg3, 0u, 0x14u, COW_IMG(0x1011d970u), COW_IMG(0x1011d980u), in_edi, in_esi, in_ebp, in_ebx, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu)}, g->ecx, g->edx, g->eax, 80u);
    if (t1 == 0u)
    {
        esi = esi + rd32(sp0 - 0x204u);
    }
    else
    {
        eax = t1;
        esi = esi + rd32(sp0 - 0x204u);
        wr32(sp0 - 0x218u, arg6);
        wr32(sp0 - 0x21cu, eax);
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        wr32(sp0 - 0x224u, arg2 + ebp);
        wr32(sp0 - 0x228u, arg1);
        g->esp = sp0 - 0x1fcu;
        cow_cdecl(g, COW_IMG(0x10129f00u), 11, arg1, arg2 + ebp, sp0 - 0x200u, eax, arg6, rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    }
    if (rd8(arg4 + esi) == 0u) goto L_10156cbc;
    ebp = arg5 + ebp + 0x10u;
    goto L_10156c4c;
L_10156cbc: ;
    g->ebx = rd32(sp0 - 0x208u);
    g->esi = rd32(sp0 - 0x210u);
    g->edi = rd32(sp0 - 0x214u);
    g->ebp = rd32(sp0 - 0x20cu);
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
