/* f_0x100cfa50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100cfa50(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    if (arg1 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(arg1);
    }
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x2au);
    wr32(sp0 - 0x34u, eax);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, 0x2au, 0u, 0xffffffffu);
    t1 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        edx = t1;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = rd32(sp0 - 8u);
        edx = t1;
        wr32(sp0 - 0x28u, in_esi);
        wr32(sp0 - 0x2cu, in_edi);
L_100cfa83: ;
        t2 = rd32(eax + 0x14u);
        wr32(sp0 - 0x30u, t2);
        g->edx = edx;
        g->esp = sp0 - 0x2cu;
        t3 = cow_thiscall(g, COW_IMG(0x10029f70u), arg2, 1, t2);
        t4 = g->edx;
        g->edx = t4;
        cow_call_regs(g, COW_IMG(0x10071e90u), t3, rd32(t2), g->edx, 1, 0);
        t5 = g->edx;
        wr32(sp0 - 0x30u, 0u);
        g->edx = t5;
        cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
        t6 = g->edx;
        if (rd32(sp0 - 8u) != 0u)
        {
            eax = rd32(sp0 - 8u);
            edx = t6;
            goto L_100cfa83;
        }
        edx = t6;
        esi = rd32(sp0 - 0x28u);
        edi = rd32(sp0 - 0x2cu);
    }
    if ((rd32(rd32(arg1) + 0x24u) & 0x7fu) == 1u)
    {
        eax = rd32(arg1);
        wr32(sp0 - 0x28u, arg1);
        g->esp = sp0 - 0x24u;
        cow_fastcall(g, COW_IMG(0x10085060u), self, edx, 1, arg1);
    }
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x24u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cfa50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100cfa50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
