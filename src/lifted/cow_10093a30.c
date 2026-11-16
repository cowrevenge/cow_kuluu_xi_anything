/* f_0x10093a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10093a30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;

    edi = COW_IMG(0x1047fb48u);
    eax = 0u;
    ecx = 0xdbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047fb48u);
    ecx = 0x58u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047fca8u);
    ecx = 0x58u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edi = COW_IMG(0x1047fe08u);
    ecx = 0x20u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(COW_IMG(0x1047fe88u), eax);
    wr16(COW_IMG(0x1047fe8cu), (uint16_t)eax);
    wr8(COW_IMG(0x1047fe8eu), (uint8_t)eax);
    wr8(COW_IMG(0x1047fe8fu), (uint8_t)eax);
    wr32(COW_IMG(0x1047feb0u), eax);
    wr32(COW_IMG(0x1047feacu), eax);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10093a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10093a30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
