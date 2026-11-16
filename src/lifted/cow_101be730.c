/* f_0x101be730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101be730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 284u);

    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, in_edi);
    eax = sp0 - 0x100u;
    edx = in_edx;
    ebp = rd32(COW_IMG(0x10329208u));
    edi = 0u;
L_101be74f: ;
    if (rd8(arg1 + edi) != 0x2fu)
    {
        esi = edi + sp0 - 0x100u;
    }
    else
    {
        esi = edi + sp0 - 0x100u;
        wr32(sp0 - 0x114u, 0u);
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        wr8(esi, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x110u;
        t1 = cow_thiscall(g, ebp, sp0 - 0x100u, 2, sp0 - 0x100u, 0u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    t3 = rd8(arg1 + esi - sp0 + 0x100u);
    wr8(esi, (uint8_t)t3);
    if ((int32_t)(edi + 1u) < 256)
    {
        edx = (edx & 0xffffff00u) | t3;
        edi = edi + 1u;
        goto L_101be74f;
    }
    edx = (edx & 0xffffff00u) | t3;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be730(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
