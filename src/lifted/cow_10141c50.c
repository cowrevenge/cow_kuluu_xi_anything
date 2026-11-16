/* f_0x10141c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10141c50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x16u, 0u);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x12u, 0u);
    wr32(sp0 - 0xeu, 0u);
    wr32(sp0 - 0xau, 0u);
    wr32(sp0 - 6u, 0u);
    wr16(sp0 - 0x18u, 0u);
    wr16(sp0 - 2u, 0u);
    eax = 0u;
    ecx = sp0 - 0x18u;
    esi = 0u;
L_10141c83: ;
    if (rd16(arg1 + esi * 2u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + esi * 2u);
        edx = arg1 + esi * 2u - sp0 + 0x18u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(arg1 + esi * 2u);
        edx = arg1 + esi * 2u - sp0 + 0x18u;
        wr32(sp0 - 0x24u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_cdecl(g, COW_IMG(0x10141c20u), 1, esi);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    wr16(esi * 2u + sp0 - 0x18u, (uint16_t)eax);
    if ((int32_t)(esi + 1u) < 12)
    {
        esi = esi + 1u;
        goto L_10141c83;
    }
    wr32(sp0 - 0x24u, sp0 - 0x18u);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x101444f0u), sp0 - 0x18u, g->ecx, g->edx, 1, 3, sp0 - 0x18u, in_edi, in_esi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10141c50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
