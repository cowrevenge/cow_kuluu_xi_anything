/* f_0x102755e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102755e0(Guest* g)
{
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x84u, in_esi);
    wr32(sp0 - 0x88u, in_edi);
    if ((int32_t)arg2 <= 0)
    {
        ebx = in_ebx;
    }
    else
    {
        wr32(sp0 - 0x8cu, in_ebx);
        edx = in_edx;
        esi = 0u;
L_102755fd: ;
        wr32(sp0 - 0x90u, 1u);
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        wr32(sp0 - 0x98u, arg1 + esi);
        g->ebx = arg1;
        g->eax = sp0 - 0x80u;
        g->esp = sp0 - 0x8cu;
        t1 = cow_call_regs(g, COW_IMG(0x102756c0u), g->eax, arg1 + esi, edx, 1, 3, arg1 + esi, sp0 - 0x80u, 1u);
        t2 = g->ecx;
        wr32(sp0 - 0x9cu, sp0 - 0x80u);
        wr32(sp0 - 0xa0u, COW_IMG(0x10361dc0u));
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x98u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x10361dc0u), sp0 - 0x80u);
        t3 = g->edx;
        if ((int32_t)(esi + 0x10u) < (int32_t)arg2)
        {
            edx = t3;
            esi = esi + 0x10u;
            goto L_102755fd;
        }
        ebx = rd32(sp0 - 0x8cu);
    }
    g->ebx = ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102755e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102755e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
