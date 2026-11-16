/* f_0x102c4645 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_102c4645(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if ((rd8(arg1 + 0x11cu) & 0x20u) == 0u) goto L_102c4669;
    if ((rd32(arg1 + 0x6cu) & 0x300u) != 0x300u)
    {
        ecx = rd32(arg1 + 0x6cu) & 0x300u;
        edi = 1u;
        goto L_102c4671;
    }
    ecx = rd32(arg1 + 0x6cu) & 0x300u;
L_102c466f: ;
    edi = 0u;
L_102c4671: ;
    wr32(sp0 - 0x10u, 4u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102c3c7du), g->eax, g->ecx, in_edx, 1, 3, arg1, sp0 + 4u, 4u);
    t1 = g->ecx;
    t2 = g->edx;
    if (edi == 0u)
    {
        edx = t2;
        eax = 0u;
    }
    else
    {
        ecx = t1;
        edx = t2;
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = sp0 + 4u;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 + 4u);
        t4 = g->edx;
        t5 = t3 != rd32(arg1 + 0x110u);
        eax = t5;
        edx = t4;
    }
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102c4669: ;
    if ((rd8(arg1 + 0x6du) & 8u) == 0u)
    {
        ecx = self;
        edi = 1u;
        goto L_102c4671;
    }
    ecx = self;
    goto L_102c466f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c4645(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c4645(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
