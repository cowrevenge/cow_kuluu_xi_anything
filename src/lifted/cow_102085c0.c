/* f_0x102085c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102085c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    esi = 0u;
L_102085c9: ;
    t1 = (eax & 0xffffff00u) | rd8(self + 0x22u);
    g->edi = self;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x100fcc50u), 3, t1, 0x1201u, esi);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        ebx = ebx + 1u;
    }
    if ((int32_t)(esi + 1u) < 256)
    {
        esi = esi + 1u;
        goto L_102085c9;
    }
    g->edi = in_edi;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102085c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102085c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
