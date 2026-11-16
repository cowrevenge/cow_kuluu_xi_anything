/* f_0x1010c4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1010c4d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    edx = sp0 - 0x10u;
    edi = 0u;
L_1010c4de: ;
    if (rd32(edi * 4u + self) == 0u) goto L_1010c506;
    esi = rd32(edi * 4u + self);
    ecx = 0x1eu;
L_1010c4ea: ;
    wr8(edx, esi >> (ecx - 6u & 0x1fu) & 0x3fu);
    if ((esi >> (ecx - 6u & 0x1fu) & 0x3fu) == 0u) goto L_1010c500;
    eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
    ecx = ecx - 6u;
    wr8(edx, (uint8_t)((uint8_t)eax + 0x20u));
    if ((int32_t)ecx > 0)
    {
        edx = edx + 1u;
        goto L_1010c4ea;
    }
    edx = edx + 1u;
L_1010c500: ;
    if ((int32_t)(edi + 1u) < 3)
    {
        edi = edi + 1u;
        goto L_1010c4de;
    }
L_1010c506: ;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr8(edx, 0u);
    g->esp = sp0 - 0x1cu;
    t1 = cow_call_regs(g, COW_IMG(0x101092c0u), sp0 - 0x10u, arg1, g->edx, 0, 1, sp0 - 0x10u);
    return t1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010c4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010c4d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
